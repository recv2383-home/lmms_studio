#include "VstPluginManager.h"

#include <QDialogButtonBox>
#include <QDir>
#include <QDirIterator>
#include <QFileDialog>
#include <QFileInfo>
#include <QLabel>
#include <QListWidget>
#include <QPushButton>
#include <QTextStream>
#include <QVBoxLayout>
#include <QHBoxLayout>

#include "ConfigManager.h"

namespace lmms::gui
{

VstPluginManager::VstPluginManager(QWidget* parent) : QDialog(parent),
    m_paths(new QListWidget(this)), m_plugins(new QListWidget(this))
{
    setWindowTitle(tr("VST Plugin Manager"));
    resize(760, 500);

    auto layout = new QVBoxLayout(this);
    layout->addWidget(new QLabel(tr("VeSTige search paths"), this));
    layout->addWidget(m_paths);
    auto pathButtons = new QHBoxLayout;
    auto add = new QPushButton(tr("Add folder…"), this);
    auto remove = new QPushButton(tr("Remove"), this);
    pathButtons->addWidget(add);
    pathButtons->addWidget(remove);
    pathButtons->addStretch();
    layout->addLayout(pathButtons);
    auto scan = new QPushButton(tr("Scan VST plugins"), this);
    layout->addWidget(scan);
    layout->addWidget(new QLabel(tr("Discovered plugins (drag these from the Instrument Plugins browser after scanning)"), this));
    layout->addWidget(m_plugins);
    auto removePluginButton = new QPushButton(tr("Remove selected plugin"), this);
    layout->addWidget(removePluginButton);
    auto buttons = new QDialogButtonBox(QDialogButtonBox::Save | QDialogButtonBox::Cancel, this);
    layout->addWidget(buttons);

    connect(add, &QPushButton::clicked, this, &VstPluginManager::addPath);
    connect(remove, &QPushButton::clicked, this, &VstPluginManager::removePath);
    connect(scan, &QPushButton::clicked, this, &VstPluginManager::rescan);
    connect(removePluginButton, &QPushButton::clicked, this, &VstPluginManager::removePlugin);
    connect(buttons, &QDialogButtonBox::accepted, this, &VstPluginManager::save);
    connect(buttons, &QDialogButtonBox::rejected, this, &QDialog::reject);
    loadPaths();
    rescan();
}

QStringList VstPluginManager::paths() const
{
    QStringList result;
    for (int i = 0; i < m_paths->count(); ++i) result << m_paths->item(i)->text();
    return result;
}

void VstPluginManager::loadPaths()
{
    m_paths->addItems(ConfigManager::inst()->value("vst", "searchpaths").split(QDir::listSeparator(), Qt::SkipEmptyParts));
    if (m_paths->count() == 0 && !ConfigManager::inst()->vstDir().isEmpty()) m_paths->addItem(ConfigManager::inst()->vstDir());
}

void VstPluginManager::addPath()
{
    const auto path = QFileDialog::getExistingDirectory(this, tr("Select VST folder"));
    if (!path.isEmpty() && m_paths->findItems(path, Qt::MatchExactly).isEmpty()) m_paths->addItem(path);
}

void VstPluginManager::removePath() { delete m_paths->takeItem(m_paths->currentRow()); }

void VstPluginManager::removePlugin()
{
    const int row = m_plugins->currentRow();
    if (row < 0) return;

    const auto file = m_plugins->item(row)->toolTip();
    const auto preset = ConfigManager::inst()->userPresetsDir() + "VeSTige/"
        + QFileInfo(file).completeBaseName() + ".xpf";
    QFile::remove(preset);
    delete m_plugins->takeItem(row);
}

void VstPluginManager::rescan()
{
    m_plugins->clear();
    const QStringList filters = {"*.dll", "*.DLL", "*.so", "*.vst3"};
    for (const auto& path : paths()) {
        QDir dir(path);
        if (!dir.exists()) continue;
        QDirIterator it(path, filters, QDir::Files, QDirIterator::Subdirectories);
        while (it.hasNext()) {
            const auto file = it.next();
            auto item = new QListWidgetItem(QFileInfo(file).completeBaseName(), m_plugins);
            item->setToolTip(file);
        }
    }
}

void VstPluginManager::save()
{
    const auto presetDir = ConfigManager::inst()->userPresetsDir() + "VeSTige";
    QDir().mkpath(presetDir);
    for (int i = 0; i < m_plugins->count(); ++i)
    {
        const auto item = m_plugins->item(i);
        const auto file = item->toolTip();
        const auto preset = presetDir + "/" + QFileInfo(file).completeBaseName() + ".xpf";
        QFile output(preset);
        if (!output.open(QIODevice::WriteOnly | QIODevice::Text)) continue;
        QTextStream stream(&output);
        stream << "<?xml version='1.0'?>\n<!DOCTYPE lmms-project>\n"
                  "<lmms-project version=\"1.0\" type=\"instrumenttracksettings\">\n"
                  "<head/><instrumenttracksettings name=\"" << item->text().toHtmlEscaped()
               << "\"><instrumenttrack type=\"0\" name=\"" << item->text().toHtmlEscaped()
               << "\"><instrument name=\"vestige\"><vestige plugin=\""
               << file.toHtmlEscaped() << "\" guivisible=\"1\"/></instrument></instrumenttrack></instrumenttracksettings>\n"
                  "</lmms-project>\n";
    }
    // Emit the configuration change only after the generated presets exist;
    // PluginBrowser listens for this signal and rebuilds its tree immediately.
    ConfigManager::inst()->setValue("vst", "searchpaths", paths().join(QDir::listSeparator()));
    accept();
}

} // namespace lmms::gui

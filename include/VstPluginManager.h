#ifndef LMMS_GUI_VST_PLUGIN_MANAGER_H
#define LMMS_GUI_VST_PLUGIN_MANAGER_H

#include <QDialog>
#include <QStringList>

class QListWidget;

namespace lmms::gui
{

class VstPluginManager : public QDialog
{
    Q_OBJECT
public:
    explicit VstPluginManager(QWidget* parent = nullptr);

private slots:
    void addPath();
    void removePath();
    void removePlugin();
    void rescan();
    void save();

private:
    void loadPaths();
    QStringList paths() const;
    QListWidget* m_paths;
    QListWidget* m_plugins;
};

} // namespace lmms::gui

#endif

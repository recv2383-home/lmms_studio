/*
qsynth - A fluidsynth Qt GUI Interface.

   Copyright (C) 2003-2007, rncbc aka Rui Nuno Capela. All rights reserved.

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; either version 2
   of the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.


*/

/********************************************************************************
** Form generated from reading UI file 'PatchesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATCHESDIALOG_H
#define UI_PATCHESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PatchesDialog
{
public:
    QVBoxLayout *vboxLayout;
    QLineEdit *m_filterEdit;
    QSplitter *m_splitter;
    QTreeWidget *m_bankListView;
    QTableView *m_progListView;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *m_okButton;
    QPushButton *m_cancelButton;

    void setupUi(QDialog *PatchesDialog)
    {
        if (PatchesDialog->objectName().isEmpty())
            PatchesDialog->setObjectName(QString::fromUtf8("PatchesDialog"));
        PatchesDialog->resize(480, 350);
        PatchesDialog->setMinimumSize(QSize(300, 150));
        vboxLayout = new QVBoxLayout(PatchesDialog);
        vboxLayout->setSpacing(4);
        vboxLayout->setContentsMargins(4, 4, 4, 4);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        m_filterEdit = new QLineEdit(PatchesDialog);
        m_filterEdit->setObjectName(QString::fromUtf8("m_filterEdit"));

        vboxLayout->addWidget(m_filterEdit);

        m_splitter = new QSplitter(PatchesDialog);
        m_splitter->setObjectName(QString::fromUtf8("m_splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_splitter->sizePolicy().hasHeightForWidth());
        m_splitter->setSizePolicy(sizePolicy);
        m_splitter->setOrientation(Qt::Horizontal);
        m_bankListView = new QTreeWidget(m_splitter);
        m_bankListView->setObjectName(QString::fromUtf8("m_bankListView"));
        m_bankListView->setMinimumSize(QSize(20, 0));
        m_bankListView->setMaximumSize(QSize(80, 32767));
        m_bankListView->setAlternatingRowColors(true);
        m_bankListView->setIndentation(4);
        m_bankListView->setRootIsDecorated(false);
        m_bankListView->setUniformRowHeights(true);
        m_bankListView->setItemsExpandable(false);
        m_bankListView->setSortingEnabled(true);
        m_bankListView->setAllColumnsShowFocus(true);
        m_splitter->addWidget(m_bankListView);
        m_progListView = new QTableView(m_splitter);
        m_progListView->setObjectName(QString::fromUtf8("m_progListView"));
        m_splitter->addWidget(m_progListView);

        vboxLayout->addWidget(m_splitter);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(4);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(120, 8, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        m_okButton = new QPushButton(PatchesDialog);
        m_okButton->setObjectName(QString::fromUtf8("m_okButton"));
        m_okButton->setIconSize(QSize(0, 0));

        hboxLayout->addWidget(m_okButton);

        m_cancelButton = new QPushButton(PatchesDialog);
        m_cancelButton->setObjectName(QString::fromUtf8("m_cancelButton"));
        m_cancelButton->setIconSize(QSize(0, 0));

        hboxLayout->addWidget(m_cancelButton);


        vboxLayout->addLayout(hboxLayout);

        QWidget::setTabOrder(m_okButton, m_cancelButton);

        retranslateUi(PatchesDialog);

        m_okButton->setDefault(true);


        QMetaObject::connectSlotsByName(PatchesDialog);
    } // setupUi

    void retranslateUi(QDialog *PatchesDialog)
    {
        PatchesDialog->setWindowTitle(QCoreApplication::translate("PatchesDialog", "Qsynth: Channel Preset", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = m_bankListView->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("PatchesDialog", "Bank", nullptr));
#if QT_CONFIG(tooltip)
        m_bankListView->setToolTip(QCoreApplication::translate("PatchesDialog", "Bank selector", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        m_progListView->setToolTip(QCoreApplication::translate("PatchesDialog", "Program selector", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        m_okButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        m_okButton->setText(QCoreApplication::translate("PatchesDialog", "OK", nullptr));
#if QT_CONFIG(tooltip)
        m_cancelButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        m_cancelButton->setText(QCoreApplication::translate("PatchesDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatchesDialog: public Ui_PatchesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATCHESDIALOG_H

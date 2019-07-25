/********************************************************************************
** Form generated from reading UI file 'pluginsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGINSDIALOG_H
#define UI_PLUGINSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PluginsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *treeView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;

    void setupUi(QDialog *PluginsDialog)
    {
        if (PluginsDialog->objectName().isEmpty())
            PluginsDialog->setObjectName(QString::fromUtf8("PluginsDialog"));
        PluginsDialog->resize(712, 413);
        verticalLayout = new QVBoxLayout(PluginsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        treeView = new QTreeView(PluginsDialog);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(treeView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeButton = new QPushButton(PluginsDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        horizontalLayout->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(PluginsDialog);
        QObject::connect(closeButton, SIGNAL(clicked()), PluginsDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(PluginsDialog);
    } // setupUi

    void retranslateUi(QDialog *PluginsDialog)
    {
        PluginsDialog->setWindowTitle(QApplication::translate("PluginsDialog", "Installed Plugins", nullptr));
        closeButton->setText(QApplication::translate("PluginsDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PluginsDialog: public Ui_PluginsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGINSDIALOG_H

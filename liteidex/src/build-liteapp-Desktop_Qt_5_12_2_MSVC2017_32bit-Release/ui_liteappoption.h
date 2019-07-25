/********************************************************************************
** Form generated from reading UI file 'liteappoption.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LITEAPPOPTION_H
#define UI_LITEAPPOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LiteAppOption
{
public:
    QVBoxLayout *verticalLayout_7;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *storeLocalCheckBox;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *langComboBox;
    QLabel *label_6;
    QComboBox *styleComboBox;
    QCheckBox *toolWindowShortcutsCheckBox;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_11;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QComboBox *qssComboBox;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_11;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *customIconCheckBox;
    QComboBox *iconPathComboBox;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox_10;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *autoIdleSaveDocumentsCheckBox;
    QSpinBox *autoIdleSaveDocumentsTimeSpinBox;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *fileWatcherAutoReloadCheckBox;
    QSpacerItem *verticalSpacer;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *autoLoadLastSessionCheckBox;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *startupReloadFilesCheckBox;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *maxRecentFilesSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_12;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_2;
    QSpinBox *maxEditorCountSpinBox;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout;
    QCheckBox *splashVisibleCheckBox;
    QCheckBox *welcomeVisibleCheckBox;
    QGroupBox *groupBox_9;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *editorTabsClosableCheckBox;
    QCheckBox *editorTabsEnableWhellCheckBox;
    QGroupBox *groupBox_13;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *editorMouseExtNavigateCheckBox;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QTreeView *keysTreeView;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *standardCheckBox;
    QPushButton *resetButton;
    QPushButton *resetAllButton;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *importButton;
    QPushButton *exportButton;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *LiteAppOption)
    {
        if (LiteAppOption->objectName().isEmpty())
            LiteAppOption->setObjectName(QString::fromUtf8("LiteAppOption"));
        LiteAppOption->resize(640, 435);
        verticalLayout_7 = new QVBoxLayout(LiteAppOption);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        tabWidget = new QTabWidget(LiteAppOption);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        storeLocalCheckBox = new QCheckBox(groupBox_4);
        storeLocalCheckBox->setObjectName(QString::fromUtf8("storeLocalCheckBox"));
        QFont font;
        font.setItalic(false);
        storeLocalCheckBox->setFont(font);

        horizontalLayout_2->addWidget(storeLocalCheckBox);


        verticalLayout_4->addWidget(groupBox_4);

        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        langComboBox = new QComboBox(groupBox);
        langComboBox->setObjectName(QString::fromUtf8("langComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(langComboBox->sizePolicy().hasHeightForWidth());
        langComboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(langComboBox);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        styleComboBox = new QComboBox(groupBox);
        styleComboBox->setObjectName(QString::fromUtf8("styleComboBox"));

        horizontalLayout->addWidget(styleComboBox);

        toolWindowShortcutsCheckBox = new QCheckBox(groupBox);
        toolWindowShortcutsCheckBox->setObjectName(QString::fromUtf8("toolWindowShortcutsCheckBox"));

        horizontalLayout->addWidget(toolWindowShortcutsCheckBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_4->addWidget(groupBox);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        groupBox_6 = new QGroupBox(tab);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        horizontalLayout_6 = new QHBoxLayout(groupBox_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(groupBox_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_6->addWidget(label_4);

        qssComboBox = new QComboBox(groupBox_6);
        qssComboBox->setObjectName(QString::fromUtf8("qssComboBox"));

        horizontalLayout_6->addWidget(qssComboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        horizontalLayout_11->addWidget(groupBox_6);

        groupBox_11 = new QGroupBox(tab);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setCheckable(false);
        horizontalLayout_4 = new QHBoxLayout(groupBox_11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        customIconCheckBox = new QCheckBox(groupBox_11);
        customIconCheckBox->setObjectName(QString::fromUtf8("customIconCheckBox"));

        horizontalLayout_4->addWidget(customIconCheckBox);

        iconPathComboBox = new QComboBox(groupBox_11);
        iconPathComboBox->setObjectName(QString::fromUtf8("iconPathComboBox"));

        horizontalLayout_4->addWidget(iconPathComboBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        horizontalLayout_11->addWidget(groupBox_11);


        verticalLayout_4->addLayout(horizontalLayout_11);

        groupBox_10 = new QGroupBox(tab);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        horizontalLayout_8 = new QHBoxLayout(groupBox_10);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        autoIdleSaveDocumentsCheckBox = new QCheckBox(groupBox_10);
        autoIdleSaveDocumentsCheckBox->setObjectName(QString::fromUtf8("autoIdleSaveDocumentsCheckBox"));

        horizontalLayout_8->addWidget(autoIdleSaveDocumentsCheckBox);

        autoIdleSaveDocumentsTimeSpinBox = new QSpinBox(groupBox_10);
        autoIdleSaveDocumentsTimeSpinBox->setObjectName(QString::fromUtf8("autoIdleSaveDocumentsTimeSpinBox"));
        autoIdleSaveDocumentsTimeSpinBox->setMinimum(1);
        autoIdleSaveDocumentsTimeSpinBox->setMaximum(120);

        horizontalLayout_8->addWidget(autoIdleSaveDocumentsTimeSpinBox);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);


        verticalLayout_4->addWidget(groupBox_10);

        groupBox_5 = new QGroupBox(tab);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_3 = new QVBoxLayout(groupBox_5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        fileWatcherAutoReloadCheckBox = new QCheckBox(groupBox_5);
        fileWatcherAutoReloadCheckBox->setObjectName(QString::fromUtf8("fileWatcherAutoReloadCheckBox"));

        verticalLayout_3->addWidget(fileWatcherAutoReloadCheckBox);


        verticalLayout_4->addWidget(groupBox_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        tabWidget->addTab(tab, QString());
        groupBox->raise();
        groupBox_4->raise();
        groupBox_5->raise();
        groupBox_10->raise();
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        verticalLayout_10 = new QVBoxLayout(tab_5);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        groupBox_3 = new QGroupBox(tab_5);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_6 = new QVBoxLayout(groupBox_3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        autoLoadLastSessionCheckBox = new QCheckBox(groupBox_3);
        autoLoadLastSessionCheckBox->setObjectName(QString::fromUtf8("autoLoadLastSessionCheckBox"));

        verticalLayout_6->addWidget(autoLoadLastSessionCheckBox);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        startupReloadFilesCheckBox = new QCheckBox(groupBox_3);
        startupReloadFilesCheckBox->setObjectName(QString::fromUtf8("startupReloadFilesCheckBox"));

        horizontalLayout_5->addWidget(startupReloadFilesCheckBox);


        verticalLayout_6->addLayout(horizontalLayout_5);


        verticalLayout_10->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(tab_5);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        maxRecentFilesSpinBox = new QSpinBox(groupBox_2);
        maxRecentFilesSpinBox->setObjectName(QString::fromUtf8("maxRecentFilesSpinBox"));

        horizontalLayout_3->addWidget(maxRecentFilesSpinBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_10->addWidget(groupBox_2);

        groupBox_12 = new QGroupBox(tab_5);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        horizontalLayout_9 = new QHBoxLayout(groupBox_12);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_2 = new QLabel(groupBox_12);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_9->addWidget(label_2);

        maxEditorCountSpinBox = new QSpinBox(groupBox_12);
        maxEditorCountSpinBox->setObjectName(QString::fromUtf8("maxEditorCountSpinBox"));
        maxEditorCountSpinBox->setMinimum(10);
        maxEditorCountSpinBox->setMaximum(999);

        horizontalLayout_9->addWidget(maxEditorCountSpinBox);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);


        verticalLayout_10->addWidget(groupBox_12);

        verticalSpacer_3 = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_3);

        tabWidget->addTab(tab_5, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_2 = new QVBoxLayout(tab_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_8 = new QGroupBox(tab_3);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        verticalLayout = new QVBoxLayout(groupBox_8);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splashVisibleCheckBox = new QCheckBox(groupBox_8);
        splashVisibleCheckBox->setObjectName(QString::fromUtf8("splashVisibleCheckBox"));

        verticalLayout->addWidget(splashVisibleCheckBox);

        welcomeVisibleCheckBox = new QCheckBox(groupBox_8);
        welcomeVisibleCheckBox->setObjectName(QString::fromUtf8("welcomeVisibleCheckBox"));

        verticalLayout->addWidget(welcomeVisibleCheckBox);


        verticalLayout_2->addWidget(groupBox_8);

        groupBox_9 = new QGroupBox(tab_3);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        horizontalLayout_10 = new QHBoxLayout(groupBox_9);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        radioButton = new QRadioButton(groupBox_9);
        buttonGroup = new QButtonGroup(LiteAppOption);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(radioButton);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setText(QString::fromUtf8("16x16"));

        horizontalLayout_10->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox_9);
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setText(QString::fromUtf8("18x18"));

        horizontalLayout_10->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(groupBox_9);
        buttonGroup->addButton(radioButton_3);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setText(QString::fromUtf8("20x20"));

        horizontalLayout_10->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBox_9);
        buttonGroup->addButton(radioButton_4);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setText(QString::fromUtf8("22x22"));

        horizontalLayout_10->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(groupBox_9);
        buttonGroup->addButton(radioButton_5);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setText(QString::fromUtf8("24x24"));

        horizontalLayout_10->addWidget(radioButton_5);


        verticalLayout_2->addWidget(groupBox_9);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_9 = new QVBoxLayout(tab_4);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        groupBox_7 = new QGroupBox(tab_4);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        verticalLayout_8 = new QVBoxLayout(groupBox_7);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        editorTabsClosableCheckBox = new QCheckBox(groupBox_7);
        editorTabsClosableCheckBox->setObjectName(QString::fromUtf8("editorTabsClosableCheckBox"));

        verticalLayout_8->addWidget(editorTabsClosableCheckBox);

        editorTabsEnableWhellCheckBox = new QCheckBox(groupBox_7);
        editorTabsEnableWhellCheckBox->setObjectName(QString::fromUtf8("editorTabsEnableWhellCheckBox"));

        verticalLayout_8->addWidget(editorTabsEnableWhellCheckBox);


        verticalLayout_9->addWidget(groupBox_7);

        groupBox_13 = new QGroupBox(tab_4);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        horizontalLayout_12 = new QHBoxLayout(groupBox_13);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        editorMouseExtNavigateCheckBox = new QCheckBox(groupBox_13);
        editorMouseExtNavigateCheckBox->setObjectName(QString::fromUtf8("editorMouseExtNavigateCheckBox"));

        horizontalLayout_12->addWidget(editorMouseExtNavigateCheckBox);


        verticalLayout_9->addWidget(groupBox_13);

        verticalSpacer_2 = new QSpacerItem(20, 270, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_5 = new QVBoxLayout(tab_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_5->addWidget(label_5);

        keysTreeView = new QTreeView(tab_2);
        keysTreeView->setObjectName(QString::fromUtf8("keysTreeView"));

        verticalLayout_5->addWidget(keysTreeView);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        standardCheckBox = new QCheckBox(tab_2);
        standardCheckBox->setObjectName(QString::fromUtf8("standardCheckBox"));

        horizontalLayout_7->addWidget(standardCheckBox);

        resetButton = new QPushButton(tab_2);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));

        horizontalLayout_7->addWidget(resetButton);

        resetAllButton = new QPushButton(tab_2);
        resetAllButton->setObjectName(QString::fromUtf8("resetAllButton"));

        horizontalLayout_7->addWidget(resetAllButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        importButton = new QPushButton(tab_2);
        importButton->setObjectName(QString::fromUtf8("importButton"));

        horizontalLayout_7->addWidget(importButton);

        exportButton = new QPushButton(tab_2);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));

        horizontalLayout_7->addWidget(exportButton);


        verticalLayout_5->addLayout(horizontalLayout_7);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_7->addWidget(tabWidget);


        retranslateUi(LiteAppOption);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LiteAppOption);
    } // setupUi

    void retranslateUi(QWidget *LiteAppOption)
    {
        LiteAppOption->setWindowTitle(QApplication::translate("LiteAppOption", "Form", nullptr));
        groupBox_4->setTitle(QApplication::translate("LiteAppOption", "Store [*]", nullptr));
        storeLocalCheckBox->setText(QApplication::translate("LiteAppOption", "Store settings to local ini file", nullptr));
        groupBox->setTitle(QApplication::translate("LiteAppOption", "Interface [*]", nullptr));
        label->setText(QApplication::translate("LiteAppOption", "Language:", nullptr));
        label_6->setText(QApplication::translate("LiteAppOption", "Style:", nullptr));
        toolWindowShortcutsCheckBox->setText(QApplication::translate("LiteAppOption", "Use tool window shortcuts", nullptr));
        groupBox_6->setTitle(QApplication::translate("LiteAppOption", "Theme [*]", nullptr));
        label_4->setText(QApplication::translate("LiteAppOption", "Theme:", nullptr));
        groupBox_11->setTitle(QApplication::translate("LiteAppOption", "Icon [*]", nullptr));
#ifndef QT_NO_TOOLTIP
        customIconCheckBox->setToolTip(QApplication::translate("LiteAppOption", "Fallback build-in icon library and liteapp/qrc/default", nullptr));
#endif // QT_NO_TOOLTIP
        customIconCheckBox->setText(QApplication::translate("LiteAppOption", "Load the external file icon library", nullptr));
        groupBox_10->setTitle(QApplication::translate("LiteAppOption", "Automatically save documents", nullptr));
        autoIdleSaveDocumentsCheckBox->setText(QApplication::translate("LiteAppOption", "Automatically save documents when application is idle", nullptr));
        autoIdleSaveDocumentsTimeSpinBox->setSpecialValueText(QString());
        autoIdleSaveDocumentsTimeSpinBox->setSuffix(QApplication::translate("LiteAppOption", "sec", nullptr));
        groupBox_5->setTitle(QApplication::translate("LiteAppOption", "Monitoring files for modifications", nullptr));
        fileWatcherAutoReloadCheckBox->setText(QApplication::translate("LiteAppOption", "Auto reload or close editor buffer,if underlying file is modified/deleted.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("LiteAppOption", "Generic", nullptr));
        groupBox_3->setTitle(QApplication::translate("LiteAppOption", "Session", nullptr));
        autoLoadLastSessionCheckBox->setText(QApplication::translate("LiteAppOption", "Reload session on startup", nullptr));
        startupReloadFilesCheckBox->setText(QApplication::translate("LiteAppOption", "Reload files in session", nullptr));
        groupBox_2->setTitle(QApplication::translate("LiteAppOption", "Recent Files", nullptr));
        label_3->setText(QApplication::translate("LiteAppOption", "Max Count:", nullptr));
#ifndef QT_NO_TOOLTIP
        maxRecentFilesSpinBox->setToolTip(QApplication::translate("LiteAppOption", "0-99", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox_12->setTitle(QApplication::translate("LiteAppOption", "Editor Tabs", nullptr));
        label_2->setText(QApplication::translate("LiteAppOption", "Max Count:", nullptr));
#ifndef QT_NO_TOOLTIP
        maxEditorCountSpinBox->setToolTip(QApplication::translate("LiteAppOption", "10-999", nullptr));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("LiteAppOption", "Session", nullptr));
        groupBox_8->setTitle(QApplication::translate("LiteAppOption", "Display [*]", nullptr));
        splashVisibleCheckBox->setText(QApplication::translate("LiteAppOption", "Show splash screen on startup", nullptr));
        welcomeVisibleCheckBox->setText(QApplication::translate("LiteAppOption", "Show welcome page on startup", nullptr));
        groupBox_9->setTitle(QApplication::translate("LiteAppOption", "Toolbar Icon Size [*]", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("LiteAppOption", "Display", nullptr));
        groupBox_7->setTitle(QApplication::translate("LiteAppOption", "Editor tab [*]", nullptr));
        editorTabsClosableCheckBox->setText(QApplication::translate("LiteAppOption", "Show close buttons on each editor tab", nullptr));
        editorTabsEnableWhellCheckBox->setText(QApplication::translate("LiteAppOption", "Enable mouse wheel navigation on tabs", nullptr));
        groupBox_13->setTitle(QApplication::translate("LiteAppOption", "Editor navigate", nullptr));
        editorMouseExtNavigateCheckBox->setText(QApplication::translate("LiteAppOption", "Enable mouse extra 'Back' button and 'Forward' button for go back and forward", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("LiteAppOption", "Editor", nullptr));
        label_5->setText(QApplication::translate("LiteAppOption", "Format: {Ctrl+B},{Ctrl+Shift+B},{Ctrl+K,Ctrl+U},{Ctrl+Shift+Z;Ctrl+Y}", nullptr));
        standardCheckBox->setText(QApplication::translate("LiteAppOption", "Hide standard commands", nullptr));
        resetButton->setText(QApplication::translate("LiteAppOption", "Reset", nullptr));
        resetAllButton->setText(QApplication::translate("LiteAppOption", "Reset All", nullptr));
        importButton->setText(QApplication::translate("LiteAppOption", "Import...", nullptr));
        exportButton->setText(QApplication::translate("LiteAppOption", "Export...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("LiteAppOption", "Keyboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LiteAppOption: public Ui_LiteAppOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LITEAPPOPTION_H

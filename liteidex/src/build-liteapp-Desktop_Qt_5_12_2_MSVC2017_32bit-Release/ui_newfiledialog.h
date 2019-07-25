/********************************************************************************
** Form generated from reading UI file 'newfiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFILEDIALOG_H
#define UI_NEWFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewFileDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QTreeView *pathTreeView;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTreeView *templateTreeView;
    QHBoxLayout *horizontalLayout_4;
    QLabel *typeLabel;
    QLabel *infoLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *nameLineEdit;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLineEdit *locationLineEdit;
    QToolButton *locationBrowseButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewFileDialog)
    {
        if (NewFileDialog->objectName().isEmpty())
            NewFileDialog->setObjectName(QString::fromUtf8("NewFileDialog"));
        NewFileDialog->resize(552, 403);
        verticalLayout = new QVBoxLayout(NewFileDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_4 = new QLabel(NewFileDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4);

        pathTreeView = new QTreeView(NewFileDialog);
        pathTreeView->setObjectName(QString::fromUtf8("pathTreeView"));

        verticalLayout_3->addWidget(pathTreeView);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(NewFileDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        templateTreeView = new QTreeView(NewFileDialog);
        templateTreeView->setObjectName(QString::fromUtf8("templateTreeView"));

        verticalLayout_2->addWidget(templateTreeView);


        horizontalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 3);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        typeLabel = new QLabel(NewFileDialog);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));

        horizontalLayout_4->addWidget(typeLabel);

        infoLabel = new QLabel(NewFileDialog);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(infoLabel->sizePolicy().hasHeightForWidth());
        infoLabel->setSizePolicy(sizePolicy);
        infoLabel->setFrameShape(QFrame::Panel);
        infoLabel->setFrameShadow(QFrame::Sunken);
        infoLabel->setWordWrap(true);

        horizontalLayout_4->addWidget(infoLabel);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(NewFileDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        nameLineEdit = new QLineEdit(NewFileDialog);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        horizontalLayout_2->addWidget(nameLineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_7 = new QLabel(NewFileDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);

        locationLineEdit = new QLineEdit(NewFileDialog);
        locationLineEdit->setObjectName(QString::fromUtf8("locationLineEdit"));

        horizontalLayout->addWidget(locationLineEdit);

        locationBrowseButton = new QToolButton(NewFileDialog);
        locationBrowseButton->setObjectName(QString::fromUtf8("locationBrowseButton"));

        horizontalLayout->addWidget(locationBrowseButton);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(NewFileDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        buttonBox->raise();
        infoLabel->raise();
        typeLabel->raise();

        retranslateUi(NewFileDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewFileDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewFileDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewFileDialog);
    } // setupUi

    void retranslateUi(QDialog *NewFileDialog)
    {
        NewFileDialog->setWindowTitle(QApplication::translate("NewFileDialog", "New Project or File", nullptr));
        label_4->setText(QApplication::translate("NewFileDialog", "GOPATH:", nullptr));
        label_2->setText(QApplication::translate("NewFileDialog", "Template:", nullptr));
        typeLabel->setText(QApplication::translate("NewFileDialog", "Type", nullptr));
        infoLabel->setText(QApplication::translate("NewFileDialog", "Information", nullptr));
        label_3->setText(QApplication::translate("NewFileDialog", "Name:", nullptr));
        label_7->setText(QApplication::translate("NewFileDialog", "Location:", nullptr));
        locationBrowseButton->setText(QApplication::translate("NewFileDialog", "Browse...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewFileDialog: public Ui_NewFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFILEDIALOG_H

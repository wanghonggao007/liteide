/********************************************************************************
** Form generated from reading UI file 'optionswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSWIDGET_H
#define UI_OPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OptionsWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout;
    QLabel *infoLabel;
    QStackedWidget *stackedWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OptionsWidget)
    {
        if (OptionsWidget->objectName().isEmpty())
            OptionsWidget->setObjectName(QString::fromUtf8("OptionsWidget"));
        OptionsWidget->resize(654, 294);
        horizontalLayout_2 = new QHBoxLayout(OptionsWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        listWidget = new QListWidget(OptionsWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(listWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        infoLabel = new QLabel(OptionsWidget);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        infoLabel->setFrameShape(QFrame::Panel);
        infoLabel->setFrameShadow(QFrame::Sunken);
        infoLabel->setLineWidth(1);
        infoLabel->setAlignment(Qt::AlignCenter);
        infoLabel->setMargin(2);

        verticalLayout->addWidget(infoLabel);

        stackedWidget = new QStackedWidget(OptionsWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(stackedWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(OptionsWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(OptionsWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 10);

        retranslateUi(OptionsWidget);

        QMetaObject::connectSlotsByName(OptionsWidget);
    } // setupUi

    void retranslateUi(QDialog *OptionsWidget)
    {
        OptionsWidget->setWindowTitle(QApplication::translate("OptionsWidget", "Options", nullptr));
        infoLabel->setText(QApplication::translate("OptionsWidget", "Info", nullptr));
        label->setText(QApplication::translate("OptionsWidget", "[*] item request restart of LiteIDE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OptionsWidget: public Ui_OptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSWIDGET_H

/********************************************************************************
** Form generated from reading UI file 'nostotalletus.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTOTALLETUS_H
#define UI_NOSTOTALLETUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NostoTalletus
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QPushButton *button10Euros;
    QPushButton *button90Euros;
    QPushButton *button20Euros;
    QPushButton *button140Euros;
    QPushButton *button50Euros;
    QPushButton *button190Euros;
    QPushButton *buttonEnter;
    QPushButton *buttonMuu;
    QLineEdit *textNostoTalletus;
    QLabel *labelMaara;

    void setupUi(QDialog *NostoTalletus)
    {
        if (NostoTalletus->objectName().isEmpty())
            NostoTalletus->setObjectName(QString::fromUtf8("NostoTalletus"));
        NostoTalletus->resize(493, 514);
        gridLayoutWidget = new QWidget(NostoTalletus);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 491, 511));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        button10Euros = new QPushButton(gridLayoutWidget);
        button10Euros->setObjectName(QString::fromUtf8("button10Euros"));

        formLayout->setWidget(0, QFormLayout::LabelRole, button10Euros);

        button90Euros = new QPushButton(gridLayoutWidget);
        button90Euros->setObjectName(QString::fromUtf8("button90Euros"));

        formLayout->setWidget(0, QFormLayout::FieldRole, button90Euros);

        button20Euros = new QPushButton(gridLayoutWidget);
        button20Euros->setObjectName(QString::fromUtf8("button20Euros"));

        formLayout->setWidget(1, QFormLayout::LabelRole, button20Euros);

        button140Euros = new QPushButton(gridLayoutWidget);
        button140Euros->setObjectName(QString::fromUtf8("button140Euros"));

        formLayout->setWidget(1, QFormLayout::FieldRole, button140Euros);

        button50Euros = new QPushButton(gridLayoutWidget);
        button50Euros->setObjectName(QString::fromUtf8("button50Euros"));

        formLayout->setWidget(2, QFormLayout::LabelRole, button50Euros);

        button190Euros = new QPushButton(gridLayoutWidget);
        button190Euros->setObjectName(QString::fromUtf8("button190Euros"));

        formLayout->setWidget(2, QFormLayout::FieldRole, button190Euros);

        buttonEnter = new QPushButton(gridLayoutWidget);
        buttonEnter->setObjectName(QString::fromUtf8("buttonEnter"));

        formLayout->setWidget(3, QFormLayout::LabelRole, buttonEnter);

        buttonMuu = new QPushButton(gridLayoutWidget);
        buttonMuu->setObjectName(QString::fromUtf8("buttonMuu"));

        formLayout->setWidget(3, QFormLayout::FieldRole, buttonMuu);


        gridLayout->addLayout(formLayout, 4, 0, 1, 1);

        textNostoTalletus = new QLineEdit(gridLayoutWidget);
        textNostoTalletus->setObjectName(QString::fromUtf8("textNostoTalletus"));

        gridLayout->addWidget(textNostoTalletus, 3, 0, 1, 1);

        labelMaara = new QLabel(gridLayoutWidget);
        labelMaara->setObjectName(QString::fromUtf8("labelMaara"));
        labelMaara->setLayoutDirection(Qt::LeftToRight);
        labelMaara->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelMaara, 1, 0, 1, 1);


        retranslateUi(NostoTalletus);

        QMetaObject::connectSlotsByName(NostoTalletus);
    } // setupUi

    void retranslateUi(QDialog *NostoTalletus)
    {
        NostoTalletus->setWindowTitle(QCoreApplication::translate("NostoTalletus", "Dialog", nullptr));
        button10Euros->setText(QCoreApplication::translate("NostoTalletus", "10\342\202\254", nullptr));
        button90Euros->setText(QCoreApplication::translate("NostoTalletus", "90\342\202\254", nullptr));
        button20Euros->setText(QCoreApplication::translate("NostoTalletus", "20\342\202\254", nullptr));
        button140Euros->setText(QCoreApplication::translate("NostoTalletus", "140\342\202\254", nullptr));
        button50Euros->setText(QCoreApplication::translate("NostoTalletus", "50\342\202\254", nullptr));
        button190Euros->setText(QCoreApplication::translate("NostoTalletus", "190\342\202\254", nullptr));
        buttonEnter->setText(QCoreApplication::translate("NostoTalletus", "ENTER", nullptr));
        buttonMuu->setText(QCoreApplication::translate("NostoTalletus", "Muu Summa", nullptr));
        labelMaara->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NostoTalletus: public Ui_NostoTalletus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTOTALLETUS_H

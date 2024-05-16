/********************************************************************************
** Form generated from reading UI file 'autorization.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTORIZATION_H
#define UI_AUTORIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Autorization
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QCheckBox *checkBox;
    QPushButton *pushButton;

    void setupUi(QDialog *Autorization)
    {
        if (Autorization->objectName().isEmpty())
            Autorization->setObjectName("Autorization");
        Autorization->resize(800, 800);
        Autorization->setStyleSheet(QString::fromUtf8("color: rgb(244, 222, 100);\n"
"font: 25 8pt \"Comfortaa\";\n"
"background-color: rgb(40,40,40); "));
        layoutWidget = new QWidget(Autorization);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(170, 130, 461, 471));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("background-color: #313131"));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8("\n"
"    padding: 5px; \n"
"    font-size: 10px; \n"
"    border-radius: 4px; \n"
"    border: 1px solid rgb(244, 222, 100); \n"
"    width:  200px; "));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("background-color: #313131\n"
""));

        horizontalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setStyleSheet(QString::fromUtf8("\n"
"    padding: 5px; \n"
"    font-size: 10px; \n"
"    border-radius: 4px; \n"
"    border: 1px solid rgb(244, 222, 100); \n"
"    width:  200px; "));

        horizontalLayout->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName("checkBox");
        checkBox->setStyleSheet(QString::fromUtf8("background-color: #313131"));

        verticalLayout->addWidget(checkBox);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #1E1E1E; \n"
"    border: none;\n"
"    color: rgb(244, 222, 100); \n"
"    padding: 15px 32px; \n"
"    text-align: center; \n"
"    text-decoration: none;\n"
"\n"
"    font-size: 16px; \n"
"    margin: 4px 2px; \n"
"    border-radius: 8px; "));

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(Autorization);

        QMetaObject::connectSlotsByName(Autorization);
    } // setupUi

    void retranslateUi(QDialog *Autorization)
    {
        Autorization->setWindowTitle(QCoreApplication::translate("Autorization", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("Autorization", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">\320\226\320\255\320\232\321\203\321\201\320\273\321\203\320\263\320\270</span></p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Autorization", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("Autorization", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("Autorization", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        checkBox->setText(QCoreApplication::translate("Autorization", "\320\260\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\270\320\262\320\275\321\213\320\271 \320\262\321\205\320\276\320\264", nullptr));
        pushButton->setText(QCoreApplication::translate("Autorization", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Autorization: public Ui_Autorization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTORIZATION_H

/********************************************************************************
** Form generated from reading UI file 'thebill.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEBILL_H
#define UI_THEBILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_theBill
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QListWidget *listWidget;

    void setupUi(QDialog *theBill)
    {
        if (theBill->objectName().isEmpty())
            theBill->setObjectName("theBill");
        theBill->resize(800, 800);
        theBill->setStyleSheet(QString::fromUtf8("color: rgb(244, 222, 100);\n"
"font: 25 8pt \"Comfortaa\";\n"
"background-color: #282828; "));
        gridLayout = new QGridLayout(theBill);
        gridLayout->setObjectName("gridLayout");
        pushButton = new QPushButton(theBill);
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

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        listWidget = new QListWidget(theBill);
        listWidget->setObjectName("listWidget");
        listWidget->setStyleSheet(QString::fromUtf8("    color: rgb(244, 222, 100); \n"
" font-size: 2rem;"));

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);


        retranslateUi(theBill);

        QMetaObject::connectSlotsByName(theBill);
    } // setupUi

    void retranslateUi(QDialog *theBill)
    {
        theBill->setWindowTitle(QCoreApplication::translate("theBill", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("theBill", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class theBill: public Ui_theBill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEBILL_H

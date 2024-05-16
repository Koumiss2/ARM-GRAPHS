/********************************************************************************
** Form generated from reading UI file 'billflat.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILLFLAT_H
#define UI_BILLFLAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_billFlat
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *billFlat)
    {
        if (billFlat->objectName().isEmpty())
            billFlat->setObjectName("billFlat");
        billFlat->resize(800, 800);
        billFlat->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(244, 222, 100);\n"
"font: 25 8pt \"Comfortaa\";\n"
"background-color: #282828; "));
        gridLayout = new QGridLayout(billFlat);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        tableView = new QTableView(billFlat);
        tableView->setObjectName("tableView");
        tableView->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(billFlat);
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
"    border-radius: 8px; \n"
""));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(billFlat);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #1E1E1E; \n"
"    border: none;\n"
"    color: rgb(244, 222, 100); \n"
"    padding: 15px 32px; \n"
"    text-align: center; \n"
"    text-decoration: none;\n"
"\n"
"    font-size: 16px; \n"
"    margin: 4px 2px; \n"
"    border-radius: 8px; \n"
""));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(billFlat);

        QMetaObject::connectSlotsByName(billFlat);
    } // setupUi

    void retranslateUi(QDialog *billFlat)
    {
        billFlat->setWindowTitle(QCoreApplication::translate("billFlat", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("billFlat", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("billFlat", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class billFlat: public Ui_billFlat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILLFLAT_H

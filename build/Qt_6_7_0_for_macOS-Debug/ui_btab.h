/********************************************************************************
** Form generated from reading UI file 'btab.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BTAB_H
#define UI_BTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Btab
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Btab)
    {
        if (Btab->objectName().isEmpty())
            Btab->setObjectName("Btab");
        Btab->resize(800, 800);
        Btab->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(244, 222, 100);\n"
"font: 25 8pt \"Comfortaa\";\n"
"background-color: #282828; "));
        gridLayout_2 = new QGridLayout(Btab);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        tableView = new QTableView(Btab);
        tableView->setObjectName("tableView");
        tableView->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(Btab);
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

        pushButton_2 = new QPushButton(Btab);
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


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(Btab);

        QMetaObject::connectSlotsByName(Btab);
    } // setupUi

    void retranslateUi(QDialog *Btab)
    {
        Btab->setWindowTitle(QCoreApplication::translate("Btab", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Btab", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Btab", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Btab: public Ui_Btab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BTAB_H

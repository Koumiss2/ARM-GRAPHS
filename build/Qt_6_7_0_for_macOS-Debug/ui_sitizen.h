/********************************************************************************
** Form generated from reading UI file 'sitizen.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SITIZEN_H
#define UI_SITIZEN_H

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

class Ui_sitizen
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *sitizen)
    {
        if (sitizen->objectName().isEmpty())
            sitizen->setObjectName("sitizen");
        sitizen->resize(800, 800);
        sitizen->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(244, 222, 100);\n"
"font: 25 8pt \"Comfortaa\";\n"
"background-color: #282828; "));
        gridLayout = new QGridLayout(sitizen);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        tableView = new QTableView(sitizen);
        tableView->setObjectName("tableView");
        tableView->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(sitizen);
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

        pushButton_2 = new QPushButton(sitizen);
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


        retranslateUi(sitizen);

        QMetaObject::connectSlotsByName(sitizen);
    } // setupUi

    void retranslateUi(QDialog *sitizen)
    {
        sitizen->setWindowTitle(QCoreApplication::translate("sitizen", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("sitizen", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("sitizen", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sitizen: public Ui_sitizen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SITIZEN_H

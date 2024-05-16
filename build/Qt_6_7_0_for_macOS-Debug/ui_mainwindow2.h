/********************************************************************************
** Form generated from reading UI file 'mainwindow2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW2_H
#define UI_MAINWINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow2
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow2)
    {
        if (MainWindow2->objectName().isEmpty())
            MainWindow2->setObjectName("MainWindow2");
        MainWindow2->resize(800, 600);
        MainWindow2->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(244, 222, 100);\n"
"font: 25 8pt \"Comfortaa\";\n"
"background-color: #282828; "));
        centralwidget = new QWidget(MainWindow2);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("background-color: #282828;"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 40, 121, 51));
        label->setStyleSheet(QString::fromUtf8("background-color: #313131"));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(221, 153, 251, 201));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #1E1E1E;\n"
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

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
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

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: #1E1E1E; \n"
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

        verticalLayout->addWidget(pushButton_3);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        MainWindow2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow2);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainWindow2->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow2);
        statusbar->setObjectName("statusbar");
        MainWindow2->setStatusBar(statusbar);

        retranslateUi(MainWindow2);

        QMetaObject::connectSlotsByName(MainWindow2);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow2)
    {
        MainWindow2->setWindowTitle(QCoreApplication::translate("MainWindow2", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow2", "\320\234\320\265\320\275\321\216", nullptr));
        label->setText(QCoreApplication::translate("MainWindow2", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow2", "\320\237\321\200\320\276\321\204\320\270\320\273\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow2", "\320\241\321\207\320\265\321\202\320\260", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow2", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow2: public Ui_MainWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW2_H

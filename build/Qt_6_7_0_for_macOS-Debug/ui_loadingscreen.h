/********************************************************************************
** Form generated from reading UI file 'loadingscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADINGSCREEN_H
#define UI_LOADINGSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoadingScreen
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QProgressBar *progressBar;

    void setupUi(QDialog *LoadingScreen)
    {
        if (LoadingScreen->objectName().isEmpty())
            LoadingScreen->setObjectName("LoadingScreen");
        LoadingScreen->resize(800, 800);
        LoadingScreen->setStyleSheet(QString::fromUtf8("background-color: #282828;"));
        verticalLayout = new QVBoxLayout(LoadingScreen);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(LoadingScreen);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(244, 222, 100);\n"
"font: 8pt \"Californian FB\";\n"
"font: 25 8pt \"Comfortaa\";\n"
""));

        verticalLayout->addWidget(label);

        progressBar = new QProgressBar(LoadingScreen);
        progressBar->setObjectName("progressBar");
        progressBar->setStyleSheet(QString::fromUtf8("background-color: #282828;\n"
"color: rgb(244, 222, 100);\n"
"font: 25 8pt \"Comfortaa\";\n"
""));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);


        retranslateUi(LoadingScreen);

        QMetaObject::connectSlotsByName(LoadingScreen);
    } // setupUi

    void retranslateUi(QDialog *LoadingScreen)
    {
        LoadingScreen->setWindowTitle(QCoreApplication::translate("LoadingScreen", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("LoadingScreen", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">\320\226\320\255\320\232\321\203\321\201\320\273\321\203\320\263\320\270</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadingScreen: public Ui_LoadingScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADINGSCREEN_H

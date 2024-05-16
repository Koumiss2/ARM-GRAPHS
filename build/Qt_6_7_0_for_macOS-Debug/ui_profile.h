/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Profile
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_7;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *Profile)
    {
        if (Profile->objectName().isEmpty())
            Profile->setObjectName("Profile");
        Profile->resize(800, 800);
        Profile->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(244, 222, 100);\n"
"font: 25 8pt \"Comfortaa\";\n"
"background-color: #282828; "));
        gridLayout = new QGridLayout(Profile);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(Profile);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(130, 220, 361, 151));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font-size: 20pt;\n"
"background-color: #313131"));

        verticalLayout_2->addWidget(label_6);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font-size: 20pt;\n"
"background-color: #313131;\n"
""));

        verticalLayout_2->addWidget(label_5);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("font-size: 20pt;\n"
"background-color: #313131;"));

        verticalLayout_2->addWidget(label_8);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("font-size: 20pt;\n"
"background-color: #313131;"));

        verticalLayout_2->addWidget(label_7);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font-size: 20pt;\n"
"background-color: #313131;"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font-size: 20pt;\n"
"background-color: #313131;"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font-size: 20pt;\n"
"background-color: #313131;"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font-size: 20pt;\n"
"background-color: #313131;\n"
""));

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(Profile);

        QMetaObject::connectSlotsByName(Profile);
    } // setupUi

    void retranslateUi(QDialog *Profile)
    {
        Profile->setWindowTitle(QCoreApplication::translate("Profile", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Profile", "\320\237\321\200\320\276\321\204\320\270\320\273\321\214", nullptr));
        label_6->setText(QCoreApplication::translate("Profile", "\320\242\320\260\320\261\320\265\320\273\321\214\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
        label_5->setText(QCoreApplication::translate("Profile", "\320\230\320\274\321\217:", nullptr));
        label_8->setText(QCoreApplication::translate("Profile", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217:", nullptr));
        label_7->setText(QCoreApplication::translate("Profile", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276:", nullptr));
        label->setText(QCoreApplication::translate("Profile", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("Profile", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("Profile", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("Profile", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Profile: public Ui_Profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H

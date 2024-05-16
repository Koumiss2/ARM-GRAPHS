/********************************************************************************
** Form generated from reading UI file 'score.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCORE_H
#define UI_SCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Score
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *Score)
    {
        if (Score->objectName().isEmpty())
            Score->setObjectName("Score");
        Score->resize(800, 800);
        Score->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 25 8pt \"Comfortaa\";\n"
"background-color: #282828; "));
        gridLayout = new QGridLayout(Score);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        tableWidget = new QTableWidget(Score);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(tableWidget);

        pushButton = new QPushButton(Score);
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

        verticalLayout->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Score);

        QMetaObject::connectSlotsByName(Score);
    } // setupUi

    void retranslateUi(QDialog *Score)
    {
        Score->setWindowTitle(QCoreApplication::translate("Score", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Score", "\320\232\320\262\320\260\321\200\321\202\320\270\321\200\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Score", "\320\241\321\207\321\221\321\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Score", "\320\224\320\260\321\202\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Score", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Score", "\320\246\320\265\320\275\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Score", "1", nullptr));
        pushButton->setText(QCoreApplication::translate("Score", "\320\236\320\277\320\273\320\260\321\202\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Score: public Ui_Score {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCORE_H

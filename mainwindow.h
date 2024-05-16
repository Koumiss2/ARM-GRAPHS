#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QMessageBox>
#include "thebill.h"
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_action_triggered();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_action_4_triggered();


    void on_action_5_triggered();

private:
    Ui::MainWindow *ui;
    QSqlDatabase dataBase;
    QSqlDatabase dataBase1;
    QSqlQuery *query;
    QSqlQuery *query1;
    QSqlTableModel *model;
    int row;
};

#endif // MAINWINDOW_H

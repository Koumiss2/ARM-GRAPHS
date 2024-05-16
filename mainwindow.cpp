#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint);
    model = new  QSqlTableModel(this);
    model->setTable("flat");
    model->select();
    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_triggered()
{
    model->insertRow(model->rowCount());

}


void MainWindow::on_pushButton_2_clicked()
{
    model->insertRow(model->rowCount());
}


void MainWindow::on_pushButton_clicked()
{
    model->removeRow(row);
}


void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();
}


void MainWindow::on_action_4_triggered()

{
    theBill wind;
    wind.setModal(true);
    wind.exec();
}


void MainWindow::on_action_5_triggered()
{
    close();
}


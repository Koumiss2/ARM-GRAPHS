#include "billdate.h"
#include "ui_billdate.h"

billDate::billDate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::billDate)
{
    setWindowFlag(Qt::FramelessWindowHint);
    ui->setupUi(this);
    model1 = new  QSqlTableModel(this);
    model1->setTable("billDate");
    model1->select();
    ui->tableView->setModel(model1);
}

billDate::~billDate()
{
    delete ui;
}

void billDate::on_pushButton_clicked()
{
    model1->insertRow(model1->rowCount());
}


void billDate::on_pushButton_2_clicked()
{
    model1->removeRow(rowCnt);
}


void billDate::on_tableView_clicked(const QModelIndex &index)
{
    rowCnt = index.row();
}


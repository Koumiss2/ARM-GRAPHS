#include "billflat.h"
#include "ui_billflat.h"

billFlat::billFlat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::billFlat)
{
    setWindowFlag(Qt::FramelessWindowHint);
    ui->setupUi(this);
    model1 = new  QSqlTableModel(this);
    model1->setTable("billFlat");
    model1->select();
    ui->tableView->setModel(model1);
}

billFlat::~billFlat()
{
    delete ui;
}

void billFlat::on_pushButton_clicked()
{
    model1->insertRow(model1->rowCount());
}


void billFlat::on_pushButton_2_clicked()
{
    model1->removeRow(rowCnt);
}


void billFlat::on_tableView_clicked(const QModelIndex &index)
{
    rowCnt = index.row();
}


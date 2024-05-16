#include "sitizenflat.h"
#include "ui_sitizenflat.h"

sitizenFlat::sitizenFlat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sitizenFlat)
{
    setWindowFlag(Qt::FramelessWindowHint);
    ui->setupUi(this);
    model1 = new  QSqlTableModel(this);
    model1->setTable("sitizenFlat");
    model1->select();
    ui->tableView->setModel(model1);
}

sitizenFlat::~sitizenFlat()
{
    delete ui;
}

void sitizenFlat::on_pushButton_clicked()
{
    model1->insertRow(model1->rowCount());
}


void sitizenFlat::on_pushButton_2_clicked()
{
    model1->removeRow(rowCnt);
}


void sitizenFlat::on_tableView_clicked(const QModelIndex &index)
{
    rowCnt = index.row();
}


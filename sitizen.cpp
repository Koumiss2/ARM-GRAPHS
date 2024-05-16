#include "sitizen.h"
#include "ui_sitizen.h"

sitizen::sitizen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sitizen)
{
    setWindowFlag(Qt::FramelessWindowHint);
    ui->setupUi(this);
    model1 = new  QSqlTableModel(this);
    model1->setTable("citizen");
    model1->select();
    ui->tableView->setModel(model1);
}

sitizen::~sitizen()
{
    delete ui;
}

void sitizen::on_pushButton_clicked()
{
    model1->insertRow(model1->rowCount());
}


void sitizen::on_pushButton_2_clicked()
{
    model1->removeRow(rowCnt);
}


void sitizen::on_tableView_clicked(const QModelIndex &index)
{
    rowCnt = index.row();
}


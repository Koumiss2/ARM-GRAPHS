#include "bill.h"
#include "ui_bill.h"

Bill::Bill(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Bill)
{
    ui->setupUi(this);
}

Bill::~Bill()
{
    delete ui;
}

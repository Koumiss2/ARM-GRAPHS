#include "thebill.h"
#include "ui_thebill.h"
#include "btab.h"
#include "sitizen.h"
#include "billdate.h"
#include "billflat.h"
#include "sitizenflat.h"

theBill::theBill(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::theBill)
{
    setWindowFlag(Qt::FramelessWindowHint);
    ui->setupUi(this);
    ui->listWidget->addItem("flat");
    ui->listWidget->addItem("theBill");
    ui->listWidget->addItem("citizen");
    ui->listWidget->addItem("billDate");
    ui->listWidget->addItem("billFlat");
    ui->listWidget->addItem("sitizenFlat");
}

theBill::~theBill()
{
    delete ui;
}

void theBill::on_pushButton_clicked()
{
    if (ui->listWidget->currentItem()->text() == "theBill")
    {
        Btab w;
        w.setModal(true);
        w.exec();
    }
    else if (ui->listWidget->currentItem()->text() == "citizen")
    {
        sitizen w;
        w.setModal(true);
        w.exec();
    }
    else if (ui->listWidget->currentItem()->text() == "billDate")
    {
        billDate w;
        w.setModal(true);
        w.exec();
    }
    else if (ui->listWidget->currentItem()->text() == "billFlat")
    {
        billFlat w;
        w.setModal(true);
        w.exec();
    }
    else if (ui->listWidget->currentItem()->text() == "sitizenFlat")
    {
        sitizenFlat w;
        w.setModal(true);
        w.exec();
    }
    else
    {
        close();
    }
}


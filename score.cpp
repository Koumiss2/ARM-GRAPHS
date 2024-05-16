#include "score.h"
#include "ui_score.h"
#include "QDebug"
#include <QTableWidget>
#include <QTableWidgetItem>
Score::Score(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Score)
{
    ui->setupUi(this);
}

Score::~Score()
{
    delete ui;
}

void Score::slot1(QString a)
{
    //ui->label->setText(a);
    newLogin = a;
    QSqlQuery query("SELECT * FROM citizen WHERE login = '" + newLogin + "';");
    query.first();
    int sitID = query.value(0).toInt();
    query.exec("SELECT * FROM sitizenFlat WHERE sitizenID = " + QString::number(sitID) + ";");
    query.first();
    int flID = query.value(0).toInt();

    //int flatID = query.value(0).toInt();
    //query.exec("SELECT * FROM flat WHERE flatID = " + QString::number(flatID) + ";");
    //query.first();

    query.exec("SELECT number, nameBill, bDate, status, cost FROM flat "
               "INNER JOIN billFlat ON flat.id = billFlat.flatID "
               "INNER JOIN theBill ON theBill.id = billFlat.billID "
               "INNER JOIN billDate ON billDate.BillID = theBill.id "
               "WHERE flat.id = " + QString::number(flID) + ";");
    query.first();
    int cnt = 0;
    int count = 1;
    while(query.next()){
        count++;
    }
    ui->tableWidget->setRowCount(count);
    qDebug() << ui->tableWidget->rowCount();
    query.first();
    do{
        QTableWidgetItem *item;
        int ids = query.value(0).toInt();
        QString na = query.value(1).toString();
        QString dateB = query.value(2).toString();
        QString status = query.value(3).toString();
        int cost = query.value(4).toInt();
        for (int i(0); i < ui->tableWidget->columnCount(); i++)
        {
            item = new QTableWidgetItem();
            if (i == 0){
                item->setText(QString::number(ids));
            }
            if (i == 1){
                item->setText(na);
            }
            if (i == 2){
                item->setText(dateB);
            }
            if (i == 3){
                item->setText(status);
            }
            if (i == 4){
                item->setText(QString::number(cost));
            }
            ui->tableWidget->setItem(cnt, i, item);
        }
        cnt++;
    }while (query.next());

//    model = new  QSqlTableModel(this);
//    model->setTable("flat");
//    model->select();
//    ui->tableView->setModel(model);


}

void Score::on_pushButton_clicked()
{
    QSqlQuery query("SELECT * FROM flat WHERE number = " + str + ";");
    query.first();
    int fID = query.value(0).toInt();
    query.exec("SELECT billFlat.flatID, billFlat.billID FROM billFlat "
               "INNER JOIN billDate ON billFlat.billID = billDate.BillID "
               "WHERE billFlat.flatID = " + QString::number(fID) + " AND billDate.status = 'Не оплачен';");
    query.first();
    int cuID = query.value(1).toInt();
    qDebug() << cuID;
    query.exec("UPDATE billDate SET status = 'Оплачен' WHERE BillID = " + QString::number(cuID) + ";");
}

void Score::on_tableWidget_clicked(const QModelIndex &index)
{
    rowCnt = index.row();
    str = ui->tableWidget->item(rowCnt, 0)->text();
    qDebug() << rowCnt;
    qDebug() << ui->tableWidget->item(rowCnt, 0)->text();
}


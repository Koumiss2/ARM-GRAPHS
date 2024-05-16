#include "profile.h"
#include "ui_profile.h"

Profile::Profile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Profile)
{
    ui->setupUi(this);

//    model1->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));

//    QSqlQuery query("SELECT * FROM flat;");
//    query.first();
//    int id = query.value(0).toInt();
//    int number = query.value(1).toInt();
//    int sit = query.value(2).toInt();

//    ui->label->setText(QString::number(id));
//    ui->label_2->setText(QString::number(number));
//    ui->label_3->setText(QString::number(sit));
}

Profile::~Profile()
{
    delete ui;
}

void Profile::slot(QString a)
{
    ui->label_4->setText(a);
    newLogin = a;
    QSqlQuery query("SELECT * FROM citizen WHERE login = '" + newLogin + "';");
    query.first();
    id = query.value(0).toInt();
    name = query.value(1).toString();
    surname = query.value(2).toString();
    pat = query.value(3).toString();

    ui->label->setText(QString::number(id));
    ui->label_2->setText(name);
    ui->label_3->setText(surname);
    ui->label_4->setText(pat);
}




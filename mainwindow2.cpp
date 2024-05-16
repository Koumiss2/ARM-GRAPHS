#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "profile.h"
#include "score.h"
MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    newLogin = ui->label->text();

    //model1->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));

//    QSqlQuery query("SELECT * FROM citizen WHERE login = 'Nik'");
//    query.first();
//    int id = query.value(0).toInt();
//    QString number = query.value(1).toString();
////    int sit = query.value(2).toInt();

//   // ui->label->setText(QString::number(id));
//    ui->label_2->setText(QString::number(id));
//    ui->label_3->setText(newLogin);



}

MainWindow2::~MainWindow2()
{
    delete ui;
}


void MainWindow2::on_pushButton_clicked()
{
    Profile *w = new Profile();
    w->show();
    connect(this, &MainWindow2::signal, w, &Profile::slot);
    emit signal(newLogin);
}


void MainWindow2::on_pushButton_2_clicked()
{
    Score *w = new Score();
    w->show();
    connect(this, &MainWindow2::signal, w, &Score::slot1);
    emit signal(newLogin);
}


void MainWindow2::on_pushButton_3_clicked()
{
    close();
}

void MainWindow2::slot(QString a)
{
    ui->label->setText(a);
    newLogin = ui->label->text();
    emit signal(newLogin);

}


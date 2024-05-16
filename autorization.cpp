#include "autorization.h"
#include "ui_autorization.h"

#include "profile.h"
#include <QMessageBox>
#include <QApplication>
Autorization::Autorization(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Autorization)
{
    ui->setupUi(this);
    //setWindowFlag(Qt::FramelessWindowHint);
    dataBase1 = QSqlDatabase::addDatabase("QSQLITE");
    dataBase1.setDatabaseName("./test.dataBase1");
    if(dataBase1.open())
    {
        qDebug("Open");
    }
    else
    {
        qDebug("no open");
    }
    query1 = new QSqlQuery(dataBase);
   query1->exec("CREATE TABLE flat(id INT PRIMARY KEY, number INT NOT NULL);");
   query1->exec("CREATE TABLE theBill(id INT PRIMATY KEY, nameBill TEXT);");
   query1->exec("CREATE TABLE citizen(id INT PRIMATY KEY, name TEXT, surname TEXT, patronymic TEXT);");
   query1->exec("CREATE TABLE billDate(BillID int, bDate DATE, status TEXT NOT NULL DEFAULT 'Не оплачен', cost INT NOT NULL, foreign key(BillID) references theBill(id));");
   query1->exec("CREATE TABLE billFlat(flatID int, billID int, foreign key(billID) references theBill(id), foreign key(flatID) references flat(id));");
   query1->exec("CREATE TABLE sitizenFlat(flatID int, sitizenID int, foreign key(sitizenID) references sitizen(id), foreign key(flatID) references flat(id));");
   query1->exec("ALTER TABLE flat ADD sitizenFlat int not null;");
   query1->exec("ALTER TABLE citizen ADD login TEXT;");
   query1->exec("ALTER TABLE citizen ADD password TEXT;");


}

Autorization::~Autorization()
{
    delete ui;
}

QString Autorization::getLg()
{
    return lg;
}

void Autorization::on_pushButton_clicked()
{
    QSqlQuery query("SELECT login, password FROM citizen;");

    QString login = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    bool flag = true;

    while (query.next() && flag == true)
    {
        lg = query.value(0).toString();
        ps = query.value(1).toString();
        if (login == lg && password == ps) flag = false;
    }

    if (login == "admin" && password == "admin" && ui->checkBox->isChecked())
    {
        this->hide();
        MainWindow *w = new MainWindow();
        w->show();
    }
    else if (flag == false && ui->checkBox->isChecked()==false)
    {
        this->hide();
        MainWindow2 *w = new MainWindow2();
        w->show();

        connect(this, &Autorization::signal, w, &MainWindow2::slot);
        emit signal(lg);
    }

    else
    {
        QMessageBox::warning(this, "Ошибка", "Неверный логин или пароль");
    }

}


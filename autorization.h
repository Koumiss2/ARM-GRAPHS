#ifndef AUTORIZATION_H
#define AUTORIZATION_H
#include <QSqlDatabase>
#include <QDialog>
#include "mainwindow.h"
#include "mainwindow2.h"
#include "profile.h"
namespace Ui {
class Autorization;
}

class Autorization : public QDialog
{
    Q_OBJECT

public:
    explicit Autorization(QWidget *parent = nullptr);
    ~Autorization();
    QString getLg();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Autorization *ui;
    QSqlDatabase dataBase;
    QSqlDatabase dataBase1;
    QSqlQuery *query;
    QSqlQuery *query1;
    QSqlTableModel *model;
    int row;
    QString lg;
    QString ps;


signals:
    void signal(QString);
};

#endif // AUTORIZATION_H

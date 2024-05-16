#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H
#include <QSqlDatabase>
#include <QMainWindow>
#include <QSqlQuery>
#include <QtDebug>
#include "autorization.h"

namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow2(QWidget *parent = nullptr);
    ~MainWindow2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();




private:
    Ui::MainWindow2 *ui;
    QString newLogin;
public slots:
    void slot(QString a);
signals:
    void signal(QString);
};



#endif // MAINWINDOW2_H

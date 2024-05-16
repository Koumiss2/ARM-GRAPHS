#ifndef SCORE_H
#define SCORE_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtDebug>
#include <QSqlTableModel>
#include <QTableWidget>
#include <QTableWidgetItem>
namespace Ui {
class Score;
}

class Score : public QDialog
{
    Q_OBJECT

public:
    explicit Score(QWidget *parent = nullptr);
    ~Score();

private:
    Ui::Score *ui;
    QString newLogin;
    QSqlTableModel *model;
    int rowCnt;
    QString str;
public slots:
    void slot1(QString a);
private slots:
    void on_pushButton_clicked();
    void on_tableWidget_clicked(const QModelIndex &index);
};

#endif // SCORE_H

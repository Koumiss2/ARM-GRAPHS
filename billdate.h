#ifndef BILLDATE_H
#define BILLDATE_H

#include <QDialog>
#include <QSqlTableModel>
namespace Ui {
class billDate;
}

class billDate : public QDialog
{
    Q_OBJECT

public:
    explicit billDate(QWidget *parent = nullptr);
    ~billDate();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_tableView_clicked(const QModelIndex &index);

private:
    Ui::billDate *ui;
    QSqlTableModel *model1;
    int rowCnt;
};

#endif // BILLDATE_H

#ifndef BILLFLAT_H
#define BILLFLAT_H

#include <QDialog>
#include <QSqlTableModel>
namespace Ui {
class billFlat;
}

class billFlat : public QDialog
{
    Q_OBJECT

public:
    explicit billFlat(QWidget *parent = nullptr);
    ~billFlat();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_tableView_clicked(const QModelIndex &index);

private:
    Ui::billFlat *ui;
    QSqlTableModel *model1;
    int rowCnt;
};

#endif // BILLFLAT_H

#ifndef SITIZENFLAT_H
#define SITIZENFLAT_H

#include <QDialog>
#include <QSqlTableModel>
namespace Ui {
class sitizenFlat;
}

class sitizenFlat : public QDialog
{
    Q_OBJECT

public:
    explicit sitizenFlat(QWidget *parent = nullptr);
    ~sitizenFlat();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_tableView_clicked(const QModelIndex &index);

private:
    Ui::sitizenFlat *ui;
    QSqlTableModel *model1;
    int rowCnt;
};

#endif // SITIZENFLAT_H

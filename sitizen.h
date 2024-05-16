#ifndef SITIZEN_H
#define SITIZEN_H

#include <QDialog>
#include <QSqlTableModel>
namespace Ui {
class sitizen;
}

class sitizen : public QDialog
{
    Q_OBJECT

public:
    explicit sitizen(QWidget *parent = nullptr);
    ~sitizen();
    void setCnt(int nCnt){
        cnt = nCnt;
    }
    int getCnt(){
        return cnt;
    }

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_tableView_clicked(const QModelIndex &index);

private:
    Ui::sitizen *ui;
    QSqlTableModel *model1;
    int rowCnt;
    int cnt;
};

#endif // SITIZEN_H

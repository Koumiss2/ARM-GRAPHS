#ifndef THEBILL_H
#define THEBILL_H

#include <QDialog>

namespace Ui {
class theBill;
}

class theBill : public QDialog
{
    Q_OBJECT

public:
    explicit theBill(QWidget *parent = nullptr);
    ~theBill();

private slots:
    void on_pushButton_clicked();

private:
    Ui::theBill *ui;
};

#endif // THEBILL_H

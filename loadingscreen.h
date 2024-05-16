#ifndef LOADINGSCREEN_H
#define LOADINGSCREEN_H

#include <QDialog>
#include <QThread>
#include "autorization.h"
#include <QFontDatabase>
namespace Ui {
class LoadingScreen;
}

class LoadingScreen : public QDialog
{
    Q_OBJECT

public:
    explicit LoadingScreen(QWidget *parent = nullptr);
    ~LoadingScreen();


    void Start_Loading();

private slots:
    void on_progressBar_valueChanged(int value);

private:
    Ui::LoadingScreen *ui;

};

#endif // LOADINGSCREEN_H

#include "loadingscreen.h"
#include "ui_loadingscreen.h"

LoadingScreen::LoadingScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoadingScreen)
{
    ui->setupUi(this);
//    int id = QFontDatabase::addApplicationFont(":/fonts/Comfortaa-Bold.ttf");
//    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
//    QFont monospace(family);
}

LoadingScreen::~LoadingScreen()
{
    delete ui;
}

void LoadingScreen::Start_Loading()
{
    for (int val = ui->progressBar->minimum(); val < ui->progressBar->maximum(); val++)
    {
        QThread::msleep(30);
        ui->progressBar->setValue(val);
        qApp->processEvents(QEventLoop::AllEvents);
    }
}


void LoadingScreen::on_progressBar_valueChanged(int value)
{
    if (value == 99){
        this->hide();
        Autorization w;
        w.setModal(true);
        w.exec();
    }
}


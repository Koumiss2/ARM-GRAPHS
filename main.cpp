#include "mainwindow.h"
#include "loadingscreen.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon("./exe.ico"));
    LoadingScreen w;
    w.show();
    qApp->processEvents(QEventLoop::AllEvents);
    w.Start_Loading();
    return a.exec();
}

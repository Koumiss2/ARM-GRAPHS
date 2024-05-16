#ifndef PROFILE_H
#define PROFILE_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtDebug>
namespace Ui {
class Profile;
}

class Profile : public QDialog
{
    Q_OBJECT

public:
    explicit Profile(QWidget *parent = nullptr);
    ~Profile();

private:
    Ui::Profile *ui;
    QString newLg;
    QString newLogin;
    int id;
    QString name;
    QString surname;
    QString pat;

public slots:
    void slot(QString a);

};

#endif // PROFILE_H

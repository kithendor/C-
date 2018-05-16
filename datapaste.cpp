#include "datapaste.h"
#include <QDebug>
#include <QtSql/QtSql>
#include <QtSql/QsqlQuery>
#include <QtSql/QSqlDatabase>
QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
Datapaste::Datapaste()
{

    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("vasi");
    if (db.open())
    {
        qDebug()<<"Mpika";
       // QSqlQuery query;
        //QString Namee = ui->Onoma->text();
        //QString Epith = ui->Epitheto->text();
        //query.exec("INSERT INTO qtdata (Name,Password) VALUES ('"+Namee+"','"+Epith+"') ");

    }
    else
    {
        qDebug()<<"Den mpika";
       // ui->statusBar->showMessage("Not Connected");
    }
}
Datapaste::~Datapaste()
{
     db.close();
}
/*void Datapaste::test()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("vasi");
    if (db.open())
    {
        qDebug()<<"Connected";
       // QSqlQuery query;
        //QString Namee = ui->Onoma->text();
        //QString Epith = ui->Epitheto->text();
        //query.exec("INSERT INTO qtdata (Name,Password) VALUES ('"+Namee+"','"+Epith+"') ");

    }
    else
    {
        qDebug()<<"Not connected";
       // ui->statusBar->showMessage("Not Connected");
    }

}*/
void Datapaste::insert(QString Name, QString Lname, QString Age, QString Phone)
{
    QSqlQuery query;
    query.exec("INSERT INTO users (Onoma,Epitheto,Hlikia,Thlefono) VALUES ('"+Name+"','"+Lname+"','"+Age+"','"+Phone+"') ");
}
void Datapaste::delte(QString Lname)
{
    QSqlQuery query2;
    if(query2.exec("DELETE FROM users WHERE Epitheto LIKE '"+Lname+"'  "))
    {
        qDebug()<<"Vgikaaaa";
    }

}

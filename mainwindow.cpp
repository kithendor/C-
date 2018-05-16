#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql/QtSql>
#include<QtSql/QSqlQuery>
#include<QtSql/QSqlDatabase>
#include <QDebug>
#include"datapaste.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushbtn_clicked()
{


    QString Name= ui->nametxt->text();
    QString Lname= ui->lnametxt->text();
    QString Age=ui->agetxt->text();
    QString Phone=ui->phonetxt->text();
    qDebug()<<"Onoma:"+Name+" "+"Epitheto:"+Lname+" "+"Hlikia:"+Age+" "+"Thlefono:"+Phone;
    Datapaste t;
    //t.test();
    t.insert(Name,Lname,Age,Phone);
}

void MainWindow::on_dltbtn_clicked()
{
    QString Lname= ui->lnametxt->text();
    Datapaste t;
     t.delte(Lname);
}

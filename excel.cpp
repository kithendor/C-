#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "xlsxdocument.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//
//    ui->statusBar->showMessage(xlsx.read("A1").toString(),2000);
//    xlsx.write("A2","SDFSDF");
//    xlsx.save();




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_submitbtn_clicked()
{
    QXlsx::Document xlsx("C:\\Users\\IEK Omiros\\Desktop\\kota.xlsx");
    QString erwtisi = ui->erwtisitxt->text();
    QString apantisi = ui->apantisitxt->text();
    QString la1 = ui->latxt->text();
    QString la2 = ui->latxt_2->text();
    QString la3 = ui->latxt_3->text();
    if(erwtisi==""||apantisi==""||la1==""||la2==""||la3=="")
    {
        ui->statusBar->showMessage("valta mou ola!",2000);
    }
    else
    {
       int count = xlsx.read("K1").toInt();
       xlsx.write("A"+QString::number(count),erwtisi);
       xlsx.write("B"+QString::number(count),apantisi);
       xlsx.write("C"+QString::number(count),la1);
       xlsx.write("D"+QString::number(count),la2);
       xlsx.write("E"+QString::number(count),la3);
       xlsx.write("K1",++count);
       xlsx.save();
    }
}

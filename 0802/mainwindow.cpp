#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include <iostream>
#include"QDebug"
//#include <string>

using namespace std;




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

void MainWindow::on_pushButton_clicked()
{
    ui->label->setNum(i);
    /*
    QString str="10";
    int sum=str.toInt();
    qDebug()<<"sum="<<sum<<endl;
    */
    this->i++;
    cout << i << endl;

}

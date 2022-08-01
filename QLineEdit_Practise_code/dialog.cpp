#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_radioButton_clicked()//是否隐藏密码的按钮
{
    static int i=0;
    i++;
    if(i%2==1)
    {
        //隐藏密码
        ui->lineEdit_2->setEchoMode(QLineEdit::Password);//将密码隐藏
    }
    if(i%2==0)
    {
        ui->lineEdit_2->setEchoMode(QLineEdit::Normal);//将密码显示
    }
}
void Dialog::on_pushButton_clicked()//让账号和密码显示到Label上
{
    if(ui->lineEdit->text()=="123456"&& ui->lineEdit_2->text()=="huaqingyuanjian")
    {

/*
            ui->label_4->setText(ui->lineEdit->text());//将账号显示到label上
            ui->label_6->setText(ui->lineEdit_2->text());//将密码显示到label上
*/

    }
}

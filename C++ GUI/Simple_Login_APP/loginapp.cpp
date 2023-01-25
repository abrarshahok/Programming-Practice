#include "loginapp.h"
#include "ui_loginapp.h"
#include <QMessageBox>
#include <QPixmap>
loginApp::loginApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::loginApp)
{
    ui->setupUi(this);
    QPixmap pix("/home/abrar/Fiver/Solve-Coding-Problems.jpg");
    int w = ui->Pic->width();
    int h = ui->Pic->height();
    ui->Pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

loginApp::~loginApp()
{
    delete ui;
}

void loginApp::on_Login_clicked()
{
    QString user  = ui->UserName->text();
    QString email = ui->Email->text();
    QString pass  = ui->Password->text();

    if(user == "Abrar Ahmed" && email == "abrarshahok@gmail.com" && pass == "12345"){
        QMessageBox::information(this,"Login","Login Success");
        hide();
        newWin = new Dialog(this);
        newWin->show();
    }

    else{
        QMessageBox::warning(this,"Login","Email , UserName or Password Incorrect");
    }
}


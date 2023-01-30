#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/Images/laptop.jpg");
    int w = ui->Pic->width();
    int h = ui->Pic->height();
    ui->Pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->statusbar->addPermanentWidget(ui->progress);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Login_clicked()
{
    if(ui->Name->text() == "Abrar" && ui->Password->text() == "12345"){
//        QMessageBox::information(this,"Login Success","Login Success Full");
//        ui->statusbar->showMessage("Login Success Full",5000);
        ui->progress->setText("Login Success Full");
    }
    else {
//        QMessageBox::warning(this,"Login Failed","UserName or Password Incorrect!");
//        ui->statusbar->showMessage("UserName or Password Incorrect!",5000);
        ui->progress->setText("UserName or Password Incorrect!");
    }
}


void MainWindow::on_Password_returnPressed()
{
    MainWindow::on_Login_clicked();
}

void MainWindow::on_Name_returnPressed()
{
    MainWindow::on_Login_clicked();
}


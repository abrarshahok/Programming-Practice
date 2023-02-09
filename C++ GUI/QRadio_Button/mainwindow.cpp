#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QRadioButton>
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


//void MainWindow::on_Yes_clicked()
//{
//    QMessageBox::information(this,"Answer","Yes!");
//}


//void MainWindow::on_No_clicked()
//{
//    QMessageBox::information(this,"Answer","Not Really Fine!");
//}


void MainWindow::on_Check_clicked()
{
    if(ui->Yes->isChecked()){
        QMessageBox::information(this,"Answer","Yes!");
    }

    else if(ui->No->isChecked()){
        QMessageBox::information(this,"Answer","Not Really Fine!");
    }
}


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    QDir dir("/home/abrar/21-BSCS/Programming_Practice/C++ GUI/Qdir_Practice/");
//    if(dir.exists()){
//        QMessageBox::information(this,"Info","True");
//    }
//    else{
//        QMessageBox::information(this,"Info","False");
//    }
    QDir dir1;
    foreach (QFileInfo var, dir1.drives()) {
        ui->comboBox->addItem(var.absoluteFilePath());
    }

//    QDir dir2;
//    foreach (QFileInfo var, dir2.entryInfoList()) {
//        ui->listWidget->addItem(var.absoluteFilePath());
//    }

    QDir dir3("/home/abrar/21-BSCS/Programming_Practice/C++ GUI/Qdir_Practice/");
    foreach (QFileInfo var, dir3.entryInfoList()) {
        if(var.isDir()){
            ui->listWidget->addItem("Dir : "+var.absoluteFilePath());
        }
        if(var.isFile()){
            ui->listWidget->addItem("File : "+var.absoluteFilePath());
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QDir dir("/home/abrar/new/");
    if(dir.exists()){
        QMessageBox::information(this,"Info","Directory Exists");
    }
    else{
        dir.mkpath("/home/abrar/new/");
    }
}


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_FIle_triggered()
{
    QMessageBox::information(this,"New File","New File Created");
}


void MainWindow::on_actionOpen_File_triggered()
{
    QMessageBox::information(this,"Open File","File Opened");
}


void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}


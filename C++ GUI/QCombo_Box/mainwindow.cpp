#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstring>
#include <QMessageBox>
using namespace std;
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->comboBox->addItem(" Abrar");
//    ui->comboBox->addItem(" Taha");
//    ui->comboBox->addItem(" Farhad");
//    ui->comboBox->addItem(" Faizan");
    QString names [5] = {"Abrar","Taha","Farhad","Faizan","Shoaib"};
    for(int i=0; i<5; i++){
        ui->comboBox->addItem(QString::number(i+1) + " : " + names[i]);
    }
    ui->comboBox->insertItem(5,"New Text");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"Info",ui->comboBox->currentText());
}


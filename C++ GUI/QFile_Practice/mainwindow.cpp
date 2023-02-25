#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog>
#include <QDir>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Write_clicked()
{
    QFile file("/home/abrar/21-BSCS/Programming_Practice/C++ GUI/QFile_Practice/newfile.txt");
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"Error","File Not Opened");
    }
    QTextStream write(&file);
    QString text = ui->plainTextEdit->toPlainText();
    write << text;
    file.flush();
    file.close();
}

void MainWindow::on_Read_clicked()
{
    QString Filter = "All File (*.*) ;; Text File (*.txt) ;; Cpp File (*.cpp)";
    QString file_name = QFileDialog::getOpenFileName(this,"Open a File",QDir::homePath(),Filter);
    QFile file(file_name);
//    QFile file("/home/abrar/21-BSCS/Programming_Practice/C++ GUI/QFile_Practice/newfile.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"Error","File Not Opened!");
    }
    QTextStream read(&file);
    QString read_Text = read.readAll();
    ui->plainTextEdit->setPlainText(read_Text);
    file.close();
}


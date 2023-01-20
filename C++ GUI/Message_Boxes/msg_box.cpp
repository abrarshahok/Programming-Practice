#include "msg_box.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    /*
    1st Argument = this
    2nd Argument = Title
    3rd Argument = Message
    4th Argument = Optional
    List of Messages
    void            about
    void            aboutQt
    Standard Button critical
    Standard Button information
    Standard Button question
    Standard Button warning
    */
//    QMessageBox::about(this, "Message BOX","This is My Custom Message");
//    QMessageBox::aboutQt(this,"About QT");
//    QMessageBox::critical(this,"Message BOX","Critical Message BOX");
//    QMessageBox::information(this,"Message BOX","Informational Message BOX");
//    QMessageBox::warning(this,"Message BOX","Warning Message BOX");
    QMessageBox::StandardButton answer = QMessageBox::question(this,"Message BOX","Are You Dumb?",QMessageBox::Yes | QMessageBox::No);
    if(answer == QMessageBox::Yes){
        QApplication::quit();
    }
    else{
        qDebug() << "No is Clicked";
    }
}


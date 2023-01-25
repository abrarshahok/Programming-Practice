#include "message_box.h"
#include "ui_message_box.h"
#include <QMessageBox>
#include <QDebug>
Message_Box::Message_Box(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Message_Box)
{
    ui->setupUi(this);
}

Message_Box::~Message_Box()
{
    delete ui;
}


void Message_Box::on_pushButton_clicked()
{
    /*
    1-> this Pointer
    2-> Title (String)
    3-> Message (String)
    4-> Optional (Yes/No)
    Types of Message Boxes
    void        about()
    void        aboutQt()
    Standard    critical
    Standard    Info
    Standard    Question
    Standard    Warning
    */
//    QMessageBox::about(this,"Message Box","First Message Box");
//    QMessageBox::aboutQt(this,"About QT");
//    QMessageBox::critical(this,"Message Box","Critical Situation");
//    QMessageBox::information(this,"Message Box","Information");
//    QMessageBox::warning(this,"Message Box","Warning");
    QMessageBox::StandardButton reply = QMessageBox::question(this,"Message Box","Are you Dumb",QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes){
        QApplication::quit();
    }
    else{
        qDebug() << "No is Clicked";
    }
}


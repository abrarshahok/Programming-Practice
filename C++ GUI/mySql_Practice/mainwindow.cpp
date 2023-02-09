#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug () << QSqlDatabase::drivers();
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("21bscs20");
    db.setDatabaseName("practice");
    if(db.open()){
        QMessageBox::information(this,"Success","Database is Connected");
    }else{
        QMessageBox::warning(this,"Error","Database is not Connected");
    }
    MainWindow::on_ReadData_clicked();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Register_User_clicked(){
    db.open();
    QSqlDatabase::database().transaction();
    QSqlQuery insert_data(db);
    insert_data.prepare("INSERT INTO user(username,password,email) VALUES (:username,:password,:email)");
    insert_data.bindValue(":username",ui->UserName->text());
    insert_data.bindValue(":password",ui->Password->text());
    insert_data.bindValue(":email",ui->Email->text());
    if(insert_data.exec()){
        QMessageBox::information(this,"Success","Data Inserted");
    }
    QSqlDatabase::database().commit();
    db.close();
}

void MainWindow::on_ReadData_clicked()
{
    db.open();
    QSqlQuery read_data(db);
    int rowNum=0;
    read_data.prepare("SELECT * FROM user");
    if(read_data.exec()){
        ui->ReadTable->setRowCount(read_data.size());
        while(read_data.next()){
            ui->ReadTable->setItem(rowNum,0,new QTableWidgetItem(QString::number(read_data.value("ID").toInt())));
            ui->ReadTable->setItem(rowNum,1,new QTableWidgetItem(QString(read_data.value("Username").toString())));
            ui->ReadTable->setItem(rowNum,2,new QTableWidgetItem(QString(read_data.value("Password").toString())));
            ui->ReadTable->setItem(rowNum,3,new QTableWidgetItem(QString(read_data.value("Email").toString())));
            rowNum++;
        }
    }
    db.close();
}


void MainWindow::on_DeleteUser_clicked()
{
    db.open();
    QSqlDatabase::database().transaction();
    QSqlQuery delete_data(db);
    delete_data.prepare("DELETE FROM user WHERE ID=" +ui->del_choose->text() + "");
    delete_data.exec();
    QSqlDatabase::database().commit();
    db.close();
    ui->del_choose->setText("");
    MainWindow::on_ReadData_clicked();
}


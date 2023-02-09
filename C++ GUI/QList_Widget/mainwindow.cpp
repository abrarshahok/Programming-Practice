#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    QListWidget *item = new QListWidget(QIcon("location_of_Icon","Name"));
//    ui->listWidget->addItem(item);
    ui->listWidget->addItem("Taha");
    ui->listWidget->addItem("Faizan");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Info_clicked()
{
//    QMessageBox::information(this,"Info",ui->listWidget->currentItem()->text());
    ui->listWidget->currentItem()->setBackgroundColor(Qt::red);
    ui->listWidget->currentItem()->setForeground(Qt::white);
}


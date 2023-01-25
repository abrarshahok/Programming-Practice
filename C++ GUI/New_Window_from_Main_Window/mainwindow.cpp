#include "mainwindow.h"
#include "ui_mainwindow.h"
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
//    Dialog newWin;
//    newWin.setModal(true);
//    newWin.exec();
//    hide();
    dialog = new Dialog (this);
    dialog->show();
}


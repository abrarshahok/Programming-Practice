#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QTime>
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), SLOT(my_func()));
    timer->start(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::my_func()
{
    QTime time = QTime::currentTime();
    QString time_text = time.toString("hh : mm : ss");
    if((time.second() % 2) == 0){
        time_text[3] = ' ';
        time_text[8] = ' ';
    }
    ui->date_time->setText(time_text);
}


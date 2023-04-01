#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
using namespace std;
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


void MainWindow::on_find_Fact_clicked()
{
    int fact = 1;
    int num = ui->input_num->text().toInt();
    if (ui->input_num->text().isEmpty()){
        QMessageBox::warning(this,"Warning","Please Input Number");
        return;
    }

    for (int i=1; i<=num; i++){
        fact = fact * i;
    }

    ui->show_fact->setText("Factorial is: " + QString::number(fact));
}


void MainWindow::on_input_num_textChanged()
{
    ui->show_fact->setText("Answer will be Shown Here");
}


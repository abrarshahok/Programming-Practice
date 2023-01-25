#include "calculator.h"
#include "ui_calculator.h"
#include <sstream>
#include <cstring>
Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}


void Calculator::on_One_clicked()
{
    ui->Input->setText(ui->Input->text() + QString::fromStdString("1"));
}


void Calculator::on_Two_clicked()
{
    ui->Input->setText(ui->Input->text() + QString::fromStdString("2"));
}


void Calculator::on_Three_clicked()
{
    ui->Input->setText(ui->Input->text() + QString::fromStdString("3"));
}


void Calculator::on_Four_clicked()
{
    ui->Input->setText(ui->Input->text() + QString::fromStdString("4"));
}


void Calculator::on_Five_clicked()
{
    ui->Input->setText(ui->Input->text() + QString::fromStdString("5"));
}


void Calculator::on_Six_clicked()
{
    ui->Input->setText(ui->Input->text() + QString::fromStdString("6"));
}


void Calculator::on_Seven_clicked()
{
    ui->Input->setText(ui->Input->text() + QString::fromStdString("7"));
}


void Calculator::on_Eight_clicked()
{
    ui->Input->setText(ui->Input->text() + QString::fromStdString("8"));
}


void Calculator::on_Nine_clicked()
{
    ui->Input->setText(ui->Input->text() + QString::fromStdString("9"));
}


void Calculator::on_Zero_clicked()
{
    ui->Input->setText(ui->Input->text() + QString::fromStdString("0"));
}


void Calculator::on_dot_clicked()
{
    ui->Input->setText(ui->Input->text() + QString::fromStdString("."));
}


void Calculator::on_Plus_clicked()
{
    ui->Input->setText(ui->Input->text() + QString::fromStdString("+"));
}


void Calculator::on_Minus_clicked()
{
    ui->Input->setText(ui->Input->text() + QString::fromStdString("-"));
}


void Calculator::on_Multiply_clicked()
{
    ui->Input->setText(ui->Input->text() + QString::fromStdString("*"));
}


void Calculator::on_Divide_clicked()
{
    ui->Input->setText(ui->Input->text() + QString::fromStdString("/"));
}


void Calculator::on_Equal_clicked()
{
    long double output = 0;
    long double temp = 0;
    char op = '+';
    std::string str = ui->Input->text().toStdString();
    std::stringstream ss(str);
    while(ss>>temp){
          if(op == '+'){output+=temp;}
          else if(op == '-'){output-=temp;}
          else if(op == '*'){output*=temp;}
          else if(op == '/'){output/=temp;}
          else{continue;}
          ss>>op;
      }
    ui->Input->setText(QString::fromStdString(std::to_string(output)));
}


void Calculator::on_Ac_clicked()
{
    ui->Input->setText(QString::fromStdString(""));
}


void Calculator::on_Clear_clicked()
{
    std::string str = ui->Input->text().toStdString();
    str.resize(str.size() - 1);
    ui->Input->setText(QString::fromStdString(str));
}


void Calculator::on_Input_returnPressed()
{
    Calculator::on_Equal_clicked();
}


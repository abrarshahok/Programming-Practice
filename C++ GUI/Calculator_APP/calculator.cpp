#include "calculator.h"
#include "ui_calculator.h"
#include <QMessageBox>
#include <sstream>
#include <QValidator>
#include <cstring>
#include <cmath>

Calculator::Calculator(QWidget *parent) : QMainWindow(parent), ui(new Ui::Calculator)
{
    ui->setupUi(this);
    QRegularExpression expr("^([0-9]{1,15}[+\\/*\\.-])+[0-9]{1,15}$");
    QValidator *validator = new QRegularExpressionValidator(expr, this);
    ui->Input->setValidator(validator);
    ui->Input->setFocusPolicy(Qt::StrongFocus);
    ui->Input->setFocus();
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::max_limit(std::string &s){
    if(s.length() >= 15){
        QMessageBox::warning(this,"Limitations!","Reached the Maximum Digits of Number (15)");
    }
}

void Calculator::check_num_limit(std::string s){
    std::string str = ui->Input->text().toStdString();
    if(str.length() >= 15){
        ui->Input->setText(ui->Input->text() + QString::fromStdString(s));
    }
}

void Calculator::check_op_limit(std::string s){
    std::string str = ui->Input->text().toStdString();
    int len = str.length()-1;
    if(str.at(len) != '.' && str.at(len) != '-' && str.at(len) != '+' && str.at(len) != '/' && str.at(len) != '*'){
        ui->Input->setText(ui->Input->text() + QString::fromStdString(s));
    }
}
void Calculator::on_One_clicked()
{
    std::string str = ui->Input->text().toStdString();
    Calculator::max_limit(str);
    Calculator::check_num_limit("1");
}


void Calculator::on_Two_clicked()
{
    std::string str = ui->Input->text().toStdString();
    Calculator::max_limit(str);
    Calculator::check_num_limit("2");
}


void Calculator::on_Three_clicked()
{
    std::string str = ui->Input->text().toStdString();
    Calculator::max_limit(str);
    Calculator::check_num_limit("3");
}


void Calculator::on_Four_clicked()
{
    std::string str = ui->Input->text().toStdString();
    Calculator::max_limit(str);
    Calculator::check_num_limit("4");
}


void Calculator::on_Five_clicked()
{
    std::string str = ui->Input->text().toStdString();
    Calculator::max_limit(str);
    Calculator::check_num_limit("5");
}


void Calculator::on_Six_clicked()
{
    std::string str = ui->Input->text().toStdString();
    Calculator::max_limit(str);
    Calculator::check_num_limit("6");
}


void Calculator::on_Seven_clicked()
{
    std::string str = ui->Input->text().toStdString();
    Calculator::max_limit(str);
    Calculator::check_num_limit("7");
}


void Calculator::on_Eight_clicked()
{
    std::string str = ui->Input->text().toStdString();
    Calculator::max_limit(str);
    Calculator::check_num_limit("8");
}


void Calculator::on_Nine_clicked()
{
    std::string str = ui->Input->text().toStdString();
    Calculator::max_limit(str);
    Calculator::check_num_limit("9");
}


void Calculator::on_Zero_clicked()
{
    std::string str = ui->Input->text().toStdString();
    Calculator::max_limit(str);
    Calculator::check_num_limit("0");
}


void Calculator::on_dot_clicked()
{
    Calculator::check_op_limit(".");
}


void Calculator::on_Plus_clicked()
{
    Calculator::check_op_limit("+");
}


void Calculator::on_Minus_clicked()
{
    Calculator::check_op_limit("-");
}


void Calculator::on_Multiply_clicked()
{

    Calculator::check_op_limit("*");
}


void Calculator::on_Divide_clicked()
{
    Calculator::check_op_limit("/");
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


bool Calculator::on_Clear_clicked()
{
    std::string str = ui->Input->text().toStdString();
    if(str.size() != 0){
        str.resize(str.size() - 1);
        ui->Input->setText(QString::fromStdString(str));
    }
    return false;
}


void Calculator::on_Input_returnPressed()
{
    Calculator::on_Equal_clicked();
}


void Calculator::on_About_clicked()
{
    QMessageBox::information(this,"About Developer","Made by : Abrar Ahmed Shahok\n"
                                                    "Features : Addition,Subtraction,Multiplication & Division\n"
                                                    "For Now It Does\'nt follow DMAS Rule I'll Soon Fix It!\n"
                                                    "It Accepts only 15 Digits Input same as all Calculators\n"
                                                    "Thanks for Using this Calculator <3");
}


void Calculator::on_Input_textChanged()
{
    if(ui->Input->text().length() >= 15){
        QMessageBox::warning(this,"Limitations!","Reached the Maximum Digits of Number (15)");
    }
}


#include "second_gui.h"
#include "ui_second_gui.h"

Second_GUI::Second_GUI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Second_GUI)
{
    ui->setupUi(this);
}

Second_GUI::~Second_GUI()
{
    delete ui;
}


void Second_GUI::on_Click_Me_clicked()
{
    ui -> label->setText("Button is Clicked");
}


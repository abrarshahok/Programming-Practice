#include "layout.h"
#include "ui_layout.h"

Layout::Layout(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Layout)
{
    ui->setupUi(this);
}

Layout::~Layout()
{
    delete ui;
}


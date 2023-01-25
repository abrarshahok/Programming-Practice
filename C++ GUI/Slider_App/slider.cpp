#include "slider.h"
#include "ui_slider.h"

Slider::Slider(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Slider)
{
    ui->setupUi(this);
    /*
    1 -> Sender ->
    2 -> SIGNAL ()
    3 -> Reciever ->
    4 -> SLOT ()
    */
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));
//    disconnect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));
}

Slider::~Slider()
{
    delete ui;
}


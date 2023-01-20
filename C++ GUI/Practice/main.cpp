#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("DUMB PEOPLE FINDER");
    w.resize(1015,500);
    w.show();
    return a.exec();
}

#include "msg_box.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(650,400);
    w.show();
    return a.exec();
}
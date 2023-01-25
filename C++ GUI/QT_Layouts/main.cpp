#include "layout.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Layout w;
    w.show();
    return a.exec();
}

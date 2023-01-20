#include "first_app.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow app;
    app.show();
    return a.exec();
}

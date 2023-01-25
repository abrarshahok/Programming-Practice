#include "second_gui.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Second_GUI app;
    app.show();
    return a.exec();
}

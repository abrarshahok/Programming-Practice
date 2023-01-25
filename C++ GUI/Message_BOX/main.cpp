#include "message_box.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Message_Box w;
    w.show();
    return a.exec();
}

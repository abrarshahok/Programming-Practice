#include<QApplication>
#include<QLabel>
int main(int argc, char* argv[]){
    QApplication App(argc, argv);
    QLabel *label = new QLabel("Hello Wolrd");
    label->resize(400,400);
    label->setWindowTitle("My APP");
    label->show();
    return App.exec();
}

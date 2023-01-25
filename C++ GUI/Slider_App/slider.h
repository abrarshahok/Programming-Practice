#ifndef SLIDER_H
#define SLIDER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Slider; }
QT_END_NAMESPACE

class Slider : public QMainWindow
{
    Q_OBJECT

public:
    Slider(QWidget *parent = nullptr);
    ~Slider();

private:
    Ui::Slider *ui;
};
#endif // SLIDER_H

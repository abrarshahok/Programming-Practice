#ifndef SECOND_GUI_H
#define SECOND_GUI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Second_GUI; }
QT_END_NAMESPACE

class Second_GUI : public QMainWindow
{
    Q_OBJECT

public:
    Second_GUI(QWidget *parent = nullptr);
    ~Second_GUI();

private slots:
    void on_Click_Me_clicked();

private:
    Ui::Second_GUI *ui;
};
#endif // SECOND_GUI_H

#ifndef LOGINAPP_H
#define LOGINAPP_H

#include <QMainWindow>
#include "dialog.h"
QT_BEGIN_NAMESPACE
namespace Ui { class loginApp; }
QT_END_NAMESPACE

class loginApp : public QMainWindow
{
    Q_OBJECT

public:
    loginApp(QWidget *parent = nullptr);
    ~loginApp();

private slots:
    void on_Login_clicked();

private:
    Ui::loginApp *ui;
    Dialog *newWin;
};
#endif // LOGINAPP_H

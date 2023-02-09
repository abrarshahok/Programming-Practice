#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QMessageBox>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_Admin_clicked();

    void on_User_clicked();

    void show_Admin_Portal();

    void show_User_Portal();

    void on_Admin_Login_clicked();

    void on_Add_Tablets_clicked();

    void on_Add_Tab_Info_clicked();

    void reset_input_Fields();

    void on_Add_Users_Button_clicked();

    void on_See_Tabs_clicked();

    void on_Push_Del_Tab_clicked();

    void on_About_Developer_clicked();

    void on_Submit_User_Info_clicked();

    void on_pushDel_User_clicked();

    void on_See_Users_clicked();

    void on_Normal_User_Login_clicked();

    void on_back_to_login_clicked();

    void on_Add_Admins_clicked();

    void on_See_Admins_clicked();

    void on_Submit_Admin_Info_clicked();

    void on_push_Del_Admin_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
};
#endif // MAINWINDOW_H

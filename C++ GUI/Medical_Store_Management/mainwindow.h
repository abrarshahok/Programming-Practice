#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
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

    void on_admin_button_clicked();

    void on_user_button_clicked();

    void on_admin_login_button_clicked();

    void on_see_tab_button_clicked();

    void on_add_delete_tab_clicked();

    void on_back_clicked();

    void on_back_2_clicked();

    void on_logout_clicked();

    void on_add_Tab_Button_clicked();

    void on_See_Users_Button_clicked();

    void on_add_del_users_clicked();

    void on_add_admin_info_button_clicked();

    void on_add_normal_user_info_button_clicked();

    void on_admin_del_button_clicked();

    void on_del_user_button_clicked();

    void on_search_tab_input_textChanged();

    void on_del_tab_button_clicked();

    void on_update_stoke_button_clicked();

    void on_update_price_button_clicked();

    void on_add_cart_page_button_clicked();

    void on_user_login_button_clicked();

    void on_add_to_cart_button_clicked();

    void on_See_Cart_Page_Button_clicked();

    void on_close_store_clicked();

    void on_cart_tab_search_textChanged();

    void on_about_dev_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
};
#endif // MAINWINDOW_H

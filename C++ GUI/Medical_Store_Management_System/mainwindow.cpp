#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Admin_Page->hide();
    ui->User_Page->hide();
    ui->Admin_Portal->hide();
    ui->add_tablets->hide();
    ui->Add_Users_Page->hide();
    ui->User_Login_Frame->hide();
    ui->Show_Admin_Info->hide();
    ui->Add_Admins_Page->hide();
    ui->Add_Cart->hide();
    // Connecting Database
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("21bscs20");
    db.setDatabaseName("Medical_Store");
    MainWindow::on_See_Tabs_clicked();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Admin_Login_clicked()
{
    db.open();
    db.transaction();
    QSqlQuery query(db);
    query.prepare("SELECT username, password FROM ADMINS WHERE username = :username AND password = :password");
    query.bindValue(":username", ui->Admin_user_Edit->text());
    query.bindValue(":password", ui->Admin_Pass_Edit->text());

    if (query.exec() && query.next())
    {
        QMessageBox::information(this, "Success", "Login Successful");
        MainWindow::show_Admin_Portal();
    }
    else if (ui->Admin_user_Edit->text() == "admin" && ui->Admin_Pass_Edit->text() == "admin")
    {
        QMessageBox::information(this, "Success", "Login Successful");
        MainWindow::show_Admin_Portal();
    }
    else
    {
        QMessageBox::warning(this, "Error", "Username or Password Incorrect");
        ui->Admin_Pass_Edit->setText("");
    }

    db.commit();
    db.close();
}

void MainWindow::on_See_Admins_clicked()
{
    ui->Show_Admin_Info->show();
    ui->Add_Admins_Page->hide();
    ui->Add_Users_Page->hide();
    ui->add_tablets->hide();
    ui->See_Tablets->hide();
    ui->See_Users_Frame->hide();
    ui->Add_Cart->hide();
    db.open();
    db.transaction();
    QSqlQuery read_data(db);
    int rowNum = 0;
    read_data.prepare("SELECT * FROM ADMINS");

    if (read_data.exec())
    {
        ui->Admin_Tab->setRowCount(read_data.size());
        while (read_data.next())
        {
            ui->Admin_Tab->setItem(rowNum, 0, new QTableWidgetItem(QString::number(read_data.value("ID").toInt())));
            ui->Admin_Tab->setItem(rowNum, 1, new QTableWidgetItem(QString(read_data.value("UserName").toString())));
            ui->Admin_Tab->setItem(rowNum, 2, new QTableWidgetItem(QString(read_data.value("Password").toString())));
            rowNum++;
        }
    }

    db.commit();
    db.close();
}

void MainWindow::on_Submit_Admin_Info_clicked()
{

    if (ui->Admin_Pass_Save->text() == "" || ui->Admin_User_Save->text() == "")
    {
        QMessageBox::warning(this, "Error", "Please, Fill Input Fields!");
    }
    else
    {
        db.open();
        db.transaction();
        QSqlQuery insert_user(db);
        insert_user.prepare("INSERT INTO ADMINS(username,password)"
                            "VALUES (:username,:password)");
        insert_user.bindValue(":username", ui->Admin_User_Save->text());
        insert_user.bindValue(":password", ui->Admin_Pass_Save->text());

        if (insert_user.exec())
        {
            QMessageBox::information(this, "Success", "Admin Data Inserted");
        }
        else
        {
            QMessageBox::warning(this, "Error", "Admin Data Not Inserted");
        }

        db.commit();
        db.close();
        ui->Add_User_Edit->setText("");
        ui->Add_Pass_Edit->setText("");
    }
}

void MainWindow::on_push_Del_Admin_clicked()
{
    db.open();
    db.transaction();
    QSqlQuery delete_user(db);
    delete_user.prepare("DELETE FROM ADMINS WHERE ID=" + ui->del_Admin_Edit->text() + "");

    if (delete_user.exec())
    {
        QMessageBox::information(this, "Deleted", "Admin Data Deleted");
    }
    else
    {
        QMessageBox::warning(this, "Error", "Admin Data Not Deleted");
    }

    db.commit();
    db.close();
    ui->del_Admin_Edit->setText("");
    MainWindow::on_See_Admins_clicked();
}

void MainWindow::on_Normal_User_Login_clicked()
{
    db.open();
    db.transaction();
    QSqlQuery query(db);
    query.prepare("SELECT username, password FROM USERS WHERE username = :username AND password = :password");
    query.bindValue(":username", ui->Normal_User_Name->text());
    query.bindValue(":password", ui->Normal_user_Pass->text());
    if (query.exec() && query.next())
    {
        QMessageBox::information(this, "Success", "Login Successful");
        MainWindow::show_User_Portal();
    }
    else
    {
        QMessageBox::warning(this, "Error", "Username or Password Incorrect");
        ui->Normal_user_Pass->setText("");
    }

    db.commit();
    db.close();
}

void MainWindow::on_See_Users_clicked()
{
    ui->See_Users_Frame->show();
    ui->See_Tablets->hide();
    ui->Add_Users_Page->hide();
    ui->Show_Admin_Info->hide();
    ui->add_tablets->hide();
    ui->Add_Admins_Page->hide();
    ui->Add_Cart->hide();
    db.open();
    db.transaction();
    QSqlQuery read_data(db);
    int rowNum = 0;
    read_data.prepare("SELECT * FROM USERS");

    if (read_data.exec())
    {
        ui->Show_Users->setRowCount(read_data.size());
        while (read_data.next())
        {
            ui->Show_Users->setItem(rowNum, 0, new QTableWidgetItem(QString::number(read_data.value("ID").toInt())));
            ui->Show_Users->setItem(rowNum, 1, new QTableWidgetItem(QString(read_data.value("UserName").toString())));
            ui->Show_Users->setItem(rowNum, 2, new QTableWidgetItem(QString(read_data.value("Password").toString())));
            rowNum++;
        }
    }

    db.commit();
    db.close();
}

void MainWindow::on_Submit_User_Info_clicked()
{
    if (ui->Add_User_Edit->text() == "" || ui->Add_Pass_Edit->text() == "")
    {
        QMessageBox::warning(this, "Error", "Please, Fill Input Fields!");
    }
    else
    {
        db.open();
        db.transaction();
        QSqlQuery insert_user(db);
        insert_user.prepare("INSERT INTO USERS(username,password)"
                            "VALUES (:username,:password)");
        insert_user.bindValue(":username", ui->Add_User_Edit->text());
        insert_user.bindValue(":password", ui->Add_Pass_Edit->text());

        if (insert_user.exec())
        {
            QMessageBox::information(this, "Success", "User Data Inserted");
        }
        else
        {
            QMessageBox::warning(this, "Error", "User Data Not Inserted");
        }

        db.commit();
        db.close();
        ui->Add_User_Edit->setText("");
        ui->Add_Pass_Edit->setText("");
        MainWindow::on_Add_Users_Button_clicked();
    }
}

void MainWindow::on_pushDel_User_clicked()
{
    db.open();
    db.transaction();
    QSqlQuery delete_user(db);
    delete_user.prepare("DELETE FROM USERS WHERE ID=" + ui->del_User_Edit->text() + "");

    if (delete_user.exec())
    {
        QMessageBox::information(this, "Deleted", "User Data Deleted");
    }
    else
    {
        QMessageBox::warning(this, "Error", "User Data Not Deleted");
    }

    db.commit();
    db.close();
    ui->del_User_Edit->setText("");
    MainWindow::on_See_Users_clicked();
}

void MainWindow::on_Add_Tab_Info_clicked()
{
    if (ui->S_No->text() == "" && ui->tab_Name->text() == "" && ui->tab_Price->text() == "" && ui->tab_stoke->text() == "" && ui->tab_Desc->text() == "" && ui->tab_MFG->text() == "" && ui->tab_EXP->text() == "")
    {
        QMessageBox::warning(this, "Error", "Please, Fill Input Fields!");
    }
    else
    {
        db.open();
        db.transaction();
        QSqlQuery insert_data(db);
        insert_data.prepare("INSERT INTO TABS(S_no,Name,Price,Stoke,Description,MFG,EXP)"
                            "VALUES (:S_no,:Name,:Price,:Stoke,:Description,:MFG,:EXP)");

        insert_data.bindValue(":S_no", ui->S_No->text());
        insert_data.bindValue(":Name", ui->tab_Name->text());
        insert_data.bindValue(":Price", ui->tab_Price->text());
        insert_data.bindValue(":Stoke", ui->tab_stoke->text());
        insert_data.bindValue(":Description", ui->tab_Desc->text());
        insert_data.bindValue(":MFG", ui->tab_MFG->text());
        insert_data.bindValue(":EXP", ui->tab_EXP->text());

        if (insert_data.exec())
        {
            QMessageBox::information(this, "Success", "Tab Data Inserted");
        }
        else
        {
            QMessageBox::warning(this, "Error", "Data Not Inserted");
        }

        db.commit();
        db.close();
        MainWindow::reset_input_Fields();
    }
}

void MainWindow::on_See_Tabs_clicked()
{
    ui->See_Tablets->show();
    ui->Add_Cart->hide();
    ui->Add_Users_Page->hide();
    ui->add_tablets->hide();
    ui->See_Users_Frame->hide();
    ui->Show_Admin_Info->hide();
    ui->Add_Admins_Page->hide();
    db.open();
    db.transaction();
    QSqlQuery show_the_tab(db);
    int rowNum = 0;
    show_the_tab.prepare("SELECT * FROM TABS");
    if (show_the_tab.exec())
    {
        ui->show_Tab->setRowCount(show_the_tab.size());
        while (show_the_tab.next())
        {
            ui->show_Tab->setItem(rowNum, 0, new QTableWidgetItem(QString(show_the_tab.value("S_No").toString())));
            ui->show_Tab->setItem(rowNum, 1, new QTableWidgetItem(QString(show_the_tab.value("Name").toString())));
            ui->show_Tab->setItem(rowNum, 2, new QTableWidgetItem(QString(show_the_tab.value("Price").toString())));
            ui->show_Tab->setItem(rowNum, 3, new QTableWidgetItem(QString(show_the_tab.value("Stoke").toString())));
            ui->show_Tab->setItem(rowNum, 4, new QTableWidgetItem(QString(show_the_tab.value("Description").toString())));
            ui->show_Tab->setItem(rowNum, 5, new QTableWidgetItem(QString(show_the_tab.value("MFG").toString())));
            ui->show_Tab->setItem(rowNum, 6, new QTableWidgetItem(QString(show_the_tab.value("EXP").toString())));
            rowNum++;
        }
    }
    db.commit();
    db.close();
}
void MainWindow::on_Push_Del_Tab_clicked()
{
    db.open();
    QSqlDatabase::database().transaction();
    QSqlQuery delete_data(db);
    delete_data.prepare("DELETE FROM TABS WHERE S_No=" + ui->Choose_Del_Tab->text() + "");

    if (delete_data.exec())
    {
        QMessageBox::information(this, "Deleted", "Tab Data Deleted");
    }
    else
    {
        QMessageBox::warning(this, "Error", "Tab Data not Deleted");
    }

    QSqlDatabase::database().commit();
    db.close();
    ui->Choose_Del_Tab->setText("");
    MainWindow::on_See_Tabs_clicked();
}

void MainWindow::on_Admin_clicked()
{
    ui->User->hide();
    ui->Admin->hide();
    ui->Admin_Page->show();
}

void MainWindow::on_User_clicked()
{
    ui->User->hide();
    ui->Admin->hide();
    ui->User_Login_Frame->show();
}

void MainWindow::on_Add_Tablets_clicked()
{
    ui->add_tablets->show();
    ui->Add_Users_Page->hide();
    ui->See_Tablets->hide();
    ui->See_Users_Frame->hide();
    ui->Show_Admin_Info->hide();
    ui->Add_Admins_Page->hide();
    ui->Add_Cart->hide();
}

void MainWindow::on_Add_Users_Button_clicked()
{
    ui->Add_Users_Page->show();
    ui->add_tablets->hide();
    ui->See_Tablets->hide();
    ui->Show_Admin_Info->hide();
    ui->See_Users_Frame->hide();
    ui->Add_Admins_Page->hide();
    ui->Add_Cart->hide();
}

void MainWindow::reset_input_Fields()
{
    ui->S_No->setText("");
    ui->tab_Name->setText("");
    ui->tab_Price->setText("");
    ui->tab_stoke->setText("");
    ui->tab_Desc->setText("");
    ui->tab_MFG->setText("");
    ui->tab_EXP->setText("");
}

void MainWindow::on_Add_Admins_clicked()
{
    ui->Add_Admins_Page->show();
    ui->Add_Users_Page->hide();
    ui->Show_Admin_Info->hide();
    ui->add_tablets->hide();
    ui->See_Tablets->hide();
    ui->See_Users_Frame->hide();
    ui->Add_Cart->hide();
}

void MainWindow::on_back_to_login_clicked()
{
    ui->Admin->show();
    ui->Show_Admin_Info->hide();
    ui->User->show();
    ui->Admin_Page->hide();
    ui->User_Page->hide();
    ui->Admin_Portal->hide();
    ui->add_tablets->hide();
    ui->Add_Users_Page->hide();
    ui->User_Login_Frame->hide();
    ui->Add_Cart->hide();
}

void MainWindow::show_Admin_Portal()
{
    ui->Admin_Portal->show();
    ui->Run_Store->show();
    ui->User_Login_Frame->hide();
    ui->See_Tablets->show();
    ui->See_Tabs->show();
    ui->See_Users->show();
    ui->See_Users_Frame->hide();
    ui->Show_Admin_Info->hide();
    ui->Add_Users_Button->show();
    ui->Add_Admins->show();
    ui->See_Admins->show();
    ui->Add_Tablets->show();
    ui->Add_Cart->hide();
    ui->Admin_user_Edit->setText("");
    ui->Admin_Pass_Edit->setText("");
}

void MainWindow::show_User_Portal()
{
    ui->Admin_Portal->show();
    ui->See_Tablets->show();
    ui->See_Tabs->show();
    ui->Run_Store->show();
    ui->Add_Cart->hide();
    ui->User_Login_Frame->hide();
    ui->See_Users->hide();
    ui->Show_Admin_Info->hide();
    ui->Add_Users_Button->hide();
    ui->Add_Admins->hide();
    ui->See_Admins->hide();
    ui->Add_Tablets->hide();
    ui->Show_Admin_Info->hide();
    ui->Normal_User_Name->setText("");
    ui->Normal_user_Pass->setText("");
}

void MainWindow::on_About_Developer_clicked()
{
    QMessageBox aboutDev(QMessageBox::NoIcon, "About Developer", "Made by Abrar Ahmed Shahok (21BSCS-20)\n"
                                                                 "For More Info Vist : https://github.com/abrar-ahmed-21bscs20",
                         QMessageBox::Ok);
    QPixmap devPic(":/img/devPic.jpg");
    aboutDev.setIconPixmap(devPic.scaled(100, 100, Qt::KeepAspectRatio));
    aboutDev.exec();
}

void MainWindow::on_Push_Search_clicked()
{
    db.open();
    db.transaction();
    QSqlQuery search_tab(db);
    int rowNum = 0;
    search_tab.prepare("SELECT * FROM TABS WHERE Name = :Name");
    search_tab.bindValue(":Name", ui->Search_Tabs->text());
    if (search_tab.exec())
    {
        ui->show_Tab_in_Cart->setRowCount(search_tab.size());
        while (search_tab.next())
        {
            ui->show_Tab_in_Cart->setItem(rowNum, 0, new QTableWidgetItem(QString(search_tab.value("S_No").toString())));
            ui->show_Tab_in_Cart->setItem(rowNum, 1, new QTableWidgetItem(QString(search_tab.value("Name").toString())));
            ui->show_Tab_in_Cart->setItem(rowNum, 2, new QTableWidgetItem(QString(search_tab.value("Price").toString())));
            ui->show_Tab_in_Cart->setItem(rowNum, 3, new QTableWidgetItem(QString(search_tab.value("Stoke").toString())));
            ui->show_Tab_in_Cart->setItem(rowNum, 4, new QTableWidgetItem(QString(search_tab.value("Description").toString())));
            ui->show_Tab_in_Cart->setItem(rowNum, 5, new QTableWidgetItem(QString(search_tab.value("MFG").toString())));
            ui->show_Tab_in_Cart->setItem(rowNum, 6, new QTableWidgetItem(QString(search_tab.value("EXP").toString())));
            rowNum++;
        }
    }
    db.commit();
    db.close();
}

void MainWindow::Show_all_Tabs()
{
    db.open();
    db.transaction();
    QSqlQuery show_the_tab(db);
    int rowNum = 0;
    show_the_tab.prepare("SELECT * FROM TABS");
    if (show_the_tab.exec())
    {
        ui->show_Tab_in_Cart->setRowCount(show_the_tab.size());
        while (show_the_tab.next())
        {
            ui->show_Tab_in_Cart->setItem(rowNum, 0, new QTableWidgetItem(QString(show_the_tab.value("S_No").toString())));
            ui->show_Tab_in_Cart->setItem(rowNum, 1, new QTableWidgetItem(QString(show_the_tab.value("Name").toString())));
            ui->show_Tab_in_Cart->setItem(rowNum, 2, new QTableWidgetItem(QString(show_the_tab.value("Price").toString())));
            ui->show_Tab_in_Cart->setItem(rowNum, 3, new QTableWidgetItem(QString(show_the_tab.value("Stoke").toString())));
            ui->show_Tab_in_Cart->setItem(rowNum, 4, new QTableWidgetItem(QString(show_the_tab.value("Description").toString())));
            ui->show_Tab_in_Cart->setItem(rowNum, 5, new QTableWidgetItem(QString(show_the_tab.value("MFG").toString())));
            ui->show_Tab_in_Cart->setItem(rowNum, 6, new QTableWidgetItem(QString(show_the_tab.value("EXP").toString())));
            rowNum++;
        }
    }
    db.commit();
    db.close();
}

void MainWindow::on_Add_to_Cart_clicked()
{
}
void MainWindow::on_Run_Store_clicked()
{
    MainWindow::Show_all_Tabs();
    ui->Add_Admins_Page->hide();
    ui->Add_Users_Page->hide();
    ui->Show_Admin_Info->hide();
    ui->add_tablets->hide();
    ui->See_Tablets->hide();
    ui->See_Users_Frame->hide();
    ui->Add_Cart->show();
}

void MainWindow::on_Update_Stoke_clicked()
{
    db.open();
    db.transaction();
    QSqlQuery update_Stoke(db);
    update_Stoke.prepare("UPDATE TABS SET Stoke = Stoke + :tab_stoke WHERE Name = :Name");
    update_Stoke.bindValue(":tab_stoke", ui->input_Stoke->text().toDouble());
    update_Stoke.bindValue(":Name", ui->stoke_tab_Name->text());
    if (update_Stoke.exec())
    {
        db.commit();
        ui->stoke_tab_Name->setText("");
        ui->input_Stoke->setText("");
        QMessageBox::information(this, "Success", "Stoke Added");
        MainWindow::on_See_Tabs_clicked();
    }
    else
    {
        db.rollback();
    }
    db.close();
}

void MainWindow::on_See_Cart_Button_clicked()
{
    ui->See_Cart->show();
    ui->See_Tablets->hide();
    ui->Add_Cart->hide();
    ui->Add_Users_Page->hide();
    ui->add_tablets->hide();
    ui->See_Users_Frame->hide();
    ui->Show_Admin_Info->hide();
    ui->Add_Admins_Page->hide();
    db.open();
    db.transaction();
    QSqlQuery cartQuery(db);
    cartQuery.prepare("SELECT * FROM BILL");
    if (cartQuery.exec())
    {
        int rowNum = 0;
        ui->cart_Table->setRowCount(cartQuery.size());
        while (cartQuery.next())
        {
            ui->cart_Table->setItem(rowNum, 0, new QTableWidgetItem(cartQuery.value("Name").toString()));
            ui->cart_Table->setItem(rowNum, 1, new QTableWidgetItem(cartQuery.value("Quantity").toString()));
            ui->cart_Table->setItem(rowNum, 2, new QTableWidgetItem(cartQuery.value("Price").toString()));
            ui->cart_Table->setItem(rowNum, 3, new QTableWidgetItem(cartQuery.value("Total Bill").toString()));
            ui->cart_Table->setItem(rowNum, 4, new QTableWidgetItem(cartQuery.value("Data/Time").toString()));
            rowNum++;
        }
    }
    db.commit();
    db.close();
}
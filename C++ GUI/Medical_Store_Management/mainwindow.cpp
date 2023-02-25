#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->see_tabs_table->horizontalHeader()->setStretchLastSection(true);
    ui->Admin_Table->horizontalHeader()->setStretchLastSection(true);
    ui->User_Table->horizontalHeader()->setStretchLastSection(true);
    ui->see_tabs_table_run->horizontalHeader()->setStretchLastSection(true);
    ui->see_cart_Table->horizontalHeader()->setStretchLastSection(true);
    ui->Medical_Store->setCurrentIndex(0);

    // Connecting Database
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("21bscs20");
    db.setDatabaseName("Medical_Store");

    // List Items of Table TABS
    db.open();
    db.transaction();
    // Query Executed to Display all Content in Table TABS to Display in QTABLE WIDGET
    QSqlQuery show_tab(db);
    show_tab.prepare("SELECT * FROM TABS");
    if (show_tab.exec())
    {
        while (show_tab.next())
        {
            ui->cart_tab_name->addItem(QString(show_tab.value("Name").toString()));
            ui->update_stoke_name_input->addItem(QString(show_tab.value("Name").toString()));
            ui->update_price_name_input->addItem(QString(show_tab.value("Name").toString()));
        }
    }
    db.commit();
    db.close();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_admin_login_button_clicked()
{
    // Database Opened
    db.open();
    db.transaction();

    // Query Executed to insert data into Table ADMINS
    QSqlQuery query(db);
    query.prepare("SELECT username, password FROM ADMINS WHERE username = :username AND password = :password");
    query.bindValue(":username", ui->admin_name_input->text());
    query.bindValue(":password", ui->admin_passw_input->text());

    // On Success This will be Executed
    if (query.exec() && query.next())
    {
        QMessageBox::information(this, "Success", "Login Successful");
        ui->Medical_Store->setCurrentIndex(3);
        MainWindow::on_see_tab_button_clicked();
        ui->admin_passw_input->setText("");
        ui->admin_name_input->setText("");
    }

    // This will be Executed if Pass or Username is Incorrect
    else
    {
        QMessageBox::warning(this, "Error", "Username or Password Incorrect");
        ui->admin_passw_input->setText("");
    }

    // Commit the transaction, close the database connection, and handle errors
    db.commit();
    db.close();
}

void MainWindow::on_see_tab_button_clicked()
{
    ui->store_portal_pages->setCurrentIndex(0);

    // Database Opened
    db.open();
    db.transaction();

    // Query Executed to Display all Content in Table TABS to Display in QTABLE WIDGET
    QSqlQuery show_tab(db);
    int rowNum = 0;
    show_tab.prepare("SELECT * FROM TABS");
    if (show_tab.exec())
    {
        ui->see_tabs_table->setRowCount(show_tab.size());
        while (show_tab.next())
        {
            ui->see_tabs_table->setItem(rowNum, 0, new QTableWidgetItem("   " + QString(show_tab.value("S_No").toString())));
            ui->see_tabs_table->setItem(rowNum, 1, new QTableWidgetItem("   " + QString(show_tab.value("Name").toString())));
            ui->see_tabs_table->setItem(rowNum, 2, new QTableWidgetItem("   " + QString(show_tab.value("Price").toString())));
            ui->see_tabs_table->setItem(rowNum, 3, new QTableWidgetItem("   " + QString(show_tab.value("Stoke").toString())));
            ui->see_tabs_table->setItem(rowNum, 4, new QTableWidgetItem("   " + QString(show_tab.value("MFG").toString())));
            ui->see_tabs_table->setItem(rowNum, 5, new QTableWidgetItem("   " + QString(show_tab.value("EXP").toString())));
            ui->see_tabs_table->setItem(rowNum, 6, new QTableWidgetItem("   " + QString(show_tab.value("Description").toString())));
            rowNum++;
        }
    }

    // Commit the transaction, close the database connection, and handle errors
    if (!db.commit())
    {
        QMessageBox::critical(this, "Database Error", "Failed to commit transaction");
    }
    db.close();
}

void MainWindow::on_add_Tab_Button_clicked()
{
    if (ui->tab_Name_Input->text().isEmpty() || ui->tab_Price_Input->text().isEmpty() || ui->tab_Stoke_input->text().isEmpty()
      || ui->tab_MFG_Input->text().isEmpty() || ui->tab_EXP_Input->text().isEmpty()   || ui->tab_Description_Input->text().isEmpty())
    {
        QMessageBox::warning(this, "Error", "Please Fill all input Fields");
        return;
    }

    else
    {
        db.open();
        db.transaction();
        QSqlQuery add_tabs(db);
        add_tabs.prepare("INSERT INTO TABS (Name,Price,Stoke,MFG,EXP,Description)"
                         "VALUES (:Name,:Price,:Stoke,:MFG,:EXP,:Description)");
        add_tabs.bindValue(":Name", ui->tab_Name_Input->text());
        add_tabs.bindValue(":Price", ui->tab_Price_Input->text());
        add_tabs.bindValue(":Stoke", ui->tab_Stoke_input->text());
        add_tabs.bindValue(":MFG", ui->tab_MFG_Input->text());
        add_tabs.bindValue(":EXP", ui->tab_EXP_Input->text());
        add_tabs.bindValue(":Description", ui->tab_Description_Input->text());
        if (add_tabs.exec())
        {
            QMessageBox::information(this, "Success", "Tab Data Inserted");
            ui->cart_tab_name->addItem(ui->tab_Name_Input->text());
            ui->update_stoke_name_input->addItem(ui->tab_Name_Input->text());
            ui->update_price_name_input->addItem(ui->tab_Name_Input->text());
            ui->tab_Name_Input->setText("");
            ui->tab_Price_Input->setText("");
            ui->tab_Stoke_input->setText("");
            ui->tab_MFG_Input->setText("");
            ui->tab_EXP_Input->setText("");
            ui->tab_Description_Input->setText("");
        }
        else
        {
            QMessageBox::warning(this, "Error", "Data Not Inserted");
        }

        // Commit the transaction, close the database connection, and handle errors
        if (!db.commit())
        {
            QMessageBox::critical(this, "Database Error", "Failed to commit transaction");
        }
        db.close();
    }
}

void MainWindow::on_See_Users_Button_clicked()
{
    ui->store_portal_pages->setCurrentIndex(2);

    // Show Admins Info
    db.open();
    db.transaction();
    QSqlQuery show_admin(db);
    int rowNum = 0;
    show_admin.prepare("SELECT * FROM ADMINS");

    if (show_admin.exec())
    {
        ui->Admin_Table->setRowCount(show_admin.size());
        while (show_admin.next())
        {
            ui->Admin_Table->setItem(rowNum, 0, new QTableWidgetItem("   " + QString(show_admin.value("ID").toString())));
            ui->Admin_Table->setItem(rowNum, 1, new QTableWidgetItem("   " + QString(show_admin.value("UserName").toString())));
            ui->Admin_Table->setItem(rowNum, 2, new QTableWidgetItem("   " + QString(show_admin.value("Password").toString())));
            ui->Admin_Table->setItem(rowNum, 3, new QTableWidgetItem("\t\t\t            Admin of Store"));
            rowNum++;
        }
    }

    // Commit the transaction, close the database connection, and handle errors
    if (!db.commit())
    {
        QMessageBox::critical(this, "Database Error", "Failed to commit transaction");
    }
    db.close();

    // Show Normal Users Info
    db.open();
    db.transaction();
    QSqlQuery show_users(db);
    rowNum = 0;
    show_users.prepare("SELECT * FROM USERS");

    if (show_users.exec())
    {
        ui->User_Table->setRowCount(show_users.size());
        while (show_users.next())
        {
            ui->User_Table->setItem(rowNum, 0, new QTableWidgetItem("   " + QString(show_users.value("ID").toString())));
            ui->User_Table->setItem(rowNum, 1, new QTableWidgetItem("   " + QString(show_users.value("UserName").toString())));
            ui->User_Table->setItem(rowNum, 2, new QTableWidgetItem("   " + QString(show_users.value("Password").toString())));
            ui->User_Table->setItem(rowNum, 3, new QTableWidgetItem("\t\t\t            Worker of Store"));
            rowNum++;
        }
    }

    // Commit the transaction, close the database connection, and handle errors
    if (!db.commit())
    {
        QMessageBox::critical(this, "Database Error", "Failed to commit transaction");
    }
    db.close();
}

void MainWindow::on_add_admin_info_button_clicked()
{
    db.open();
    QString username = ui->add_admin_name->text();
    QString password = ui->add_admin_pass->text();

    if (username.isEmpty() || password.isEmpty())
    {
        QMessageBox::warning(this, "Error", "Please provide admin username and password");
    }
    else
    {
        db.transaction();
        QSqlQuery insert_admin(db);
        insert_admin.prepare("INSERT INTO ADMINS(username,password)"
                             "VALUES (:username,:password)");
        insert_admin.bindValue(":username", ui->add_admin_name->text());
        insert_admin.bindValue(":password", ui->add_admin_pass->text());

        if (insert_admin.exec())
        {
            QMessageBox::information(this, "Success", "Admin Data Inserted");
            ui->add_admin_name->setText("");
            ui->add_admin_pass->setText("");
        }
        else
        {
            QMessageBox::warning(this, "Error", "Admin Data Not Inserted");
            ui->add_admin_pass->setText("");
        }

        // Commit the transaction, close the database connection, and handle errors
        if (!db.commit())
        {
            QMessageBox::critical(this, "Database Error", "Failed to commit transaction");
        }
    }
    db.close();
}

void MainWindow::on_add_normal_user_info_button_clicked()
{
    db.open();
    QString username = ui->add_normal_user_name->text();
    QString password = ui->add_normal_user_pass->text();

    if (username.isEmpty() || password.isEmpty())
    {
        QMessageBox::warning(this, "Error", "Please fill in both username and password fields.");
    }

    else
    {
        db.transaction();
        QSqlQuery insert_user(db);
        insert_user.prepare("INSERT INTO USERS(username,password)"
                            "VALUES (:username,:password)");
        insert_user.bindValue(":username", username);
        insert_user.bindValue(":password", password);

        if (insert_user.exec() && insert_user.numRowsAffected() > 0)
        {
            QMessageBox::information(this, "Success", "User Data Inserted");
            ui->add_normal_user_name->setText("");
            ui->add_normal_user_pass->setText("");
        }
        else
        {
            QMessageBox::warning(this, "Error", "User Data Not Inserted");
            ui->add_normal_user_pass->setText("");
        }
    }

    // Commit the transaction, close the database connection, and handle errors
    if (!db.commit())
    {
        QMessageBox::critical(this, "Database Error", "Failed to commit transaction");
    }
    db.close();
}

void MainWindow::on_admin_del_button_clicked()
{
    // Start the transaction and prepare the query
    if (!db.open())
    {
        QMessageBox::critical(this, "Database Error", db.lastError().text());
        return;
    }
    QSqlQuery query(db);
    if (!query.prepare("DELETE FROM ADMINS WHERE username=:username OR id=:id"))
    {
        QMessageBox::critical(this, "Database Error", query.lastError().text());
        db.rollback();
        db.close();
        return;
    }
    query.bindValue(":username", ui->del_admin_name_input->text());
    query.bindValue(":id", ui->del_admin_name_input->text().toInt());

    // Check for empty input and execute the query
    if (ui->del_admin_name_input->text().isEmpty())
    {
        QMessageBox::warning(this, "Error", "Please enter a username or ID to delete");
    }
    else if (query.exec() && query.numRowsAffected() > 0)
    {
        QMessageBox::information(this, "Success", "Admin info deleted");
        MainWindow::on_See_Users_Button_clicked();
        ui->del_admin_name_input->setText("");
    }
    else
    {
        QMessageBox::warning(this, "Error", "No matching admin found");
        ui->del_admin_name_input->setText("");
    }

    // Commit the transaction, close the database connection
    db.commit();
    db.close();
}

void MainWindow::on_del_user_button_clicked()
{
    // Start the transaction and prepare the query
    if (!db.open())
    {
        QMessageBox::critical(this, "Database Error", db.lastError().text());
        return;
    }

    QSqlQuery query(db);
    if (!query.prepare("DELETE FROM ADMINS WHERE username=:username OR id=:id"))
    {
        QMessageBox::critical(this, "Database Error", query.lastError().text());
        db.rollback();
        db.close();
        return;
    }

    query.bindValue(":username", ui->del_user_name_input->text());
    query.bindValue(":id", ui->del_user_name_input->text().toInt());

    // Check for empty input and execute the query
    if (ui->del_user_name_input->text().isEmpty())
    {
        QMessageBox::warning(this, "Error", "Please enter a username or ID to delete");
    }

    else if (query.exec() && query.numRowsAffected() > 0)
    {
        QMessageBox::information(this, "Success", "User info deleted");
        MainWindow::on_See_Users_Button_clicked();
        ui->del_user_name_input->setText("");
    }

    else
    {
        QMessageBox::warning(this, "Error", "No Matching User found");
        ui->del_user_name_input->setText("");
    }

    // Commit the transaction, close the database connection
    db.commit();
    db.close();
}

void MainWindow::on_search_tab_input_textChanged()
{
    // Open database connection and start transaction
    db.open();
    db.transaction();

    // Prepare the SELECT statement with LIKE command and bind the search term
    QSqlQuery search_tab(db);
    search_tab.prepare("SELECT * FROM TABS WHERE Name LIKE :Name");
    search_tab.bindValue(":Name", "%" + ui->search_tab_input->text() + "%");

    // Clear the table and row counter
    ui->see_tabs_table->clearContents();
    int rowNum = 0;

    // Execute the search query and populate the table with results
    if (search_tab.exec())
    {
        while (search_tab.next())
        {
            ui->see_tabs_table->setItem(rowNum, 0, new QTableWidgetItem("   " + QString(search_tab.value("S_No").toString())));
            ui->see_tabs_table->setItem(rowNum, 1, new QTableWidgetItem("   " + QString(search_tab.value("Name").toString())));
            ui->see_tabs_table->setItem(rowNum, 2, new QTableWidgetItem("   " + QString(search_tab.value("Price").toString())));
            ui->see_tabs_table->setItem(rowNum, 3, new QTableWidgetItem("   " + QString(search_tab.value("Stoke").toString())));
            ui->see_tabs_table->setItem(rowNum, 4, new QTableWidgetItem("   " + QString(search_tab.value("MFG").toString())));
            ui->see_tabs_table->setItem(rowNum, 5, new QTableWidgetItem("   " + QString(search_tab.value("EXP").toString())));
            ui->see_tabs_table->setItem(rowNum, 6, new QTableWidgetItem("   " + QString(search_tab.value("Description").toString())));
            rowNum++;
        }
    }

    // Commit the transaction, close the database connection, and handle errors
    if (!db.commit())
    {
        QMessageBox::critical(this, "Database Error", "Failed to commit transaction");
    }
    db.close();
}

void MainWindow::on_del_tab_button_clicked()
{
    // Start the transaction and prepare the query
    if (!db.open())
    {
        QMessageBox::critical(this, "Database Error", db.lastError().text());
        return;
    }

    QSqlQuery query(db);
    if (!query.prepare("DELETE FROM TABS WHERE S_no=:id"))
    {
        QMessageBox::critical(this, "Database Error", query.lastError().text());
        db.rollback();
        db.close();
        return;
    }

    query.bindValue(":id", ui->del_tab_input->text().toInt());

    // Check for empty input and execute the query
    if (ui->del_tab_input->text().isEmpty())
    {
        QMessageBox::warning(this, "Error", "Please Enter SNo to delete");
    }

    else if (query.exec() && query.numRowsAffected() > 0)
    {
        QMessageBox::information(this, "Success", "Tab info deleted");
        MainWindow::on_see_tab_button_clicked();
        ui->del_tab_input->setText("");
    }

    else
    {
        QMessageBox::warning(this, "Error", "No Tab found");
        ui->del_tab_input->setText("");
    }

    // Commit the transaction, close the database connection
    db.commit();
    db.close();
}

void MainWindow::on_update_stoke_button_clicked()
{
    db.open();
    db.transaction();
    QSqlQuery update_Stoke(db);
    update_Stoke.prepare("UPDATE TABS SET Stoke = Stoke + :tab_stoke WHERE Name = :Name");
    update_Stoke.bindValue(":tab_stoke", ui->update_stoke_quantity->text().toDouble());
    update_Stoke.bindValue(":Name", ui->update_stoke_name_input->currentText());

    if (ui->update_stoke_quantity->text().toDouble() <= 0)
    {
        QMessageBox::warning(this, "Error", "Stoke Cannot be <= 0");
        return;
    }

    if (ui->update_stoke_quantity->text().isEmpty())
    {
        QMessageBox::warning(this, "Error", "Please Enter Quantity to Update Stoke");
        return;
    }

    if (update_Stoke.exec() && update_Stoke.numRowsAffected() > 0)
    {
        db.commit();
        ui->update_stoke_quantity->setText("");
        QMessageBox::information(this, "Success", "Stoke Added");
        MainWindow::on_see_tab_button_clicked();
    }
    else
    {
        QMessageBox::warning(this, "Error", "Stoke Not Added");
        db.rollback();
    }
    db.close();
}

void MainWindow::on_update_price_button_clicked()
{
    db.open();
    db.transaction();
    QSqlQuery update_price(db);
    update_price.prepare("UPDATE TABS SET Price = :tab_price WHERE Name = :Name");
    update_price.bindValue(":tab_price", ui->new_price_input->text().toDouble());
    update_price.bindValue(":Name", ui->update_price_name_input->currentText());

    if (ui->new_price_input->text().toDouble() <= 0)
    {
        QMessageBox::warning(this, "Error", "Stoke Cannot be <= 0");
        return;
    }

    if (ui->new_price_input->text().isEmpty())
    {
        QMessageBox::warning(this, "Error", "Please Enter Tab Name and New Price to Update Price");
        return;
    }

    else if (update_price.exec() && update_price.numRowsAffected() > 0)
    {
        db.commit();
        ui->new_price_input->setText("");
        QMessageBox::information(this, "Success", "Price Updated");
        MainWindow::on_see_tab_button_clicked();
    }

    else
    {
        QMessageBox::warning(this, "Error", "Price Not Updated");
        db.rollback();
    }

    db.commit();
    db.close();
}

void MainWindow::on_add_cart_page_button_clicked()
{
    ui->run_store_features->setCurrentIndex(0);

    // Database Opened
    db.open();
    db.transaction();

    // Query Executed to Display all Content in Table TABS to Display in QTABLE WIDGET
    QSqlQuery show_tab(db);
    int rowNum = 0;
    show_tab.prepare("SELECT * FROM TABS");
    if (show_tab.exec())
    {
        ui->see_tabs_table_run->setRowCount(show_tab.size());
        while (show_tab.next())
        {
            ui->see_tabs_table_run->setItem(rowNum, 0, new QTableWidgetItem("   " + QString(show_tab.value("S_No").toString())));
            ui->see_tabs_table_run->setItem(rowNum, 1, new QTableWidgetItem("   " + QString(show_tab.value("Name").toString())));
            ui->see_tabs_table_run->setItem(rowNum, 2, new QTableWidgetItem("   " + QString(show_tab.value("Price").toString())));
            ui->see_tabs_table_run->setItem(rowNum, 3, new QTableWidgetItem("   " + QString(show_tab.value("Stoke").toString())));
            ui->see_tabs_table_run->setItem(rowNum, 4, new QTableWidgetItem("   " + QString(show_tab.value("MFG").toString())));
            ui->see_tabs_table_run->setItem(rowNum, 5, new QTableWidgetItem("   " + QString(show_tab.value("EXP").toString())));
            ui->see_tabs_table_run->setItem(rowNum, 6, new QTableWidgetItem("   " + QString(show_tab.value("Description").toString())));
            rowNum++;
        }
    }

    // Commit the transaction, close the database connection, and handle errors
    if (!db.commit())
    {
        QMessageBox::critical(this, "Database Error", "Failed to commit transaction");
    }
    db.close();
}

void MainWindow::on_user_login_button_clicked()
{

    db.open();
    db.transaction();
    QSqlQuery user_login(db);
    user_login.prepare("SELECT username, password FROM USERS WHERE username = :username AND password = :password");
    user_login.bindValue(":username", ui->user_input->text());
    user_login.bindValue(":password", ui->user_pass_input->text());

    if (user_login.exec() && user_login.next())
    {
        QMessageBox::information(this, "Success", "Login Successful");
        ui->Medical_Store->setCurrentIndex(4);
        ui->run_store_features->setCurrentIndex(0);
        MainWindow::on_add_cart_page_button_clicked();
        ui->user_input->setText("");
        ui->user_pass_input->setText("");
    }

    else
    {
        QMessageBox::warning(this, "Error", "Username or Password Incorrect");
        ui->user_pass_input->setText("");
    }

    db.commit();
    db.close();
}

void MainWindow::on_add_to_cart_button_clicked()
{
    db.open();
    db.transaction();

    QSqlQuery cart_item(db);
    cart_item.prepare("SELECT Price FROM TABS WHERE Name = :Name");
    cart_item.bindValue(":Name", ui->cart_tab_name->currentText());
    double price = 0.0;

    if (cart_item.exec() && cart_item.next())
    {
        price = cart_item.value(0).toDouble();
    }

    else
    {
        QMessageBox::critical(this, "Database Error", "Failed to fetch price from database");
        return;
    }

    // Calculate total price based on quantity entered by user
    double quantity = ui->cart_tab_quantity->text().toDouble();
    double total = price * quantity;

    // Decrement stock quantity of the specified tab
    QSqlQuery dec_Stoke(db);
    dec_Stoke.prepare("UPDATE TABS SET Stoke = Stoke - :tab_quantity WHERE Name = :Name");
    dec_Stoke.bindValue(":tab_quantity", ui->cart_tab_quantity->text().toDouble());
    dec_Stoke.bindValue(":Name", ui->cart_tab_name->currentText());

    if (dec_Stoke.exec() && dec_Stoke.numRowsAffected() > 0)
    {
        // Inserting into Table BILL
        QSqlQuery add_tabs(db);
        add_tabs.prepare("INSERT INTO BILL (Name,Quantity,Price,Total_Bill)"
                         "VALUES (:Name,:Quantity,:Price,:Total_Bill)");
        add_tabs.bindValue(":Name", ui->cart_tab_name->currentText());
        add_tabs.bindValue(":Quantity", ui->cart_tab_quantity->text());
        add_tabs.bindValue(":Price", price);
        add_tabs.bindValue(":Total_Bill", total);

        if (add_tabs.exec() && add_tabs.numRowsAffected() > 0)
        {
            QMessageBox::information(this, "Success", QString("Total Bill : %1 Rs  Added to Cart").arg(total));
            ui->cart_tab_quantity->setText("");
        }

        else
        {
            QMessageBox::warning(this, "Error", "Data Not Inserted");
        }
    }
    // Commit the transaction, close the database connection, and handle errors
    if (!db.commit())
    {
        QMessageBox::critical(this, "Database Error", "Failed to commit transaction");
    }
    db.close();

    MainWindow::on_add_cart_page_button_clicked();
}

void MainWindow::on_See_Cart_Page_Button_clicked()
{
    ui->run_store_features->setCurrentIndex(1);

    // Database Opened
    db.open();
    db.transaction();

    // Query Executed to Display all Content in Table TABS to Display in QTABLE WIDGET
    QSqlQuery show_cart(db);
    int rowNum = 0;
    show_cart.prepare("SELECT * FROM BILL");
    if (show_cart.exec())
    {
        ui->see_cart_Table->setRowCount(show_cart.size());
        while (show_cart.next())
        {
            ui->see_cart_Table->setItem(rowNum, 0, new QTableWidgetItem("   " + QString(show_cart.value("Name").toString())));
            ui->see_cart_Table->setItem(rowNum, 1, new QTableWidgetItem("   " + QString(show_cart.value("Quantity").toString())));
            ui->see_cart_Table->setItem(rowNum, 2, new QTableWidgetItem("   " + QString(show_cart.value("Price").toString())));
            ui->see_cart_Table->setItem(rowNum, 3, new QTableWidgetItem("   " + QString(show_cart.value("Total_Bill").toString())));
            ui->see_cart_Table->setItem(rowNum, 4, new QTableWidgetItem("   " + QString(show_cart.value("DateTime").toString())));
            rowNum++;
        }
    }

    // Commit the transaction, close the database connection, and handle errors
    if (!db.commit())
    {
        QMessageBox::critical(this, "Database Error", "Failed to commit transaction");
    }
    db.close();
}

void MainWindow::on_cart_tab_search_textChanged()
{
    // Open database connection and start transaction
    db.open();
    db.transaction();

    // Prepare the SELECT statement with LIKE command and bind the search term
    QSqlQuery search_tab(db);
    search_tab.prepare("SELECT * FROM TABS WHERE Name LIKE :Name");
    search_tab.bindValue(":Name", "%" + ui->cart_tab_search->text() + "%");

    // Clear the table and row counter
    ui->see_tabs_table_run->clearContents();
    int rowNum = 0;

    // Execute the search query and populate the table with results
    if (search_tab.exec())
    {
        while (search_tab.next())
        {
            ui->see_tabs_table_run->setItem(rowNum, 0, new QTableWidgetItem("   " + QString(search_tab.value("S_No").toString())));
            ui->see_tabs_table_run->setItem(rowNum, 1, new QTableWidgetItem("   " + QString(search_tab.value("Name").toString())));
            ui->see_tabs_table_run->setItem(rowNum, 2, new QTableWidgetItem("   " + QString(search_tab.value("Price").toString())));
            ui->see_tabs_table_run->setItem(rowNum, 3, new QTableWidgetItem("   " + QString(search_tab.value("Stoke").toString())));
            ui->see_tabs_table_run->setItem(rowNum, 4, new QTableWidgetItem("   " + QString(search_tab.value("MFG").toString())));
            ui->see_tabs_table_run->setItem(rowNum, 5, new QTableWidgetItem("   " + QString(search_tab.value("EXP").toString())));
            ui->see_tabs_table_run->setItem(rowNum, 6, new QTableWidgetItem("   " + QString(search_tab.value("Description").toString())));
            rowNum++;
        }
    }

    // Commit the transaction, close the database connection, and handle errors
    if (!db.commit())
    {
        QMessageBox::critical(this, "Database Error", "Failed to commit transaction");
    }
    db.close();
}

void MainWindow::on_about_dev_clicked()
{
    QMessageBox aboutDev(QMessageBox::NoIcon, "About Developer", "Made by Abrar Ahmed Shahok (21BSCS-20)\n"
                                                                 "For More Info Vist : https://github.com/abrar-ahmed-21bscs20",
                         QMessageBox::Ok);
    QPixmap devPic(":/img/devPic.png");
    aboutDev.setIconPixmap(devPic.scaled(100, 100, Qt::KeepAspectRatio));
    aboutDev.exec();
}

void MainWindow::on_admin_button_clicked()
{
    ui->Medical_Store->setCurrentIndex(1);
}

void MainWindow::on_user_button_clicked()
{
    ui->Medical_Store->setCurrentIndex(2);
}

void MainWindow::on_add_delete_tab_clicked()
{
    ui->store_portal_pages->setCurrentIndex(1);
}

void MainWindow::on_back_clicked()
{
    ui->Medical_Store->setCurrentIndex(0);
}

void MainWindow::on_back_2_clicked()
{
    ui->Medical_Store->setCurrentIndex(0);
}

void MainWindow::on_logout_clicked()
{
    ui->Medical_Store->setCurrentIndex(0);
}

void MainWindow::on_add_del_users_clicked()
{
    ui->store_portal_pages->setCurrentIndex(3);
}

void MainWindow::on_close_store_clicked()
{
    ui->Medical_Store->setCurrentIndex(0);
}

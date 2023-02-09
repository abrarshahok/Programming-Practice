/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *title;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *Admin;
    QPushButton *User;
    QFrame *Admin_Page;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *User_Name;
    QLabel *Password;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *Admin_user_Edit;
    QLineEdit *Admin_Pass_Edit;
    QPushButton *Admin_Login;
    QFrame *Admin_Portal;
    QFrame *add_tablets;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *label_1;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *S_No;
    QLineEdit *tab_Name;
    QLineEdit *tab_Price;
    QLineEdit *tab_stoke;
    QLineEdit *tab_Desc;
    QLineEdit *tab_MFG;
    QLineEdit *tab_EXP;
    QPushButton *Add_Tab_Info;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Add_Tablets;
    QPushButton *See_Tabs;
    QPushButton *Add_Users_Button;
    QPushButton *Add_Admins;
    QPushButton *See_Admins;
    QPushButton *See_Users;
    QFrame *Add_Users_Page;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_16;
    QLabel *add_User_2;
    QLabel *add_Pass_2;
    QVBoxLayout *verticalLayout_17;
    QLineEdit *Add_User_Edit;
    QLineEdit *Add_Pass_Edit;
    QPushButton *Submit_User_Info;
    QFrame *See_Tablets;
    QVBoxLayout *verticalLayout_18;
    QTableWidget *show_Tab;
    QLabel *del_Tab;
    QLineEdit *Choose_Del_Tab;
    QPushButton *Push_Del_Tab;
    QFrame *See_Users_Frame;
    QVBoxLayout *verticalLayout_28;
    QVBoxLayout *verticalLayout_13;
    QTableWidget *Show_Users;
    QLabel *label_8;
    QLineEdit *del_User_Edit;
    QPushButton *pushDel_User;
    QFrame *User_Page;
    QFrame *Add_Admins_Page;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_23;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_24;
    QLabel *add_User_3;
    QLabel *add_Pass_3;
    QVBoxLayout *verticalLayout_25;
    QLineEdit *Admin_User_Save;
    QLineEdit *Admin_Pass_Save;
    QPushButton *Submit_Admin_Info;
    QPushButton *back_to_login;
    QPushButton *About_Developer;
    QFrame *User_Login_Frame;
    QVBoxLayout *verticalLayout_22;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_9;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_20;
    QLineEdit *Normal_User_Name;
    QLineEdit *Normal_user_Pass;
    QPushButton *Normal_User_Login;
    QFrame *Show_Admin_Info;
    QVBoxLayout *verticalLayout_27;
    QVBoxLayout *verticalLayout_26;
    QTableWidget *Admin_Tab;
    QLabel *label_11;
    QLineEdit *del_Admin_Edit;
    QPushButton *push_Del_Admin;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(763, 550);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(763, 550));
        MainWindow->setMaximumSize(QSize(763, 550));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/pharmacy.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        title = new QLabel(centralwidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(80, 0, 611, 81));
        title->setStyleSheet(QString::fromUtf8("font: 26pt \"Fira Sans\";"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(260, 140, 211, 86));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Admin = new QPushButton(layoutWidget);
        Admin->setObjectName(QString::fromUtf8("Admin"));

        verticalLayout->addWidget(Admin);

        User = new QPushButton(layoutWidget);
        User->setObjectName(QString::fromUtf8("User"));

        verticalLayout->addWidget(User);

        Admin_Page = new QFrame(centralwidget);
        Admin_Page->setObjectName(QString::fromUtf8("Admin_Page"));
        Admin_Page->setEnabled(true);
        Admin_Page->setGeometry(QRect(140, 120, 451, 111));
        Admin_Page->setFrameShape(QFrame::StyledPanel);
        Admin_Page->setFrameShadow(QFrame::Raised);
        verticalLayout_12 = new QVBoxLayout(Admin_Page);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        User_Name = new QLabel(Admin_Page);
        User_Name->setObjectName(QString::fromUtf8("User_Name"));

        verticalLayout_5->addWidget(User_Name);

        Password = new QLabel(Admin_Page);
        Password->setObjectName(QString::fromUtf8("Password"));

        verticalLayout_5->addWidget(Password);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        Admin_user_Edit = new QLineEdit(Admin_Page);
        Admin_user_Edit->setObjectName(QString::fromUtf8("Admin_user_Edit"));
        Admin_user_Edit->setStyleSheet(QString::fromUtf8("border-width : 1px;\n"
"	border-style : solid;\n"
"	border-colorr : black;"));

        verticalLayout_6->addWidget(Admin_user_Edit);

        Admin_Pass_Edit = new QLineEdit(Admin_Page);
        Admin_Pass_Edit->setObjectName(QString::fromUtf8("Admin_Pass_Edit"));
        Admin_Pass_Edit->setStyleSheet(QString::fromUtf8("border-width : 1px;\n"
"	border-style : solid;\n"
"	border-colorr : black;"));
        Admin_Pass_Edit->setEchoMode(QLineEdit::Password);

        verticalLayout_6->addWidget(Admin_Pass_Edit);


        horizontalLayout_2->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout_2);

        Admin_Login = new QPushButton(Admin_Page);
        Admin_Login->setObjectName(QString::fromUtf8("Admin_Login"));

        verticalLayout_7->addWidget(Admin_Login);


        verticalLayout_12->addLayout(verticalLayout_7);

        Admin_Portal = new QFrame(centralwidget);
        Admin_Portal->setObjectName(QString::fromUtf8("Admin_Portal"));
        Admin_Portal->setEnabled(true);
        Admin_Portal->setGeometry(QRect(10, 80, 741, 431));
        Admin_Portal->setFrameShape(QFrame::StyledPanel);
        Admin_Portal->setFrameShadow(QFrame::Raised);
        add_tablets = new QFrame(Admin_Portal);
        add_tablets->setObjectName(QString::fromUtf8("add_tablets"));
        add_tablets->setEnabled(true);
        add_tablets->setGeometry(QRect(130, 10, 571, 361));
        add_tablets->setFrameShape(QFrame::StyledPanel);
        add_tablets->setFrameShadow(QFrame::Raised);
        verticalLayout_14 = new QVBoxLayout(add_tablets);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(add_tablets);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        label_1 = new QLabel(add_tablets);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        verticalLayout_3->addWidget(label_1);

        label_7 = new QLabel(add_tablets);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_3->addWidget(label_7);

        label_2 = new QLabel(add_tablets);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        label_4 = new QLabel(add_tablets);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(add_tablets);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_3->addWidget(label_5);

        label_6 = new QLabel(add_tablets);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_3->addWidget(label_6);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        S_No = new QLineEdit(add_tablets);
        S_No->setObjectName(QString::fromUtf8("S_No"));
        S_No->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_4->addWidget(S_No);

        tab_Name = new QLineEdit(add_tablets);
        tab_Name->setObjectName(QString::fromUtf8("tab_Name"));
        tab_Name->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_4->addWidget(tab_Name);

        tab_Price = new QLineEdit(add_tablets);
        tab_Price->setObjectName(QString::fromUtf8("tab_Price"));
        tab_Price->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_4->addWidget(tab_Price);

        tab_stoke = new QLineEdit(add_tablets);
        tab_stoke->setObjectName(QString::fromUtf8("tab_stoke"));
        tab_stoke->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_4->addWidget(tab_stoke);

        tab_Desc = new QLineEdit(add_tablets);
        tab_Desc->setObjectName(QString::fromUtf8("tab_Desc"));
        tab_Desc->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_4->addWidget(tab_Desc);

        tab_MFG = new QLineEdit(add_tablets);
        tab_MFG->setObjectName(QString::fromUtf8("tab_MFG"));
        tab_MFG->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_4->addWidget(tab_MFG);

        tab_EXP = new QLineEdit(add_tablets);
        tab_EXP->setObjectName(QString::fromUtf8("tab_EXP"));
        tab_EXP->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_4->addWidget(tab_EXP);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout_11->addLayout(horizontalLayout);

        Add_Tab_Info = new QPushButton(add_tablets);
        Add_Tab_Info->setObjectName(QString::fromUtf8("Add_Tab_Info"));

        verticalLayout_11->addWidget(Add_Tab_Info);


        verticalLayout_14->addLayout(verticalLayout_11);

        layoutWidget1 = new QWidget(Admin_Portal);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(11, 40, 100, 176));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Add_Tablets = new QPushButton(layoutWidget1);
        Add_Tablets->setObjectName(QString::fromUtf8("Add_Tablets"));

        verticalLayout_2->addWidget(Add_Tablets);

        See_Tabs = new QPushButton(layoutWidget1);
        See_Tabs->setObjectName(QString::fromUtf8("See_Tabs"));
        See_Tabs->setEnabled(true);

        verticalLayout_2->addWidget(See_Tabs);

        Add_Users_Button = new QPushButton(layoutWidget1);
        Add_Users_Button->setObjectName(QString::fromUtf8("Add_Users_Button"));

        verticalLayout_2->addWidget(Add_Users_Button);

        Add_Admins = new QPushButton(layoutWidget1);
        Add_Admins->setObjectName(QString::fromUtf8("Add_Admins"));

        verticalLayout_2->addWidget(Add_Admins);

        See_Admins = new QPushButton(layoutWidget1);
        See_Admins->setObjectName(QString::fromUtf8("See_Admins"));

        verticalLayout_2->addWidget(See_Admins);

        See_Users = new QPushButton(layoutWidget1);
        See_Users->setObjectName(QString::fromUtf8("See_Users"));

        verticalLayout_2->addWidget(See_Users);

        Add_Users_Page = new QFrame(Admin_Portal);
        Add_Users_Page->setObjectName(QString::fromUtf8("Add_Users_Page"));
        Add_Users_Page->setEnabled(true);
        Add_Users_Page->setGeometry(QRect(130, 20, 571, 131));
        Add_Users_Page->setFrameShape(QFrame::StyledPanel);
        Add_Users_Page->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(Add_Users_Page);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        add_User_2 = new QLabel(Add_Users_Page);
        add_User_2->setObjectName(QString::fromUtf8("add_User_2"));

        verticalLayout_16->addWidget(add_User_2);

        add_Pass_2 = new QLabel(Add_Users_Page);
        add_Pass_2->setObjectName(QString::fromUtf8("add_Pass_2"));

        verticalLayout_16->addWidget(add_Pass_2);


        horizontalLayout_5->addLayout(verticalLayout_16);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        Add_User_Edit = new QLineEdit(Add_Users_Page);
        Add_User_Edit->setObjectName(QString::fromUtf8("Add_User_Edit"));

        verticalLayout_17->addWidget(Add_User_Edit);

        Add_Pass_Edit = new QLineEdit(Add_Users_Page);
        Add_Pass_Edit->setObjectName(QString::fromUtf8("Add_Pass_Edit"));
        Add_Pass_Edit->setEchoMode(QLineEdit::Password);

        verticalLayout_17->addWidget(Add_Pass_Edit);


        horizontalLayout_5->addLayout(verticalLayout_17);


        verticalLayout_15->addLayout(horizontalLayout_5);

        Submit_User_Info = new QPushButton(Add_Users_Page);
        Submit_User_Info->setObjectName(QString::fromUtf8("Submit_User_Info"));

        verticalLayout_15->addWidget(Submit_User_Info);


        verticalLayout_10->addLayout(verticalLayout_15);

        See_Tablets = new QFrame(Admin_Portal);
        See_Tablets->setObjectName(QString::fromUtf8("See_Tablets"));
        See_Tablets->setEnabled(true);
        See_Tablets->setGeometry(QRect(130, 10, 571, 361));
        See_Tablets->setFrameShape(QFrame::StyledPanel);
        See_Tablets->setFrameShadow(QFrame::Raised);
        verticalLayout_18 = new QVBoxLayout(See_Tablets);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        show_Tab = new QTableWidget(See_Tablets);
        if (show_Tab->columnCount() < 7)
            show_Tab->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        show_Tab->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        show_Tab->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        show_Tab->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        show_Tab->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        show_Tab->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        show_Tab->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        show_Tab->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        show_Tab->setObjectName(QString::fromUtf8("show_Tab"));

        verticalLayout_18->addWidget(show_Tab);

        del_Tab = new QLabel(See_Tablets);
        del_Tab->setObjectName(QString::fromUtf8("del_Tab"));

        verticalLayout_18->addWidget(del_Tab);

        Choose_Del_Tab = new QLineEdit(See_Tablets);
        Choose_Del_Tab->setObjectName(QString::fromUtf8("Choose_Del_Tab"));

        verticalLayout_18->addWidget(Choose_Del_Tab);

        Push_Del_Tab = new QPushButton(See_Tablets);
        Push_Del_Tab->setObjectName(QString::fromUtf8("Push_Del_Tab"));

        verticalLayout_18->addWidget(Push_Del_Tab);

        See_Users_Frame = new QFrame(Admin_Portal);
        See_Users_Frame->setObjectName(QString::fromUtf8("See_Users_Frame"));
        See_Users_Frame->setGeometry(QRect(130, 10, 551, 295));
        See_Users_Frame->setFrameShape(QFrame::StyledPanel);
        See_Users_Frame->setFrameShadow(QFrame::Raised);
        verticalLayout_28 = new QVBoxLayout(See_Users_Frame);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        Show_Users = new QTableWidget(See_Users_Frame);
        if (Show_Users->columnCount() < 3)
            Show_Users->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        Show_Users->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        Show_Users->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        Show_Users->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        Show_Users->setObjectName(QString::fromUtf8("Show_Users"));

        verticalLayout_13->addWidget(Show_Users);

        label_8 = new QLabel(See_Users_Frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_13->addWidget(label_8);

        del_User_Edit = new QLineEdit(See_Users_Frame);
        del_User_Edit->setObjectName(QString::fromUtf8("del_User_Edit"));

        verticalLayout_13->addWidget(del_User_Edit);

        pushDel_User = new QPushButton(See_Users_Frame);
        pushDel_User->setObjectName(QString::fromUtf8("pushDel_User"));

        verticalLayout_13->addWidget(pushDel_User);


        verticalLayout_28->addLayout(verticalLayout_13);

        User_Page = new QFrame(Admin_Portal);
        User_Page->setObjectName(QString::fromUtf8("User_Page"));
        User_Page->setGeometry(QRect(0, -30, 731, 411));
        User_Page->setFrameShape(QFrame::StyledPanel);
        User_Page->setFrameShadow(QFrame::Raised);
        Add_Admins_Page = new QFrame(Admin_Portal);
        Add_Admins_Page->setObjectName(QString::fromUtf8("Add_Admins_Page"));
        Add_Admins_Page->setEnabled(true);
        Add_Admins_Page->setGeometry(QRect(130, 20, 571, 131));
        Add_Admins_Page->setFrameShape(QFrame::StyledPanel);
        Add_Admins_Page->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(Add_Admins_Page);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        add_User_3 = new QLabel(Add_Admins_Page);
        add_User_3->setObjectName(QString::fromUtf8("add_User_3"));

        verticalLayout_24->addWidget(add_User_3);

        add_Pass_3 = new QLabel(Add_Admins_Page);
        add_Pass_3->setObjectName(QString::fromUtf8("add_Pass_3"));

        verticalLayout_24->addWidget(add_Pass_3);


        horizontalLayout_6->addLayout(verticalLayout_24);

        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        Admin_User_Save = new QLineEdit(Add_Admins_Page);
        Admin_User_Save->setObjectName(QString::fromUtf8("Admin_User_Save"));

        verticalLayout_25->addWidget(Admin_User_Save);

        Admin_Pass_Save = new QLineEdit(Add_Admins_Page);
        Admin_Pass_Save->setObjectName(QString::fromUtf8("Admin_Pass_Save"));

        verticalLayout_25->addWidget(Admin_Pass_Save);


        horizontalLayout_6->addLayout(verticalLayout_25);


        verticalLayout_23->addLayout(horizontalLayout_6);

        Submit_Admin_Info = new QPushButton(Add_Admins_Page);
        Submit_Admin_Info->setObjectName(QString::fromUtf8("Submit_Admin_Info"));

        verticalLayout_23->addWidget(Submit_Admin_Info);


        verticalLayout_8->addLayout(verticalLayout_23);

        back_to_login = new QPushButton(Admin_Portal);
        back_to_login->setObjectName(QString::fromUtf8("back_to_login"));
        back_to_login->setGeometry(QRect(10, 400, 118, 24));
        About_Developer = new QPushButton(centralwidget);
        About_Developer->setObjectName(QString::fromUtf8("About_Developer"));
        About_Developer->setGeometry(QRect(630, 480, 111, 24));
        User_Login_Frame = new QFrame(centralwidget);
        User_Login_Frame->setObjectName(QString::fromUtf8("User_Login_Frame"));
        User_Login_Frame->setGeometry(QRect(140, 110, 441, 111));
        User_Login_Frame->setFrameShape(QFrame::StyledPanel);
        User_Login_Frame->setFrameShadow(QFrame::Raised);
        verticalLayout_22 = new QVBoxLayout(User_Login_Frame);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        label_9 = new QLabel(User_Login_Frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_19->addWidget(label_9);

        label_10 = new QLabel(User_Login_Frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_19->addWidget(label_10);


        horizontalLayout_4->addLayout(verticalLayout_19);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        Normal_User_Name = new QLineEdit(User_Login_Frame);
        Normal_User_Name->setObjectName(QString::fromUtf8("Normal_User_Name"));
        Normal_User_Name->setStyleSheet(QString::fromUtf8("border-width : 1px;\n"
"	border-style : solid;\n"
"	border-colorr : black;"));

        verticalLayout_20->addWidget(Normal_User_Name);

        Normal_user_Pass = new QLineEdit(User_Login_Frame);
        Normal_user_Pass->setObjectName(QString::fromUtf8("Normal_user_Pass"));
        Normal_user_Pass->setStyleSheet(QString::fromUtf8("border-width : 1px;\n"
"	border-style : solid;\n"
"	border-colorr : black;"));
        Normal_user_Pass->setEchoMode(QLineEdit::Password);

        verticalLayout_20->addWidget(Normal_user_Pass);


        horizontalLayout_4->addLayout(verticalLayout_20);


        verticalLayout_21->addLayout(horizontalLayout_4);

        Normal_User_Login = new QPushButton(User_Login_Frame);
        Normal_User_Login->setObjectName(QString::fromUtf8("Normal_User_Login"));

        verticalLayout_21->addWidget(Normal_User_Login);


        verticalLayout_22->addLayout(verticalLayout_21);

        Show_Admin_Info = new QFrame(centralwidget);
        Show_Admin_Info->setObjectName(QString::fromUtf8("Show_Admin_Info"));
        Show_Admin_Info->setGeometry(QRect(140, 90, 551, 295));
        Show_Admin_Info->setFrameShape(QFrame::StyledPanel);
        Show_Admin_Info->setFrameShadow(QFrame::Raised);
        verticalLayout_27 = new QVBoxLayout(Show_Admin_Info);
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));

        verticalLayout_27->addLayout(verticalLayout_26);

        Admin_Tab = new QTableWidget(Show_Admin_Info);
        if (Admin_Tab->columnCount() < 3)
            Admin_Tab->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        Admin_Tab->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        Admin_Tab->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        Admin_Tab->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        Admin_Tab->setObjectName(QString::fromUtf8("Admin_Tab"));

        verticalLayout_27->addWidget(Admin_Tab);

        label_11 = new QLabel(Show_Admin_Info);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_27->addWidget(label_11);

        del_Admin_Edit = new QLineEdit(Show_Admin_Info);
        del_Admin_Edit->setObjectName(QString::fromUtf8("del_Admin_Edit"));

        verticalLayout_27->addWidget(del_Admin_Edit);

        push_Del_Admin = new QPushButton(Show_Admin_Info);
        push_Del_Admin->setObjectName(QString::fromUtf8("push_Del_Admin"));

        verticalLayout_27->addWidget(push_Del_Admin);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 763, 21));
        MainWindow->setMenuBar(menubar);
#if QT_CONFIG(shortcut)
        User_Name->setBuddy(Admin_user_Edit);
        Password->setBuddy(Admin_Pass_Edit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MEDICAL STORE", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "MEDICAL STORE MANAGEMENT SYSTEM", nullptr));
        Admin->setText(QCoreApplication::translate("MainWindow", "ADMIN LOGIN", nullptr));
        User->setText(QCoreApplication::translate("MainWindow", "USER LOGIN", nullptr));
        User_Name->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        Password->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        Admin_Login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "S.no", nullptr));
        label_1->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Price", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Stoke", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "MFG", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "EXP", nullptr));
        Add_Tab_Info->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        Add_Tablets->setText(QCoreApplication::translate("MainWindow", "Add Tablets", nullptr));
        See_Tabs->setText(QCoreApplication::translate("MainWindow", "See Tablets", nullptr));
        Add_Users_Button->setText(QCoreApplication::translate("MainWindow", "Add Users", nullptr));
        Add_Admins->setText(QCoreApplication::translate("MainWindow", "Add Admins", nullptr));
        See_Admins->setText(QCoreApplication::translate("MainWindow", "See Admins", nullptr));
        See_Users->setText(QCoreApplication::translate("MainWindow", "See Users", nullptr));
        add_User_2->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        add_Pass_2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        Submit_User_Info->setText(QCoreApplication::translate("MainWindow", "Submit User Data", nullptr));
        QTableWidgetItem *___qtablewidgetitem = show_Tab->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "S No", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = show_Tab->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = show_Tab->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = show_Tab->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Stoke", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = show_Tab->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = show_Tab->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "MFG", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = show_Tab->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "EXP", nullptr));
        del_Tab->setText(QCoreApplication::translate("MainWindow", "Enter S_No to Delete Tab Info", nullptr));
        Push_Del_Tab->setText(QCoreApplication::translate("MainWindow", "Delete Tab", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = Show_Users->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = Show_Users->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "            UserName         ", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = Show_Users->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Enter ID to Delete User", nullptr));
        pushDel_User->setText(QCoreApplication::translate("MainWindow", "Delete User", nullptr));
#if QT_CONFIG(tooltip)
        Add_Admins_Page->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Add Admin Info</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        add_User_3->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        add_Pass_3->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        Submit_Admin_Info->setText(QCoreApplication::translate("MainWindow", "Submit Admin Data", nullptr));
        back_to_login->setText(QCoreApplication::translate("MainWindow", "logout", nullptr));
        About_Developer->setText(QCoreApplication::translate("MainWindow", "About Developer", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "UserName", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        Normal_User_Login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = Admin_Tab->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = Admin_Tab->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "            UserName         ", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = Admin_Tab->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Enter ID to Delete Admin", nullptr));
        push_Del_Admin->setText(QCoreApplication::translate("MainWindow", "Delete Admin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

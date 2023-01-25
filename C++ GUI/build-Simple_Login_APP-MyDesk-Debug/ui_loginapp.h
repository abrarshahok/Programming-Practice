/********************************************************************************
** Form generated from reading UI file 'loginapp.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINAPP_H
#define UI_LOGINAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginApp
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *UserName;
    QLineEdit *Email;
    QLineEdit *Password;
    QPushButton *Login;
    QLabel *Pic;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *loginApp)
    {
        if (loginApp->objectName().isEmpty())
            loginApp->setObjectName(QString::fromUtf8("loginApp"));
        loginApp->resize(383, 243);
        centralwidget = new QWidget(loginApp);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 60, 56, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 90, 56, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 120, 56, 16));
        UserName = new QLineEdit(groupBox);
        UserName->setObjectName(QString::fromUtf8("UserName"));
        UserName->setGeometry(QRect(110, 50, 231, 28));
        Email = new QLineEdit(groupBox);
        Email->setObjectName(QString::fromUtf8("Email"));
        Email->setGeometry(QRect(110, 80, 231, 28));
        Password = new QLineEdit(groupBox);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setGeometry(QRect(110, 110, 231, 28));
        Login = new QPushButton(groupBox);
        Login->setObjectName(QString::fromUtf8("Login"));
        Login->setGeometry(QRect(10, 150, 331, 28));
        Pic = new QLabel(groupBox);
        Pic->setObjectName(QString::fromUtf8("Pic"));
        Pic->setGeometry(QRect(430, 10, 281, 171));

        verticalLayout->addWidget(groupBox);

        loginApp->setCentralWidget(centralwidget);
        menubar = new QMenuBar(loginApp);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 383, 25));
        loginApp->setMenuBar(menubar);
        statusbar = new QStatusBar(loginApp);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        loginApp->setStatusBar(statusbar);
#if QT_CONFIG(shortcut)
        label->setBuddy(UserName);
        label_2->setBuddy(Email);
        label_3->setBuddy(Password);
#endif // QT_CONFIG(shortcut)

        retranslateUi(loginApp);

        QMetaObject::connectSlotsByName(loginApp);
    } // setupUi

    void retranslateUi(QMainWindow *loginApp)
    {
        loginApp->setWindowTitle(QCoreApplication::translate("loginApp", "loginApp", nullptr));
        groupBox->setTitle(QCoreApplication::translate("loginApp", "SignIn", nullptr));
        label->setText(QCoreApplication::translate("loginApp", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("loginApp", "Email", nullptr));
        label_3->setText(QCoreApplication::translate("loginApp", "Password", nullptr));
        Login->setText(QCoreApplication::translate("loginApp", "Login", nullptr));
        Pic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class loginApp: public Ui_loginApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINAPP_H

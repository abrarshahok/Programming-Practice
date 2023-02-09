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
    QFrame *Register;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *UserName;
    QLineEdit *Password;
    QLineEdit *Email;
    QPushButton *Register_User;
    QFrame *frame;
    QVBoxLayout *verticalLayout_5;
    QTableWidget *ReadTable;
    QPushButton *ReadData;
    QLabel *del_label;
    QLineEdit *del_choose;
    QPushButton *DeleteUser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(840, 398);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Register = new QFrame(centralwidget);
        Register->setObjectName(QString::fromUtf8("Register"));
        Register->setGeometry(QRect(9, 9, 331, 231));
        Register->setFrameShape(QFrame::StyledPanel);
        Register->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(Register);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(Register);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(Register);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(Register);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        UserName = new QLineEdit(Register);
        UserName->setObjectName(QString::fromUtf8("UserName"));

        verticalLayout_2->addWidget(UserName);

        Password = new QLineEdit(Register);
        Password->setObjectName(QString::fromUtf8("Password"));

        verticalLayout_2->addWidget(Password);

        Email = new QLineEdit(Register);
        Email->setObjectName(QString::fromUtf8("Email"));

        verticalLayout_2->addWidget(Email);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        Register_User = new QPushButton(Register);
        Register_User->setObjectName(QString::fromUtf8("Register_User"));

        verticalLayout_3->addWidget(Register_User);


        verticalLayout_4->addLayout(verticalLayout_3);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(370, 10, 421, 341));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        ReadTable = new QTableWidget(frame);
        if (ReadTable->columnCount() < 4)
            ReadTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ReadTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ReadTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ReadTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        ReadTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        ReadTable->setObjectName(QString::fromUtf8("ReadTable"));

        verticalLayout_5->addWidget(ReadTable);

        ReadData = new QPushButton(frame);
        ReadData->setObjectName(QString::fromUtf8("ReadData"));

        verticalLayout_5->addWidget(ReadData);

        del_label = new QLabel(frame);
        del_label->setObjectName(QString::fromUtf8("del_label"));

        verticalLayout_5->addWidget(del_label);

        del_choose = new QLineEdit(frame);
        del_choose->setObjectName(QString::fromUtf8("del_choose"));

        verticalLayout_5->addWidget(del_choose);

        DeleteUser = new QPushButton(frame);
        DeleteUser->setObjectName(QString::fromUtf8("DeleteUser"));

        verticalLayout_5->addWidget(DeleteUser);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 840, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "LOGIN FORM", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "UserName", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        Register_User->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        QTableWidgetItem *___qtablewidgetitem = ReadTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = ReadTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "UserName", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = ReadTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = ReadTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        ReadData->setText(QCoreApplication::translate("MainWindow", "Read Data", nullptr));
        del_label->setText(QCoreApplication::translate("MainWindow", "Select User ID  to Delete", nullptr));
        DeleteUser->setText(QCoreApplication::translate("MainWindow", "Delete User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

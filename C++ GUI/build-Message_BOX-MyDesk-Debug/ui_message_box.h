/********************************************************************************
** Form generated from reading UI file 'message_box.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGE_BOX_H
#define UI_MESSAGE_BOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Message_Box
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Message_Box)
    {
        if (Message_Box->objectName().isEmpty())
            Message_Box->setObjectName(QString::fromUtf8("Message_Box"));
        Message_Box->resize(800, 600);
        centralwidget = new QWidget(Message_Box);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 200, 141, 71));
        Message_Box->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Message_Box);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Message_Box->setMenuBar(menubar);
        statusbar = new QStatusBar(Message_Box);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Message_Box->setStatusBar(statusbar);

        retranslateUi(Message_Box);

        QMetaObject::connectSlotsByName(Message_Box);
    } // setupUi

    void retranslateUi(QMainWindow *Message_Box)
    {
        Message_Box->setWindowTitle(QCoreApplication::translate("Message_Box", "Message_Box", nullptr));
        pushButton->setText(QCoreApplication::translate("Message_Box", "Show Message", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Message_Box: public Ui_Message_Box {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGE_BOX_H

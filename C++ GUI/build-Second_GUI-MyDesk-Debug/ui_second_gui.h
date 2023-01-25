/********************************************************************************
** Form generated from reading UI file 'second_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECOND_GUI_H
#define UI_SECOND_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Second_GUI
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *Click_Me;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Second_GUI)
    {
        if (Second_GUI->objectName().isEmpty())
            Second_GUI->setObjectName(QString::fromUtf8("Second_GUI"));
        Second_GUI->resize(800, 600);
        centralwidget = new QWidget(Second_GUI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(250, 190, 241, 71));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Click_Me = new QPushButton(widget);
        Click_Me->setObjectName(QString::fromUtf8("Click_Me"));

        verticalLayout->addWidget(Click_Me);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        Second_GUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Second_GUI);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Second_GUI->setMenuBar(menubar);
        statusbar = new QStatusBar(Second_GUI);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Second_GUI->setStatusBar(statusbar);

        retranslateUi(Second_GUI);

        QMetaObject::connectSlotsByName(Second_GUI);
    } // setupUi

    void retranslateUi(QMainWindow *Second_GUI)
    {
        Second_GUI->setWindowTitle(QCoreApplication::translate("Second_GUI", "Second_GUI", nullptr));
        Click_Me->setText(QCoreApplication::translate("Second_GUI", "Click Me", nullptr));
        label->setText(QCoreApplication::translate("Second_GUI", "                           Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Second_GUI: public Ui_Second_GUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECOND_GUI_H

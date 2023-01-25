/********************************************************************************
** Form generated from reading UI file 'layout.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUT_H
#define UI_LAYOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Layout
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Layout)
    {
        if (Layout->objectName().isEmpty())
            Layout->setObjectName(QString::fromUtf8("Layout"));
        Layout->resize(823, 600);
        centralwidget = new QWidget(Layout);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        Layout->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Layout);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 823, 25));
        Layout->setMenuBar(menubar);
        statusbar = new QStatusBar(Layout);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Layout->setStatusBar(statusbar);

        retranslateUi(Layout);

        QMetaObject::connectSlotsByName(Layout);
    } // setupUi

    void retranslateUi(QMainWindow *Layout)
    {
        Layout->setWindowTitle(QCoreApplication::translate("Layout", "Layout", nullptr));
        label->setText(QCoreApplication::translate("Layout", "Name", nullptr));
        lineEdit->setText(QString());
        label_5->setText(QCoreApplication::translate("Layout", "Work", nullptr));
        lineEdit_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Layout: public Ui_Layout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUT_H

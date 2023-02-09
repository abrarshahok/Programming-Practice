/********************************************************************************
** Form generated from reading UI file 'adminportal.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPORTAL_H
#define UI_ADMINPORTAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminPortal
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *AdminPortal)
    {
        if (AdminPortal->objectName().isEmpty())
            AdminPortal->setObjectName(QString::fromUtf8("AdminPortal"));
        AdminPortal->resize(576, 479);
        widget = new QWidget(AdminPortal);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 130, 208, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Fira Sans\";"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

#if QT_CONFIG(shortcut)
        label->setBuddy(lineEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(AdminPortal);

        QMetaObject::connectSlotsByName(AdminPortal);
    } // setupUi

    void retranslateUi(QWidget *AdminPortal)
    {
        AdminPortal->setWindowTitle(QCoreApplication::translate("AdminPortal", "Form", nullptr));
        label->setText(QCoreApplication::translate("AdminPortal", "Add Customer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminPortal: public Ui_AdminPortal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPORTAL_H

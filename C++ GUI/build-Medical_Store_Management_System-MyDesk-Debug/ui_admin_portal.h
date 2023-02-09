/********************************************************************************
** Form generated from reading UI file 'admin_portal.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_PORTAL_H
#define UI_ADMIN_PORTAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin_Portal
{
public:

    void setupUi(QWidget *Admin_Portal)
    {
        if (Admin_Portal->objectName().isEmpty())
            Admin_Portal->setObjectName(QString::fromUtf8("Admin_Portal"));
        Admin_Portal->resize(665, 536);

        retranslateUi(Admin_Portal);

        QMetaObject::connectSlotsByName(Admin_Portal);
    } // setupUi

    void retranslateUi(QWidget *Admin_Portal)
    {
        Admin_Portal->setWindowTitle(QCoreApplication::translate("Admin_Portal", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin_Portal: public Ui_Admin_Portal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_PORTAL_H

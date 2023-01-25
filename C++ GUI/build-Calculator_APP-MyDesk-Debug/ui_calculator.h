/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Nine;
    QPushButton *Multiply;
    QPushButton *Equal;
    QPushButton *Plus;
    QPushButton *Seven;
    QPushButton *Three;
    QPushButton *Four;
    QLineEdit *Input;
    QPushButton *Two;
    QPushButton *Divide;
    QPushButton *dot;
    QPushButton *Ac;
    QPushButton *Zero;
    QPushButton *Minus;
    QPushButton *Clear;
    QPushButton *Six;
    QPushButton *Eight;
    QPushButton *Five;
    QPushButton *One;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->setEnabled(true);
        Calculator->resize(250, 250);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(250);
        sizePolicy.setVerticalStretch(250);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        Calculator->setMinimumSize(QSize(250, 250));
        Calculator->setMaximumSize(QSize(250, 250));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../Downloads/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Calculator->setWindowIcon(icon);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Nine = new QPushButton(centralwidget);
        Nine->setObjectName(QString::fromUtf8("Nine"));
        Nine->setMinimumSize(QSize(20, 20));

        gridLayout->addWidget(Nine, 3, 2, 1, 1);

        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName(QString::fromUtf8("Multiply"));
        Multiply->setMinimumSize(QSize(20, 20));

        gridLayout->addWidget(Multiply, 2, 3, 1, 1);

        Equal = new QPushButton(centralwidget);
        Equal->setObjectName(QString::fromUtf8("Equal"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Equal->sizePolicy().hasHeightForWidth());
        Equal->setSizePolicy(sizePolicy1);
        Equal->setMinimumSize(QSize(20, 20));

        gridLayout->addWidget(Equal, 3, 4, 2, 1);

        Plus = new QPushButton(centralwidget);
        Plus->setObjectName(QString::fromUtf8("Plus"));
        Plus->setMinimumSize(QSize(20, 20));

        gridLayout->addWidget(Plus, 4, 3, 1, 1);

        Seven = new QPushButton(centralwidget);
        Seven->setObjectName(QString::fromUtf8("Seven"));
        Seven->setMinimumSize(QSize(20, 20));

        gridLayout->addWidget(Seven, 3, 0, 1, 1);

        Three = new QPushButton(centralwidget);
        Three->setObjectName(QString::fromUtf8("Three"));
        Three->setMinimumSize(QSize(20, 20));

        gridLayout->addWidget(Three, 1, 2, 1, 1);

        Four = new QPushButton(centralwidget);
        Four->setObjectName(QString::fromUtf8("Four"));
        Four->setMinimumSize(QSize(20, 20));

        gridLayout->addWidget(Four, 2, 0, 1, 1);

        Input = new QLineEdit(centralwidget);
        Input->setObjectName(QString::fromUtf8("Input"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Input->sizePolicy().hasHeightForWidth());
        Input->setSizePolicy(sizePolicy2);
        Input->setMinimumSize(QSize(20, 20));

        gridLayout->addWidget(Input, 0, 0, 1, 5);

        Two = new QPushButton(centralwidget);
        Two->setObjectName(QString::fromUtf8("Two"));
        Two->setMinimumSize(QSize(20, 20));

        gridLayout->addWidget(Two, 1, 1, 1, 1);

        Divide = new QPushButton(centralwidget);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        Divide->setMinimumSize(QSize(20, 20));

        gridLayout->addWidget(Divide, 1, 3, 1, 1);

        dot = new QPushButton(centralwidget);
        dot->setObjectName(QString::fromUtf8("dot"));
        dot->setMinimumSize(QSize(20, 20));

        gridLayout->addWidget(dot, 4, 2, 1, 1);

        Ac = new QPushButton(centralwidget);
        Ac->setObjectName(QString::fromUtf8("Ac"));
        Ac->setMinimumSize(QSize(20, 20));

        gridLayout->addWidget(Ac, 1, 4, 1, 1);

        Zero = new QPushButton(centralwidget);
        Zero->setObjectName(QString::fromUtf8("Zero"));
        Zero->setMinimumSize(QSize(20, 20));

        gridLayout->addWidget(Zero, 4, 0, 1, 2);

        Minus = new QPushButton(centralwidget);
        Minus->setObjectName(QString::fromUtf8("Minus"));
        Minus->setMinimumSize(QSize(20, 20));

        gridLayout->addWidget(Minus, 3, 3, 1, 1);

        Clear = new QPushButton(centralwidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        Clear->setMinimumSize(QSize(20, 20));

        gridLayout->addWidget(Clear, 2, 4, 1, 1);

        Six = new QPushButton(centralwidget);
        Six->setObjectName(QString::fromUtf8("Six"));
        Six->setMinimumSize(QSize(20, 20));

        gridLayout->addWidget(Six, 2, 2, 1, 1);

        Eight = new QPushButton(centralwidget);
        Eight->setObjectName(QString::fromUtf8("Eight"));
        Eight->setMinimumSize(QSize(20, 20));

        gridLayout->addWidget(Eight, 3, 1, 1, 1);

        Five = new QPushButton(centralwidget);
        Five->setObjectName(QString::fromUtf8("Five"));
        Five->setMinimumSize(QSize(20, 20));

        gridLayout->addWidget(Five, 2, 1, 1, 1);

        One = new QPushButton(centralwidget);
        One->setObjectName(QString::fromUtf8("One"));
        One->setMinimumSize(QSize(20, 20));

        gridLayout->addWidget(One, 1, 0, 1, 1);

        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 250, 25));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calculator->setStatusBar(statusbar);
        QWidget::setTabOrder(Divide, One);
        QWidget::setTabOrder(One, Two);
        QWidget::setTabOrder(Two, Three);
        QWidget::setTabOrder(Three, Ac);
        QWidget::setTabOrder(Ac, Clear);
        QWidget::setTabOrder(Clear, Four);
        QWidget::setTabOrder(Four, Five);
        QWidget::setTabOrder(Five, Multiply);
        QWidget::setTabOrder(Multiply, Six);
        QWidget::setTabOrder(Six, Nine);
        QWidget::setTabOrder(Nine, Equal);
        QWidget::setTabOrder(Equal, Minus);
        QWidget::setTabOrder(Minus, Eight);
        QWidget::setTabOrder(Eight, Seven);
        QWidget::setTabOrder(Seven, Zero);
        QWidget::setTabOrder(Zero, dot);
        QWidget::setTabOrder(dot, Plus);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Smart Calculator", nullptr));
        Nine->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Multiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        Equal->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        Plus->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        Seven->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Three->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Four->setText(QCoreApplication::translate("Calculator", "4", nullptr));
#if QT_CONFIG(tooltip)
        Input->setToolTip(QCoreApplication::translate("Calculator", "<html><head/><body><p align=\"right\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Input->setText(QString());
        Two->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        dot->setText(QCoreApplication::translate("Calculator", ".", nullptr));
        Ac->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        Zero->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Minus->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Clear->setText(QCoreApplication::translate("Calculator", "Del", nullptr));
        Six->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Eight->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Five->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        One->setText(QCoreApplication::translate("Calculator", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H

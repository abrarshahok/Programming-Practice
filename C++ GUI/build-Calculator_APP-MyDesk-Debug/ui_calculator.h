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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *One;
    QPushButton *Equal;
    QPushButton *dot;
    QPushButton *Seven;
    QPushButton *Clear;
    QPushButton *Zero;
    QPushButton *Six;
    QPushButton *Divide;
    QPushButton *Two;
    QPushButton *Minus;
    QPushButton *Three;
    QPushButton *Multiply;
    QPushButton *Ac;
    QPushButton *Four;
    QPushButton *Nine;
    QPushButton *Plus;
    QLineEdit *Input;
    QPushButton *Eight;
    QPushButton *Five;
    QPushButton *About;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->setEnabled(true);
        Calculator->resize(250, 250);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(250);
        sizePolicy.setVerticalStretch(250);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        Calculator->setMinimumSize(QSize(250, 250));
        Calculator->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../Downloads/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Calculator->setWindowIcon(icon);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        One = new QPushButton(centralwidget);
        One->setObjectName(QString::fromUtf8("One"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(One->sizePolicy().hasHeightForWidth());
        One->setSizePolicy(sizePolicy1);
        One->setMinimumSize(QSize(20, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Fira Code SemiBold"));
        font.setPointSize(12);
        font.setBold(false);
        One->setFont(font);

        gridLayout->addWidget(One, 2, 0, 1, 1);

        Equal = new QPushButton(centralwidget);
        Equal->setObjectName(QString::fromUtf8("Equal"));
        sizePolicy1.setHeightForWidth(Equal->sizePolicy().hasHeightForWidth());
        Equal->setSizePolicy(sizePolicy1);
        Equal->setMinimumSize(QSize(20, 20));
        Equal->setFont(font);

        gridLayout->addWidget(Equal, 4, 4, 2, 1);

        dot = new QPushButton(centralwidget);
        dot->setObjectName(QString::fromUtf8("dot"));
        sizePolicy1.setHeightForWidth(dot->sizePolicy().hasHeightForWidth());
        dot->setSizePolicy(sizePolicy1);
        dot->setMinimumSize(QSize(20, 20));
        dot->setFont(font);

        gridLayout->addWidget(dot, 5, 2, 1, 1);

        Seven = new QPushButton(centralwidget);
        Seven->setObjectName(QString::fromUtf8("Seven"));
        sizePolicy1.setHeightForWidth(Seven->sizePolicy().hasHeightForWidth());
        Seven->setSizePolicy(sizePolicy1);
        Seven->setMinimumSize(QSize(20, 20));
        Seven->setFont(font);

        gridLayout->addWidget(Seven, 4, 0, 1, 1);

        Clear = new QPushButton(centralwidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        sizePolicy1.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy1);
        Clear->setMinimumSize(QSize(20, 20));
        Clear->setFont(font);

        gridLayout->addWidget(Clear, 3, 4, 1, 1);

        Zero = new QPushButton(centralwidget);
        Zero->setObjectName(QString::fromUtf8("Zero"));
        sizePolicy1.setHeightForWidth(Zero->sizePolicy().hasHeightForWidth());
        Zero->setSizePolicy(sizePolicy1);
        Zero->setMinimumSize(QSize(20, 20));
        Zero->setFont(font);

        gridLayout->addWidget(Zero, 5, 0, 1, 2);

        Six = new QPushButton(centralwidget);
        Six->setObjectName(QString::fromUtf8("Six"));
        sizePolicy1.setHeightForWidth(Six->sizePolicy().hasHeightForWidth());
        Six->setSizePolicy(sizePolicy1);
        Six->setMinimumSize(QSize(20, 20));
        Six->setFont(font);

        gridLayout->addWidget(Six, 3, 2, 1, 1);

        Divide = new QPushButton(centralwidget);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        sizePolicy1.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy1);
        Divide->setMinimumSize(QSize(20, 20));
        Divide->setFont(font);

        gridLayout->addWidget(Divide, 2, 3, 1, 1);

        Two = new QPushButton(centralwidget);
        Two->setObjectName(QString::fromUtf8("Two"));
        sizePolicy1.setHeightForWidth(Two->sizePolicy().hasHeightForWidth());
        Two->setSizePolicy(sizePolicy1);
        Two->setMinimumSize(QSize(20, 20));
        Two->setFont(font);

        gridLayout->addWidget(Two, 2, 1, 1, 1);

        Minus = new QPushButton(centralwidget);
        Minus->setObjectName(QString::fromUtf8("Minus"));
        sizePolicy1.setHeightForWidth(Minus->sizePolicy().hasHeightForWidth());
        Minus->setSizePolicy(sizePolicy1);
        Minus->setMinimumSize(QSize(20, 20));
        Minus->setFont(font);

        gridLayout->addWidget(Minus, 4, 3, 1, 1);

        Three = new QPushButton(centralwidget);
        Three->setObjectName(QString::fromUtf8("Three"));
        sizePolicy1.setHeightForWidth(Three->sizePolicy().hasHeightForWidth());
        Three->setSizePolicy(sizePolicy1);
        Three->setMinimumSize(QSize(20, 20));
        Three->setFont(font);

        gridLayout->addWidget(Three, 2, 2, 1, 1);

        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName(QString::fromUtf8("Multiply"));
        sizePolicy1.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy1);
        Multiply->setMinimumSize(QSize(20, 20));
        Multiply->setFont(font);

        gridLayout->addWidget(Multiply, 3, 3, 1, 1);

        Ac = new QPushButton(centralwidget);
        Ac->setObjectName(QString::fromUtf8("Ac"));
        sizePolicy1.setHeightForWidth(Ac->sizePolicy().hasHeightForWidth());
        Ac->setSizePolicy(sizePolicy1);
        Ac->setMinimumSize(QSize(20, 20));
        Ac->setFont(font);

        gridLayout->addWidget(Ac, 2, 4, 1, 1);

        Four = new QPushButton(centralwidget);
        Four->setObjectName(QString::fromUtf8("Four"));
        sizePolicy1.setHeightForWidth(Four->sizePolicy().hasHeightForWidth());
        Four->setSizePolicy(sizePolicy1);
        Four->setMinimumSize(QSize(20, 20));
        Four->setFont(font);

        gridLayout->addWidget(Four, 3, 0, 1, 1);

        Nine = new QPushButton(centralwidget);
        Nine->setObjectName(QString::fromUtf8("Nine"));
        sizePolicy1.setHeightForWidth(Nine->sizePolicy().hasHeightForWidth());
        Nine->setSizePolicy(sizePolicy1);
        Nine->setMinimumSize(QSize(20, 20));
        Nine->setFont(font);

        gridLayout->addWidget(Nine, 4, 2, 1, 1);

        Plus = new QPushButton(centralwidget);
        Plus->setObjectName(QString::fromUtf8("Plus"));
        sizePolicy1.setHeightForWidth(Plus->sizePolicy().hasHeightForWidth());
        Plus->setSizePolicy(sizePolicy1);
        Plus->setMinimumSize(QSize(20, 20));
        Plus->setFont(font);

        gridLayout->addWidget(Plus, 5, 3, 1, 1);

        Input = new QLineEdit(centralwidget);
        Input->setObjectName(QString::fromUtf8("Input"));
        sizePolicy1.setHeightForWidth(Input->sizePolicy().hasHeightForWidth());
        Input->setSizePolicy(sizePolicy1);
        Input->setMinimumSize(QSize(20, 20));
        Input->setFont(font);

        gridLayout->addWidget(Input, 0, 0, 1, 5);

        Eight = new QPushButton(centralwidget);
        Eight->setObjectName(QString::fromUtf8("Eight"));
        sizePolicy1.setHeightForWidth(Eight->sizePolicy().hasHeightForWidth());
        Eight->setSizePolicy(sizePolicy1);
        Eight->setMinimumSize(QSize(20, 20));
        Eight->setFont(font);

        gridLayout->addWidget(Eight, 4, 1, 1, 1);

        Five = new QPushButton(centralwidget);
        Five->setObjectName(QString::fromUtf8("Five"));
        sizePolicy1.setHeightForWidth(Five->sizePolicy().hasHeightForWidth());
        Five->setSizePolicy(sizePolicy1);
        Five->setMinimumSize(QSize(20, 20));
        Five->setFont(font);

        gridLayout->addWidget(Five, 3, 1, 1, 1);

        About = new QPushButton(centralwidget);
        About->setObjectName(QString::fromUtf8("About"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Fira Code SemiBold"));
        font1.setPointSize(10);
        font1.setBold(true);
        About->setFont(font1);

        gridLayout->addWidget(About, 6, 0, 1, 5);

        Calculator->setCentralWidget(centralwidget);
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
        One->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Equal->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        dot->setText(QCoreApplication::translate("Calculator", ".", nullptr));
        Seven->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Clear->setText(QCoreApplication::translate("Calculator", "<-", nullptr));
        Zero->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Six->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        Two->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Minus->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Three->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Multiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        Ac->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        Four->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Nine->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Plus->setText(QCoreApplication::translate("Calculator", "+", nullptr));
#if QT_CONFIG(tooltip)
        Input->setToolTip(QCoreApplication::translate("Calculator", "<html><head/><body><p align=\"right\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Input->setText(QString());
        Eight->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Five->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        About->setText(QCoreApplication::translate("Calculator", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H

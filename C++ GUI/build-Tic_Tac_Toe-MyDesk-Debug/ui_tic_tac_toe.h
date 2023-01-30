/********************************************************************************
** Form generated from reading UI file 'tic_tac_toe.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIC_TAC_TOE_H
#define UI_TIC_TAC_TOE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tic_Tac_Toe
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *Slot_1;
    QPushButton *Slot_4;
    QPushButton *Slot_7;
    QVBoxLayout *verticalLayout_3;
    QPushButton *Slot_2;
    QPushButton *Slot_5;
    QPushButton *Slot_8;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Slot_3;
    QPushButton *Slot_6;
    QPushButton *Slot_9;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *Winner_Text;
    QHBoxLayout *horizontalLayout;
    QPushButton *mark_O;
    QPushButton *mark_X;
    QPushButton *About;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Tic_Tac_Toe)
    {
        if (Tic_Tac_Toe->objectName().isEmpty())
            Tic_Tac_Toe->setObjectName(QString::fromUtf8("Tic_Tac_Toe"));
        Tic_Tac_Toe->setWindowModality(Qt::NonModal);
        Tic_Tac_Toe->resize(198, 255);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(198);
        sizePolicy.setVerticalStretch(255);
        sizePolicy.setHeightForWidth(Tic_Tac_Toe->sizePolicy().hasHeightForWidth());
        Tic_Tac_Toe->setSizePolicy(sizePolicy);
        Tic_Tac_Toe->setMinimumSize(QSize(198, 255));
        Tic_Tac_Toe->setMaximumSize(QSize(198, 255));
        Tic_Tac_Toe->setSizeIncrement(QSize(0, 0));
        Tic_Tac_Toe->setBaseSize(QSize(0, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Tic_Tac_Toe->setWindowIcon(icon);
        Tic_Tac_Toe->setAutoFillBackground(true);
        centralwidget = new QWidget(Tic_Tac_Toe);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 5, 143, 100));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        Slot_1 = new QPushButton(layoutWidget);
        Slot_1->setObjectName(QString::fromUtf8("Slot_1"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Slot_1->sizePolicy().hasHeightForWidth());
        Slot_1->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(Slot_1);

        Slot_4 = new QPushButton(layoutWidget);
        Slot_4->setObjectName(QString::fromUtf8("Slot_4"));
        sizePolicy1.setHeightForWidth(Slot_4->sizePolicy().hasHeightForWidth());
        Slot_4->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(Slot_4);

        Slot_7 = new QPushButton(layoutWidget);
        Slot_7->setObjectName(QString::fromUtf8("Slot_7"));
        sizePolicy1.setHeightForWidth(Slot_7->sizePolicy().hasHeightForWidth());
        Slot_7->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(Slot_7);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        Slot_2 = new QPushButton(layoutWidget);
        Slot_2->setObjectName(QString::fromUtf8("Slot_2"));
        sizePolicy1.setHeightForWidth(Slot_2->sizePolicy().hasHeightForWidth());
        Slot_2->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(Slot_2);

        Slot_5 = new QPushButton(layoutWidget);
        Slot_5->setObjectName(QString::fromUtf8("Slot_5"));
        sizePolicy1.setHeightForWidth(Slot_5->sizePolicy().hasHeightForWidth());
        Slot_5->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(Slot_5);

        Slot_8 = new QPushButton(layoutWidget);
        Slot_8->setObjectName(QString::fromUtf8("Slot_8"));
        sizePolicy1.setHeightForWidth(Slot_8->sizePolicy().hasHeightForWidth());
        Slot_8->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(Slot_8);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        Slot_3 = new QPushButton(layoutWidget);
        Slot_3->setObjectName(QString::fromUtf8("Slot_3"));
        sizePolicy1.setHeightForWidth(Slot_3->sizePolicy().hasHeightForWidth());
        Slot_3->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(Slot_3);

        Slot_6 = new QPushButton(layoutWidget);
        Slot_6->setObjectName(QString::fromUtf8("Slot_6"));
        sizePolicy1.setHeightForWidth(Slot_6->sizePolicy().hasHeightForWidth());
        Slot_6->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(Slot_6);

        Slot_9 = new QPushButton(layoutWidget);
        Slot_9->setObjectName(QString::fromUtf8("Slot_9"));
        sizePolicy1.setHeightForWidth(Slot_9->sizePolicy().hasHeightForWidth());
        Slot_9->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(Slot_9);


        horizontalLayout_2->addLayout(verticalLayout_2);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(11, 108, 172, 124));
        verticalLayout_5 = new QVBoxLayout(layoutWidget1);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        Winner_Text = new QLineEdit(layoutWidget1);
        Winner_Text->setObjectName(QString::fromUtf8("Winner_Text"));
        Winner_Text->setReadOnly(true);

        verticalLayout->addWidget(Winner_Text);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        mark_O = new QPushButton(layoutWidget1);
        mark_O->setObjectName(QString::fromUtf8("mark_O"));

        horizontalLayout->addWidget(mark_O);

        mark_X = new QPushButton(layoutWidget1);
        mark_X->setObjectName(QString::fromUtf8("mark_X"));

        horizontalLayout->addWidget(mark_X);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout);

        About = new QPushButton(layoutWidget1);
        About->setObjectName(QString::fromUtf8("About"));

        verticalLayout_5->addWidget(About);

        Tic_Tac_Toe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Tic_Tac_Toe);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 198, 25));
        Tic_Tac_Toe->setMenuBar(menubar);
        statusbar = new QStatusBar(Tic_Tac_Toe);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Tic_Tac_Toe->setStatusBar(statusbar);

        retranslateUi(Tic_Tac_Toe);

        QMetaObject::connectSlotsByName(Tic_Tac_Toe);
    } // setupUi

    void retranslateUi(QMainWindow *Tic_Tac_Toe)
    {
        Tic_Tac_Toe->setWindowTitle(QCoreApplication::translate("Tic_Tac_Toe", "TIC TAC TOE", nullptr));
        Slot_1->setText(QString());
        Slot_4->setText(QString());
        Slot_7->setText(QString());
        Slot_2->setText(QString());
        Slot_5->setText(QString());
        Slot_8->setText(QString());
        Slot_3->setText(QString());
        Slot_6->setText(QString());
        Slot_9->setText(QString());
        label->setText(QCoreApplication::translate("Tic_Tac_Toe", "Game Status", nullptr));
        Winner_Text->setText(QString());
        mark_O->setText(QCoreApplication::translate("Tic_Tac_Toe", "O", nullptr));
        mark_X->setText(QCoreApplication::translate("Tic_Tac_Toe", "X", nullptr));
        About->setText(QCoreApplication::translate("Tic_Tac_Toe", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tic_Tac_Toe: public Ui_Tic_Tac_Toe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIC_TAC_TOE_H

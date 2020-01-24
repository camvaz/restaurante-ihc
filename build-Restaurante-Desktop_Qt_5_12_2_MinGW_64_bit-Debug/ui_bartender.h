/********************************************************************************
** Form generated from reading UI file 'bartender.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BARTENDER_H
#define UI_BARTENDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Bartender
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Bartender)
    {
        if (Bartender->objectName().isEmpty())
            Bartender->setObjectName(QString::fromUtf8("Bartender"));
        Bartender->resize(900, 600);
        Bartender->setMinimumSize(QSize(900, 600));
        Bartender->setMaximumSize(QSize(900, 600));
        centralwidget = new QWidget(Bartender);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Bartender->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Bartender);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 21));
        Bartender->setMenuBar(menubar);
        statusbar = new QStatusBar(Bartender);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Bartender->setStatusBar(statusbar);

        retranslateUi(Bartender);

        QMetaObject::connectSlotsByName(Bartender);
    } // setupUi

    void retranslateUi(QMainWindow *Bartender)
    {
        Bartender->setWindowTitle(QApplication::translate("Bartender", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bartender: public Ui_Bartender {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BARTENDER_H

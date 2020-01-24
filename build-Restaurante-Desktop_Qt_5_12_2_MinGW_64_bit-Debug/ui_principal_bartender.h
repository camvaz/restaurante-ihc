/********************************************************************************
** Form generated from reading UI file 'principal_bartender.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_BARTENDER_H
#define UI_PRINCIPAL_BARTENDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_principal_bartender
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *principal_bartender)
    {
        if (principal_bartender->objectName().isEmpty())
            principal_bartender->setObjectName(QString::fromUtf8("principal_bartender"));
        principal_bartender->resize(800, 600);
        menubar = new QMenuBar(principal_bartender);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        principal_bartender->setMenuBar(menubar);
        centralwidget = new QWidget(principal_bartender);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        principal_bartender->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(principal_bartender);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        principal_bartender->setStatusBar(statusbar);

        retranslateUi(principal_bartender);

        QMetaObject::connectSlotsByName(principal_bartender);
    } // setupUi

    void retranslateUi(QMainWindow *principal_bartender)
    {
        principal_bartender->setWindowTitle(QApplication::translate("principal_bartender", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class principal_bartender: public Ui_principal_bartender {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_BARTENDER_H

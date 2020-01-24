/********************************************************************************
** Form generated from reading UI file 'principal_cajero.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_CAJERO_H
#define UI_PRINCIPAL_CAJERO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_principal_cajero
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *principal_cajero)
    {
        if (principal_cajero->objectName().isEmpty())
            principal_cajero->setObjectName(QString::fromUtf8("principal_cajero"));
        principal_cajero->resize(800, 600);
        menubar = new QMenuBar(principal_cajero);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        principal_cajero->setMenuBar(menubar);
        centralwidget = new QWidget(principal_cajero);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        principal_cajero->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(principal_cajero);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        principal_cajero->setStatusBar(statusbar);

        retranslateUi(principal_cajero);

        QMetaObject::connectSlotsByName(principal_cajero);
    } // setupUi

    void retranslateUi(QMainWindow *principal_cajero)
    {
        principal_cajero->setWindowTitle(QApplication::translate("principal_cajero", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class principal_cajero: public Ui_principal_cajero {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_CAJERO_H

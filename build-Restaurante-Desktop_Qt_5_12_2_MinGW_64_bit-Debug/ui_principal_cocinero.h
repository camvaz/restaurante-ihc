/********************************************************************************
** Form generated from reading UI file 'principal_cocinero.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_COCINERO_H
#define UI_PRINCIPAL_COCINERO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_principal_cocinero
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *principal_cocinero)
    {
        if (principal_cocinero->objectName().isEmpty())
            principal_cocinero->setObjectName(QString::fromUtf8("principal_cocinero"));
        principal_cocinero->resize(800, 600);
        menubar = new QMenuBar(principal_cocinero);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        principal_cocinero->setMenuBar(menubar);
        centralwidget = new QWidget(principal_cocinero);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        principal_cocinero->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(principal_cocinero);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        principal_cocinero->setStatusBar(statusbar);

        retranslateUi(principal_cocinero);

        QMetaObject::connectSlotsByName(principal_cocinero);
    } // setupUi

    void retranslateUi(QMainWindow *principal_cocinero)
    {
        principal_cocinero->setWindowTitle(QApplication::translate("principal_cocinero", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class principal_cocinero: public Ui_principal_cocinero {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_COCINERO_H

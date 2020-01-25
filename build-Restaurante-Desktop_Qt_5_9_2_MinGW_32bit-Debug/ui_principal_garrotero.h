/********************************************************************************
** Form generated from reading UI file 'principal_garrotero.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_GARROTERO_H
#define UI_PRINCIPAL_GARROTERO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_principal_garrotero
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *principal_garrotero)
    {
        if (principal_garrotero->objectName().isEmpty())
            principal_garrotero->setObjectName(QStringLiteral("principal_garrotero"));
        principal_garrotero->resize(800, 600);
        menubar = new QMenuBar(principal_garrotero);
        menubar->setObjectName(QStringLiteral("menubar"));
        principal_garrotero->setMenuBar(menubar);
        centralwidget = new QWidget(principal_garrotero);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        principal_garrotero->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(principal_garrotero);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        principal_garrotero->setStatusBar(statusbar);

        retranslateUi(principal_garrotero);

        QMetaObject::connectSlotsByName(principal_garrotero);
    } // setupUi

    void retranslateUi(QMainWindow *principal_garrotero)
    {
        principal_garrotero->setWindowTitle(QApplication::translate("principal_garrotero", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class principal_garrotero: public Ui_principal_garrotero {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_GARROTERO_H

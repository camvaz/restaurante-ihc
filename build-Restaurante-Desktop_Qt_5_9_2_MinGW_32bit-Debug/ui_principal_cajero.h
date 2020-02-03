/********************************************************************************
** Form generated from reading UI file 'principal_cajero.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_CAJERO_H
#define UI_PRINCIPAL_CAJERO_H

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

class Ui_principal_cajero
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *principal_cajero)
    {
        if (principal_cajero->objectName().isEmpty())
            principal_cajero->setObjectName(QStringLiteral("principal_cajero"));
        principal_cajero->resize(854, 966);
        centralwidget = new QWidget(principal_cajero);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        principal_cajero->setCentralWidget(centralwidget);
        menubar = new QMenuBar(principal_cajero);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 854, 21));
        principal_cajero->setMenuBar(menubar);
        statusbar = new QStatusBar(principal_cajero);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        principal_cajero->setStatusBar(statusbar);

        retranslateUi(principal_cajero);

        QMetaObject::connectSlotsByName(principal_cajero);
    } // setupUi

    void retranslateUi(QMainWindow *principal_cajero)
    {
        principal_cajero->setWindowTitle(QApplication::translate("principal_cajero", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class principal_cajero: public Ui_principal_cajero {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_CAJERO_H

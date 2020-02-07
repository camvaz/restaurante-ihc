/********************************************************************************
** Form generated from reading UI file 'principal_cocinero.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_COCINERO_H
#define UI_PRINCIPAL_COCINERO_H

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

class Ui_principal_cocinero
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *principal_cocinero)
    {
        if (principal_cocinero->objectName().isEmpty())
            principal_cocinero->setObjectName(QStringLiteral("principal_cocinero"));
        principal_cocinero->resize(854, 966);
        centralwidget = new QWidget(principal_cocinero);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        principal_cocinero->setCentralWidget(centralwidget);
        menubar = new QMenuBar(principal_cocinero);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 854, 21));
        principal_cocinero->setMenuBar(menubar);
        statusbar = new QStatusBar(principal_cocinero);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        principal_cocinero->setStatusBar(statusbar);

        retranslateUi(principal_cocinero);

        QMetaObject::connectSlotsByName(principal_cocinero);
    } // setupUi

    void retranslateUi(QMainWindow *principal_cocinero)
    {
        principal_cocinero->setWindowTitle(QApplication::translate("principal_cocinero", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class principal_cocinero: public Ui_principal_cocinero {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_COCINERO_H

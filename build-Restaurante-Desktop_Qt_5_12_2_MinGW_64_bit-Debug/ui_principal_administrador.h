/********************************************************************************
** Form generated from reading UI file 'principal_administrador.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_ADMINISTRADOR_H
#define UI_PRINCIPAL_ADMINISTRADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_principal_administrador
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *principal_administrador)
    {
        if (principal_administrador->objectName().isEmpty())
            principal_administrador->setObjectName(QString::fromUtf8("principal_administrador"));
        principal_administrador->resize(800, 600);
        menubar = new QMenuBar(principal_administrador);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        principal_administrador->setMenuBar(menubar);
        centralwidget = new QWidget(principal_administrador);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        principal_administrador->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(principal_administrador);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        principal_administrador->setStatusBar(statusbar);

        retranslateUi(principal_administrador);

        QMetaObject::connectSlotsByName(principal_administrador);
    } // setupUi

    void retranslateUi(QMainWindow *principal_administrador)
    {
        principal_administrador->setWindowTitle(QApplication::translate("principal_administrador", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class principal_administrador: public Ui_principal_administrador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_ADMINISTRADOR_H

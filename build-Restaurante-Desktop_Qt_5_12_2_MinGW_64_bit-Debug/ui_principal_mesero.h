/********************************************************************************
** Form generated from reading UI file 'principal_mesero.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_MESERO_H
#define UI_PRINCIPAL_MESERO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Principal_Mesero
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Principal_Mesero)
    {
        if (Principal_Mesero->objectName().isEmpty())
            Principal_Mesero->setObjectName(QString::fromUtf8("Principal_Mesero"));
        Principal_Mesero->resize(800, 600);
        menubar = new QMenuBar(Principal_Mesero);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Principal_Mesero->setMenuBar(menubar);
        centralwidget = new QWidget(Principal_Mesero);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Principal_Mesero->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Principal_Mesero);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Principal_Mesero->setStatusBar(statusbar);

        retranslateUi(Principal_Mesero);

        QMetaObject::connectSlotsByName(Principal_Mesero);
    } // setupUi

    void retranslateUi(QMainWindow *Principal_Mesero)
    {
        Principal_Mesero->setWindowTitle(QApplication::translate("Principal_Mesero", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Principal_Mesero: public Ui_Principal_Mesero {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_MESERO_H

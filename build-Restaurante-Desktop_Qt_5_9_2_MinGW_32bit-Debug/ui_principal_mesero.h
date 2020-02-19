/********************************************************************************
** Form generated from reading UI file 'principal_mesero.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_MESERO_H
#define UI_PRINCIPAL_MESERO_H

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

class Ui_Principal_Mesero
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Principal_Mesero)
    {
        if (Principal_Mesero->objectName().isEmpty())
            Principal_Mesero->setObjectName(QStringLiteral("Principal_Mesero"));
        Principal_Mesero->resize(800, 600);
        menubar = new QMenuBar(Principal_Mesero);
        menubar->setObjectName(QStringLiteral("menubar"));
        Principal_Mesero->setMenuBar(menubar);
        centralwidget = new QWidget(Principal_Mesero);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Principal_Mesero->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Principal_Mesero);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Principal_Mesero->setStatusBar(statusbar);

        retranslateUi(Principal_Mesero);

        QMetaObject::connectSlotsByName(Principal_Mesero);
    } // setupUi

    void retranslateUi(QMainWindow *Principal_Mesero)
    {
        Principal_Mesero->setWindowTitle(QApplication::translate("Principal_Mesero", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Principal_Mesero: public Ui_Principal_Mesero {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_MESERO_H

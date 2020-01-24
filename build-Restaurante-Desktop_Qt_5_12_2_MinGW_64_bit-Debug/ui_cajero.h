/********************************************************************************
** Form generated from reading UI file 'cajero.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAJERO_H
#define UI_CAJERO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cajero
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Cajero)
    {
        if (Cajero->objectName().isEmpty())
            Cajero->setObjectName(QString::fromUtf8("Cajero"));
        Cajero->resize(900, 600);
        Cajero->setMinimumSize(QSize(900, 600));
        Cajero->setMaximumSize(QSize(900, 600));
        centralwidget = new QWidget(Cajero);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Cajero->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Cajero);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 21));
        Cajero->setMenuBar(menubar);
        statusbar = new QStatusBar(Cajero);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Cajero->setStatusBar(statusbar);

        retranslateUi(Cajero);

        QMetaObject::connectSlotsByName(Cajero);
    } // setupUi

    void retranslateUi(QMainWindow *Cajero)
    {
        Cajero->setWindowTitle(QApplication::translate("Cajero", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cajero: public Ui_Cajero {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAJERO_H

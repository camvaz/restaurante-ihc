/********************************************************************************
** Form generated from reading UI file 'garrotero.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GARROTERO_H
#define UI_GARROTERO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Garrotero
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Garrotero)
    {
        if (Garrotero->objectName().isEmpty())
            Garrotero->setObjectName(QString::fromUtf8("Garrotero"));
        Garrotero->resize(900, 600);
        Garrotero->setMinimumSize(QSize(900, 600));
        Garrotero->setMaximumSize(QSize(900, 600));
        centralwidget = new QWidget(Garrotero);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Garrotero->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Garrotero);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 21));
        Garrotero->setMenuBar(menubar);
        statusbar = new QStatusBar(Garrotero);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Garrotero->setStatusBar(statusbar);

        retranslateUi(Garrotero);

        QMetaObject::connectSlotsByName(Garrotero);
    } // setupUi

    void retranslateUi(QMainWindow *Garrotero)
    {
        Garrotero->setWindowTitle(QApplication::translate("Garrotero", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Garrotero: public Ui_Garrotero {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GARROTERO_H

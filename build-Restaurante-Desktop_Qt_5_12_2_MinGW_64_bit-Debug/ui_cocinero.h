/********************************************************************************
** Form generated from reading UI file 'cocinero.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COCINERO_H
#define UI_COCINERO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cocinero
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Cocinero)
    {
        if (Cocinero->objectName().isEmpty())
            Cocinero->setObjectName(QString::fromUtf8("Cocinero"));
        Cocinero->resize(900, 600);
        Cocinero->setMinimumSize(QSize(900, 600));
        Cocinero->setMaximumSize(QSize(900, 600));
        centralwidget = new QWidget(Cocinero);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Cocinero->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Cocinero);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 21));
        Cocinero->setMenuBar(menubar);
        statusbar = new QStatusBar(Cocinero);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Cocinero->setStatusBar(statusbar);

        retranslateUi(Cocinero);

        QMetaObject::connectSlotsByName(Cocinero);
    } // setupUi

    void retranslateUi(QMainWindow *Cocinero)
    {
        Cocinero->setWindowTitle(QApplication::translate("Cocinero", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cocinero: public Ui_Cocinero {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COCINERO_H

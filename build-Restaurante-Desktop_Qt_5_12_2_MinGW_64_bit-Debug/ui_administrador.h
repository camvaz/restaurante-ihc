/********************************************************************************
** Form generated from reading UI file 'administrador.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRADOR_H
#define UI_ADMINISTRADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Administrador
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Administrador)
    {
        if (Administrador->objectName().isEmpty())
            Administrador->setObjectName(QString::fromUtf8("Administrador"));
        Administrador->resize(900, 600);
        Administrador->setMinimumSize(QSize(900, 600));
        Administrador->setMaximumSize(QSize(900, 600));
        centralwidget = new QWidget(Administrador);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Administrador->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Administrador);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 21));
        Administrador->setMenuBar(menubar);
        statusbar = new QStatusBar(Administrador);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Administrador->setStatusBar(statusbar);

        retranslateUi(Administrador);

        QMetaObject::connectSlotsByName(Administrador);
    } // setupUi

    void retranslateUi(QMainWindow *Administrador)
    {
        Administrador->setWindowTitle(QApplication::translate("Administrador", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Administrador: public Ui_Administrador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRADOR_H

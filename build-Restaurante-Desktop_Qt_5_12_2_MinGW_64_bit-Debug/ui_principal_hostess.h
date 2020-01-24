/********************************************************************************
** Form generated from reading UI file 'principal_hostess.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_HOSTESS_H
#define UI_PRINCIPAL_HOSTESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_principal_hostess
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *principal_hostess)
    {
        if (principal_hostess->objectName().isEmpty())
            principal_hostess->setObjectName(QString::fromUtf8("principal_hostess"));
        principal_hostess->resize(800, 600);
        menubar = new QMenuBar(principal_hostess);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        principal_hostess->setMenuBar(menubar);
        centralwidget = new QWidget(principal_hostess);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        principal_hostess->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(principal_hostess);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        principal_hostess->setStatusBar(statusbar);

        retranslateUi(principal_hostess);

        QMetaObject::connectSlotsByName(principal_hostess);
    } // setupUi

    void retranslateUi(QMainWindow *principal_hostess)
    {
        principal_hostess->setWindowTitle(QApplication::translate("principal_hostess", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class principal_hostess: public Ui_principal_hostess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_HOSTESS_H

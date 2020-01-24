/********************************************************************************
** Form generated from reading UI file 'host.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOST_H
#define UI_HOST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Host
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Host)
    {
        if (Host->objectName().isEmpty())
            Host->setObjectName(QString::fromUtf8("Host"));
        Host->resize(900, 600);
        Host->setMinimumSize(QSize(900, 600));
        Host->setMaximumSize(QSize(900, 600));
        centralwidget = new QWidget(Host);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Host->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Host);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 21));
        Host->setMenuBar(menubar);
        statusbar = new QStatusBar(Host);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Host->setStatusBar(statusbar);

        retranslateUi(Host);

        QMetaObject::connectSlotsByName(Host);
    } // setupUi

    void retranslateUi(QMainWindow *Host)
    {
        Host->setWindowTitle(QApplication::translate("Host", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Host: public Ui_Host {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOST_H

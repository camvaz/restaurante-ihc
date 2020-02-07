/********************************************************************************
** Form generated from reading UI file 'principal_bartender.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_BARTENDER_H
#define UI_PRINCIPAL_BARTENDER_H

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

class Ui_principal_bartender
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *principal_bartender)
    {
        if (principal_bartender->objectName().isEmpty())
            principal_bartender->setObjectName(QStringLiteral("principal_bartender"));
        principal_bartender->resize(854, 966);
        centralwidget = new QWidget(principal_bartender);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        principal_bartender->setCentralWidget(centralwidget);
        menubar = new QMenuBar(principal_bartender);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 854, 21));
        principal_bartender->setMenuBar(menubar);
        statusbar = new QStatusBar(principal_bartender);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        principal_bartender->setStatusBar(statusbar);

        retranslateUi(principal_bartender);

        QMetaObject::connectSlotsByName(principal_bartender);
    } // setupUi

    void retranslateUi(QMainWindow *principal_bartender)
    {
        principal_bartender->setWindowTitle(QApplication::translate("principal_bartender", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class principal_bartender: public Ui_principal_bartender {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_BARTENDER_H

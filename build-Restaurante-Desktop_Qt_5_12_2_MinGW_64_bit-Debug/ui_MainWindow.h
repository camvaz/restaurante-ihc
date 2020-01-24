/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *Paginas;
    QWidget *page;
    QPushButton *mesa1;
    QPushButton *mesa2;
    QPushButton *mesa3;
    QPushButton *mesa4;
    QPushButton *mesa5;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(900, 600);
        MainWindow->setMinimumSize(QSize(900, 600));
        MainWindow->setMaximumSize(QSize(900, 600));
        MainWindow->setStyleSheet(QString::fromUtf8("/*background-color: rgb(12, 12, 12);\n"
"color: rgb(255, 255, 255);*/"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Paginas = new QStackedWidget(centralwidget);
        Paginas->setObjectName(QString::fromUtf8("Paginas"));
        Paginas->setGeometry(QRect(10, 0, 881, 551));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        mesa1 = new QPushButton(page);
        mesa1->setObjectName(QString::fromUtf8("mesa1"));
        mesa1->setGeometry(QRect(70, 30, 75, 23));
        mesa2 = new QPushButton(page);
        mesa2->setObjectName(QString::fromUtf8("mesa2"));
        mesa2->setGeometry(QRect(180, 30, 75, 23));
        mesa3 = new QPushButton(page);
        mesa3->setObjectName(QString::fromUtf8("mesa3"));
        mesa3->setGeometry(QRect(290, 30, 75, 23));
        mesa4 = new QPushButton(page);
        mesa4->setObjectName(QString::fromUtf8("mesa4"));
        mesa4->setGeometry(QRect(410, 30, 75, 23));
        mesa5 = new QPushButton(page);
        mesa5->setObjectName(QString::fromUtf8("mesa5"));
        mesa5->setGeometry(QRect(510, 30, 75, 23));
        Paginas->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        Paginas->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        Paginas->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        mesa1->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        mesa2->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        mesa3->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        mesa4->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        mesa5->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

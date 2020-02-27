/********************************************************************************
** Form generated from reading UI file 'principal_garrotero.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_GARROTERO_H
#define UI_PRINCIPAL_GARROTERO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_principal_garrotero
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QFrame *line;
    QPushButton *mesas;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *principal_garrotero)
    {
        if (principal_garrotero->objectName().isEmpty())
            principal_garrotero->setObjectName(QStringLiteral("principal_garrotero"));
        principal_garrotero->resize(900, 600);
        principal_garrotero->setStyleSheet(QStringLiteral("background-color: #0c0c0c;"));
        centralwidget = new QWidget(principal_garrotero);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(70, 0, 821, 551));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(60, 0, 1, 550));
        line->setStyleSheet(QStringLiteral("background-color:#707070;"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        mesas = new QPushButton(centralwidget);
        mesas->setObjectName(QStringLiteral("mesas"));
        mesas->setEnabled(true);
        mesas->setGeometry(QRect(0, 0, 60, 60));
        mesas->setMinimumSize(QSize(60, 60));
        mesas->setMaximumSize(QSize(60, 60));
        mesas->setCursor(QCursor(Qt::OpenHandCursor));
        mesas->setStyleSheet(QLatin1String("\n"
"QPushButton:hover {\n"
"	background-color:#C92531;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../../../Imagenes tama\303\261o peque\303\261o/dining-table.png"), QSize(), QIcon::Normal, QIcon::Off);
        mesas->setIcon(icon);
        mesas->setIconSize(QSize(40, 40));
        principal_garrotero->setCentralWidget(centralwidget);
        menubar = new QMenuBar(principal_garrotero);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 21));
        principal_garrotero->setMenuBar(menubar);
        statusbar = new QStatusBar(principal_garrotero);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        principal_garrotero->setStatusBar(statusbar);

        retranslateUi(principal_garrotero);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(principal_garrotero);
    } // setupUi

    void retranslateUi(QMainWindow *principal_garrotero)
    {
        principal_garrotero->setWindowTitle(QApplication::translate("principal_garrotero", "MainWindow", Q_NULLPTR));
        mesas->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class principal_garrotero: public Ui_principal_garrotero {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_GARROTERO_H

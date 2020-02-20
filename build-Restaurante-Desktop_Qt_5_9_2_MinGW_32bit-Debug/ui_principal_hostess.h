/********************************************************************************
** Form generated from reading UI file 'principal_hostess.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_HOSTESS_H
#define UI_PRINCIPAL_HOSTESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_principal_hostess
{
public:
    QWidget *centralwidget;
    QPushButton *mesas;
    QFrame *line;
    QLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *principal_hostess)
    {
        if (principal_hostess->objectName().isEmpty())
            principal_hostess->setObjectName(QStringLiteral("principal_hostess"));
        principal_hostess->resize(900, 600);
        principal_hostess->setStyleSheet(QStringLiteral("background-color: #0c0c0c;"));
        centralwidget = new QWidget(principal_hostess);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
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
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(60, 0, 1, 550));
        line->setStyleSheet(QStringLiteral("background-color:#707070;"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 520, 31, 30));
        label->setStyleSheet(QLatin1String("border: solid black 1px;\n"
"border-radius: 15px;\n"
"padding:10px;\n"
"\n"
"background-color:#F1F1F1;"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(70, 0, 821, 551));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        principal_hostess->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(principal_hostess);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        principal_hostess->setStatusBar(statusbar);
        menubar = new QMenuBar(principal_hostess);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 21));
        principal_hostess->setMenuBar(menubar);

        retranslateUi(principal_hostess);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(principal_hostess);
    } // setupUi

    void retranslateUi(QMainWindow *principal_hostess)
    {
        principal_hostess->setWindowTitle(QApplication::translate("principal_hostess", "MainWindow", Q_NULLPTR));
        mesas->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class principal_hostess: public Ui_principal_hostess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_HOSTESS_H

/********************************************************************************
** Form generated from reading UI file 'principal_administrador.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_ADMINISTRADOR_H
#define UI_PRINCIPAL_ADMINISTRADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_principal_administrador
{
public:
    QWidget *centralwidget;
    QFrame *line;
    QWidget *widget;
    QPushButton *perfiles;
    QPushButton *inventario;
    QPushButton *mapa_de_piso;
    QPushButton *Reportes;
    QPushButton *perfil_admi;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;

    void setupUi(QMainWindow *principal_administrador)
    {
        if (principal_administrador->objectName().isEmpty())
            principal_administrador->setObjectName(QStringLiteral("principal_administrador"));
        principal_administrador->setWindowModality(Qt::NonModal);
        principal_administrador->resize(854, 746);
        principal_administrador->setContextMenuPolicy(Qt::NoContextMenu);
        principal_administrador->setAutoFillBackground(true);
        principal_administrador->setStyleSheet(QLatin1String("\n"
"\n"
"\n"
"QPushButton{\n"
"color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0, stop:0 rgba(12, 12, 12, 255), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"padding-top:1px;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0, stop:0 rgba(221, 51, 51, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
""));
        principal_administrador->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(principal_administrador);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 0, 181, 741));
        line->setStyleSheet(QLatin1String("color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0, stop:0 rgba(12, 12, 12, 255), stop:1 rgba(255, 255, 255, 255));"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 90, 751));
        widget->setStyleSheet(QStringLiteral(""));
        perfiles = new QPushButton(widget);
        perfiles->setObjectName(QStringLiteral("perfiles"));
        perfiles->setGeometry(QRect(0, 0, 90, 85));
        perfiles->setStyleSheet(QLatin1String("image: url(:/IconosGuiAdmiBlancos/account.png);\n"
""));
        inventario = new QPushButton(widget);
        inventario->setObjectName(QStringLiteral("inventario"));
        inventario->setGeometry(QRect(0, 80, 90, 85));
        inventario->setStyleSheet(QStringLiteral("image: url(:/IconosGuiAdmiBlancos/trolley.png);"));
        mapa_de_piso = new QPushButton(widget);
        mapa_de_piso->setObjectName(QStringLiteral("mapa_de_piso"));
        mapa_de_piso->setGeometry(QRect(0, 160, 90, 85));
        mapa_de_piso->setStyleSheet(QStringLiteral("image: url(:/IconosGuiAdmiBlancos/dining-table.png);"));
        Reportes = new QPushButton(widget);
        Reportes->setObjectName(QStringLiteral("Reportes"));
        Reportes->setGeometry(QRect(0, 240, 90, 85));
        Reportes->setStyleSheet(QStringLiteral("image: url(:/IconosGuiAdmiBlancos/money.png);"));
        perfil_admi = new QPushButton(widget);
        perfil_admi->setObjectName(QStringLiteral("perfil_admi"));
        perfil_admi->setGeometry(QRect(0, 660, 90, 85));
        perfil_admi->setStyleSheet(QStringLiteral(""));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(90, 0, 761, 741));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        principal_administrador->setCentralWidget(centralwidget);

        retranslateUi(principal_administrador);

        QMetaObject::connectSlotsByName(principal_administrador);
    } // setupUi

    void retranslateUi(QMainWindow *principal_administrador)
    {
        principal_administrador->setWindowTitle(QApplication::translate("principal_administrador", "MainWindow", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        perfiles->setToolTip(QApplication::translate("principal_administrador", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        perfiles->setText(QString());
        inventario->setText(QString());
        mapa_de_piso->setText(QString());
        Reportes->setText(QString());
        perfil_admi->setText(QApplication::translate("principal_administrador", "Perfil Admi", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class principal_administrador: public Ui_principal_administrador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_ADMINISTRADOR_H

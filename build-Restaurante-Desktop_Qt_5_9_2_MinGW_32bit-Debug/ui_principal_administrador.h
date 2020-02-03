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
#include <QtWidgets/QLabel>
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
    QStackedWidget *opcionesAdmi;
    QWidget *page;
    QLabel *label;
    QWidget *page_2;
    QLabel *label_2;
    QWidget *page_3;
    QLabel *label_3;
    QWidget *page_4;
    QLabel *label_4;
    QWidget *page_5;
    QLabel *label_5;

    void setupUi(QMainWindow *principal_administrador)
    {
        if (principal_administrador->objectName().isEmpty())
            principal_administrador->setObjectName(QStringLiteral("principal_administrador"));
        principal_administrador->setWindowModality(Qt::NonModal);
        principal_administrador->resize(800, 601);
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
        line->setGeometry(QRect(0, 0, 181, 601));
        line->setStyleSheet(QLatin1String("color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0, stop:0 rgba(12, 12, 12, 255), stop:1 rgba(255, 255, 255, 255));"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 90, 601));
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
        perfil_admi->setGeometry(QRect(0, 520, 90, 85));
        perfil_admi->setStyleSheet(QStringLiteral(""));
        opcionesAdmi = new QStackedWidget(centralwidget);
        opcionesAdmi->setObjectName(QStringLiteral("opcionesAdmi"));
        opcionesAdmi->setGeometry(QRect(100, 0, 701, 601));
        opcionesAdmi->setStyleSheet(QStringLiteral("background-color: rgb(12, 12, 12);"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setStyleSheet(QStringLiteral(""));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(280, 60, 111, 121));
        label->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        opcionesAdmi->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 100, 161, 131));
        label_2->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        opcionesAdmi->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(240, 160, 171, 141));
        label_3->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        opcionesAdmi->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        label_4 = new QLabel(page_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(290, 160, 171, 211));
        label_4->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        opcionesAdmi->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        label_5 = new QLabel(page_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(250, 170, 241, 141));
        label_5->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        opcionesAdmi->addWidget(page_5);
        principal_administrador->setCentralWidget(centralwidget);

        retranslateUi(principal_administrador);

        opcionesAdmi->setCurrentIndex(0);


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
        label->setText(QApplication::translate("principal_administrador", "Perfiles.........", Q_NULLPTR));
        label_2->setText(QApplication::translate("principal_administrador", "Invetario.........", Q_NULLPTR));
        label_3->setText(QApplication::translate("principal_administrador", "Mapa de ......Piso", Q_NULLPTR));
        label_4->setText(QApplication::translate("principal_administrador", "Reportes..........", Q_NULLPTR));
        label_5->setText(QApplication::translate("principal_administrador", "Perfil de el Admi", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class principal_administrador: public Ui_principal_administrador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_ADMINISTRADOR_H

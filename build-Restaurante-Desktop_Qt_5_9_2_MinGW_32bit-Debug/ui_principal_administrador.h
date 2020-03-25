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
    QWidget *widget;
    QPushButton *perfiles;
    QPushButton *inventario;
    QPushButton *mapa_de_piso;
    QPushButton *Reportes;
    QPushButton *perfil_admi;
    QFrame *line_17;
    QFrame *line_18;
    QFrame *line_19;
    QFrame *line_20;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QFrame *line;

    void setupUi(QMainWindow *principal_administrador)
    {
        if (principal_administrador->objectName().isEmpty())
            principal_administrador->setObjectName(QStringLiteral("principal_administrador"));
        principal_administrador->setWindowModality(Qt::NonModal);
        principal_administrador->resize(900, 600);
        principal_administrador->setContextMenuPolicy(Qt::NoContextMenu);
        principal_administrador->setAutoFillBackground(false);
        principal_administrador->setStyleSheet(QLatin1String("background-color:#0c0c0c;\n"
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
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 61, 631));
        widget->setStyleSheet(QStringLiteral("background-color:#0c0c0c;"));
        perfiles = new QPushButton(widget);
        perfiles->setObjectName(QStringLiteral("perfiles"));
        perfiles->setGeometry(QRect(0, 0, 60, 60));
        perfiles->setMinimumSize(QSize(60, 60));
        perfiles->setMaximumSize(QSize(60, 60));
        perfiles->setCursor(QCursor(Qt::PointingHandCursor));
        perfiles->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"	background-color:#C92531;\n"
"}\n"
""));
        perfiles->setIconSize(QSize(45, 45));
        inventario = new QPushButton(widget);
        inventario->setObjectName(QStringLiteral("inventario"));
        inventario->setGeometry(QRect(0, 60, 60, 60));
        inventario->setCursor(QCursor(Qt::PointingHandCursor));
        inventario->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"	background-color:#C92531;\n"
"}\n"
""));
        inventario->setIconSize(QSize(45, 45));
        mapa_de_piso = new QPushButton(widget);
        mapa_de_piso->setObjectName(QStringLiteral("mapa_de_piso"));
        mapa_de_piso->setGeometry(QRect(0, 120, 60, 60));
        mapa_de_piso->setCursor(QCursor(Qt::PointingHandCursor));
        mapa_de_piso->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"	background-color:#C92531;\n"
"}\n"
""));
        mapa_de_piso->setIconSize(QSize(45, 45));
        Reportes = new QPushButton(widget);
        Reportes->setObjectName(QStringLiteral("Reportes"));
        Reportes->setGeometry(QRect(0, 180, 60, 60));
        Reportes->setMinimumSize(QSize(60, 60));
        Reportes->setMaximumSize(QSize(60, 60));
        Reportes->setCursor(QCursor(Qt::PointingHandCursor));
        Reportes->setStyleSheet(QLatin1String("\n"
"QPushButton:hover {\n"
"	background-color:#C92531;\n"
"}\n"
""));
        Reportes->setIconSize(QSize(45, 45));
        perfil_admi = new QPushButton(widget);
        perfil_admi->setObjectName(QStringLiteral("perfil_admi"));
        perfil_admi->setGeometry(QRect(0, 540, 60, 60));
        perfil_admi->setStyleSheet(QLatin1String("border:none;\n"
"color:white;"));
        line_17 = new QFrame(widget);
        line_17->setObjectName(QStringLiteral("line_17"));
        line_17->setGeometry(QRect(0, 60, 60, 1));
        line_17->setStyleSheet(QStringLiteral("background-color:#707070;"));
        line_17->setFrameShape(QFrame::HLine);
        line_17->setFrameShadow(QFrame::Sunken);
        line_18 = new QFrame(widget);
        line_18->setObjectName(QStringLiteral("line_18"));
        line_18->setGeometry(QRect(0, 120, 60, 1));
        line_18->setStyleSheet(QStringLiteral("background-color:#707070;"));
        line_18->setFrameShape(QFrame::HLine);
        line_18->setFrameShadow(QFrame::Sunken);
        line_19 = new QFrame(widget);
        line_19->setObjectName(QStringLiteral("line_19"));
        line_19->setGeometry(QRect(0, 180, 60, 1));
        line_19->setStyleSheet(QStringLiteral("background-color:#707070;"));
        line_19->setFrameShape(QFrame::HLine);
        line_19->setFrameShadow(QFrame::Sunken);
        line_20 = new QFrame(widget);
        line_20->setObjectName(QStringLiteral("line_20"));
        line_20->setGeometry(QRect(0, 240, 60, 1));
        line_20->setStyleSheet(QStringLiteral("background-color:#707070;"));
        line_20->setFrameShape(QFrame::HLine);
        line_20->setFrameShadow(QFrame::Sunken);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(70, -1, 831, 601));
        stackedWidget->setStyleSheet(QStringLiteral("background-color:#0c0c0c;"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(60, 0, 1, 601));
        line->setStyleSheet(QStringLiteral("background-color:#707070;"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        principal_administrador->setCentralWidget(centralwidget);

        retranslateUi(principal_administrador);

        QMetaObject::connectSlotsByName(principal_administrador);
    } // setupUi

    void retranslateUi(QMainWindow *principal_administrador)
    {
        principal_administrador->setWindowTitle(QApplication::translate("principal_administrador", "MainWindow", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        perfiles->setToolTip(QString());
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

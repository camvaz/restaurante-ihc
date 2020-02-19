/********************************************************************************
** Form generated from reading UI file 'principal_mesero.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_MESERO_H
#define UI_PRINCIPAL_MESERO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Principal_Mesero
{
public:
    QWidget *centralwidget;
    QPushButton *mesas;
    QPushButton *comanda;
    QPushButton *bebidas;
    QPushButton *cuenta;
    QLabel *label;
    QStackedWidget *paginas;
    QWidget *page;
    QLabel *label_3;
    QFrame *line_2;
    QPushButton *mesa_1;
    QFrame *frame;
    QPushButton *mesa_2;
    QPushButton *mesa_3;
    QPushButton *mesa_4;
    QPushButton *mesa_5;
    QPushButton *mesa_6;
    QPushButton *mesa_7;
    QPushButton *mesa_8;
    QPushButton *mesa_9;
    QPushButton *mesa_10;
    QPushButton *mesa_11;
    QPushButton *mesa_12;
    QWidget *page_2;
    QFrame *line_3;
    QLabel *label_4;
    QPushButton *parilla;
    QPushButton *ensalada;
    QPushButton *mar;
    QPushButton *sopa;
    QPushButton *guarnicion;
    QPushButton *reposteria;
    QPushButton *infantil;
    QPushButton *entrada;
    QLabel *label_2;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QWidget *page_3;
    QFrame *line_4;
    QLabel *label_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QGridLayout *menuParrila1;
    QWidget *page_4;
    QFrame *line_5;
    QLabel *label_6;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_3;
    QGridLayout *menuEnsalada;
    QWidget *page_5;
    QFrame *line_6;
    QLabel *label_7;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_4;
    QGridLayout *menuMar;
    QWidget *page_6;
    QLabel *label_9;
    QFrame *line_7;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QGridLayout *gridLayout_5;
    QGridLayout *menuSopa;
    QWidget *page_7;
    QLabel *label_10;
    QFrame *line_8;
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_6;
    QGridLayout *gridLayout_7;
    QGridLayout *menuEntradas;
    QWidget *page_8;
    QLabel *label_11;
    QFrame *line_9;
    QScrollArea *scrollArea_7;
    QWidget *scrollAreaWidgetContents_7;
    QGridLayout *gridLayout_8;
    QGridLayout *menuGuarnicion;
    QWidget *page_9;
    QLabel *label_12;
    QFrame *line_10;
    QScrollArea *scrollArea_8;
    QWidget *scrollAreaWidgetContents_8;
    QGridLayout *gridLayout_9;
    QGridLayout *menuReposteria;
    QWidget *page_10;
    QLabel *label_239;
    QFrame *line_11;
    QScrollArea *scrollArea_9;
    QWidget *scrollAreaWidgetContents_9;
    QGridLayout *gridLayout_10;
    QGridLayout *menuInfantil;
    QWidget *page_11;
    QFrame *line_12;
    QLabel *label_270;
    QPushButton *coctel;
    QPushButton *vino;
    QLabel *label_271;
    QLabel *label_272;
    QWidget *page_12;
    QFrame *line_13;
    QLabel *label_273;
    QScrollArea *scrollArea_10;
    QWidget *scrollAreaWidgetContents_10;
    QGridLayout *gridLayout_11;
    QGridLayout *menuCoteles;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QLabel *label_24;
    QWidget *page_13;
    QLabel *label_540;
    QFrame *line_26;
    QFrame *line_27;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QGridLayout *gridLayout_6;
    QGridLayout *menuVinos;
    QFrame *line;
    QFrame *line_14;
    QFrame *line_15;
    QFrame *line_17;
    QFrame *line_18;
    QFrame *line_16;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Principal_Mesero)
    {
        if (Principal_Mesero->objectName().isEmpty())
            Principal_Mesero->setObjectName(QStringLiteral("Principal_Mesero"));
        Principal_Mesero->resize(900, 600);
        Principal_Mesero->setMinimumSize(QSize(900, 600));
        Principal_Mesero->setMaximumSize(QSize(900, 600));
        Principal_Mesero->setStyleSheet(QLatin1String("/*background-color: rgb(12, 12, 12);*/\n"
"background-color: #0c0c0c;\n"
" \n"
"\n"
""));
        centralwidget = new QWidget(Principal_Mesero);
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
        mesas->setIconSize(QSize(40, 40));
        comanda = new QPushButton(centralwidget);
        comanda->setObjectName(QStringLiteral("comanda"));
        comanda->setGeometry(QRect(0, 60, 60, 60));
        comanda->setMinimumSize(QSize(60, 60));
        comanda->setMaximumSize(QSize(60, 60));
        comanda->setCursor(QCursor(Qt::OpenHandCursor));
        comanda->setStyleSheet(QLatin1String("\n"
"QPushButton:hover {\n"
"	background-color:#C92531;\n"
"}\n"
""));
        comanda->setIconSize(QSize(40, 40));
        bebidas = new QPushButton(centralwidget);
        bebidas->setObjectName(QStringLiteral("bebidas"));
        bebidas->setGeometry(QRect(0, 120, 60, 60));
        bebidas->setMinimumSize(QSize(60, 60));
        bebidas->setMaximumSize(QSize(60, 60));
        bebidas->setCursor(QCursor(Qt::OpenHandCursor));
        bebidas->setStyleSheet(QLatin1String("\n"
"QPushButton:hover {\n"
"	background-color:#C92531;\n"
"}\n"
""));
        bebidas->setIconSize(QSize(40, 40));
        cuenta = new QPushButton(centralwidget);
        cuenta->setObjectName(QStringLiteral("cuenta"));
        cuenta->setGeometry(QRect(0, 180, 60, 60));
        cuenta->setCursor(QCursor(Qt::OpenHandCursor));
        cuenta->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"	background-color:#C92531;\n"
"}"));
        cuenta->setIconSize(QSize(40, 40));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(15, 520, 30, 30));
        label->setStyleSheet(QLatin1String("border: solid black 1px;\n"
"border-radius: 15px;\n"
"padding:10px;\n"
"\n"
"background-color:#F1F1F1;"));
        paginas = new QStackedWidget(centralwidget);
        paginas->setObjectName(QStringLiteral("paginas"));
        paginas->setGeometry(QRect(100, 0, 760, 530));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 20, 201, 31));
        label_3->setStyleSheet(QLatin1String("color: rgb(201, 37, 49);font: 16pt \"MS Shell Dlg 2\";\n"
"font: 75 16pt \"Noto Serif\";"));
        line_2 = new QFrame(page);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(149, 37, 601, 1));
        line_2->setStyleSheet(QStringLiteral("background-color:#707070;"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        mesa_1 = new QPushButton(page);
        mesa_1->setObjectName(QStringLiteral("mesa_1"));
        mesa_1->setGeometry(QRect(30, 130, 111, 81));
        mesa_1->setCursor(QCursor(Qt::OpenHandCursor));
        mesa_1->setStyleSheet(QStringLiteral("background-color: transparent;"));
        mesa_1->setIconSize(QSize(80, 80));
        frame = new QFrame(page);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 80, 751, 451));
        frame->setStyleSheet(QLatin1String("QFrame{\n"
"	background:#1D1D1D;\n"
"	border-radius:20px;\n"
"}\n"
"\n"
" "));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        mesa_2 = new QPushButton(frame);
        mesa_2->setObjectName(QStringLiteral("mesa_2"));
        mesa_2->setGeometry(QRect(210, 50, 111, 81));
        mesa_2->setCursor(QCursor(Qt::OpenHandCursor));
        mesa_2->setStyleSheet(QStringLiteral("background-color: transparent;"));
        mesa_2->setIconSize(QSize(80, 80));
        mesa_3 = new QPushButton(frame);
        mesa_3->setObjectName(QStringLiteral("mesa_3"));
        mesa_3->setGeometry(QRect(590, 50, 111, 81));
        mesa_3->setCursor(QCursor(Qt::OpenHandCursor));
        mesa_3->setStyleSheet(QStringLiteral("background-color: transparent;"));
        mesa_3->setIconSize(QSize(80, 80));
        mesa_4 = new QPushButton(frame);
        mesa_4->setObjectName(QStringLiteral("mesa_4"));
        mesa_4->setGeometry(QRect(240, 170, 111, 81));
        mesa_4->setCursor(QCursor(Qt::OpenHandCursor));
        mesa_4->setStyleSheet(QStringLiteral("background-color: transparent;"));
        mesa_4->setIconSize(QSize(80, 80));
        mesa_5 = new QPushButton(frame);
        mesa_5->setObjectName(QStringLiteral("mesa_5"));
        mesa_5->setGeometry(QRect(390, 50, 111, 81));
        mesa_5->setCursor(QCursor(Qt::OpenHandCursor));
        mesa_5->setStyleSheet(QStringLiteral("background-color: transparent;"));
        mesa_5->setIconSize(QSize(80, 80));
        mesa_6 = new QPushButton(frame);
        mesa_6->setObjectName(QStringLiteral("mesa_6"));
        mesa_6->setGeometry(QRect(70, 170, 111, 81));
        mesa_6->setCursor(QCursor(Qt::OpenHandCursor));
        mesa_6->setStyleSheet(QStringLiteral("background-color: transparent;"));
        mesa_6->setIconSize(QSize(80, 80));
        mesa_7 = new QPushButton(frame);
        mesa_7->setObjectName(QStringLiteral("mesa_7"));
        mesa_7->setGeometry(QRect(400, 170, 111, 81));
        mesa_7->setCursor(QCursor(Qt::OpenHandCursor));
        mesa_7->setStyleSheet(QStringLiteral("background-color: transparent;"));
        mesa_7->setIconSize(QSize(80, 80));
        mesa_8 = new QPushButton(frame);
        mesa_8->setObjectName(QStringLiteral("mesa_8"));
        mesa_8->setGeometry(QRect(560, 170, 111, 81));
        mesa_8->setCursor(QCursor(Qt::OpenHandCursor));
        mesa_8->setStyleSheet(QStringLiteral("background-color: transparent;"));
        mesa_8->setIconSize(QSize(80, 80));
        mesa_9 = new QPushButton(frame);
        mesa_9->setObjectName(QStringLiteral("mesa_9"));
        mesa_9->setGeometry(QRect(60, 310, 111, 81));
        mesa_9->setCursor(QCursor(Qt::OpenHandCursor));
        mesa_9->setStyleSheet(QStringLiteral("background-color: transparent;"));
        mesa_9->setIconSize(QSize(80, 80));
        mesa_10 = new QPushButton(frame);
        mesa_10->setObjectName(QStringLiteral("mesa_10"));
        mesa_10->setGeometry(QRect(250, 310, 111, 81));
        mesa_10->setCursor(QCursor(Qt::OpenHandCursor));
        mesa_10->setStyleSheet(QStringLiteral("background-color: transparent;"));
        mesa_10->setIconSize(QSize(80, 80));
        mesa_11 = new QPushButton(frame);
        mesa_11->setObjectName(QStringLiteral("mesa_11"));
        mesa_11->setGeometry(QRect(420, 310, 111, 81));
        mesa_11->setCursor(QCursor(Qt::OpenHandCursor));
        mesa_11->setStyleSheet(QStringLiteral("background-color: transparent;"));
        mesa_11->setIconSize(QSize(80, 80));
        mesa_12 = new QPushButton(frame);
        mesa_12->setObjectName(QStringLiteral("mesa_12"));
        mesa_12->setGeometry(QRect(570, 310, 111, 81));
        mesa_12->setCursor(QCursor(Qt::OpenHandCursor));
        mesa_12->setStyleSheet(QStringLiteral("background-color: transparent;"));
        mesa_12->setIconSize(QSize(80, 80));
        paginas->addWidget(page);
        frame->raise();
        label_3->raise();
        line_2->raise();
        mesa_1->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        line_3 = new QFrame(page_2);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(90, 37, 671, 1));
        line_3->setStyleSheet(QStringLiteral("background-color:#707070;"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(1, 21, 89, 33));
        label_4->setStyleSheet(QLatin1String("font: 16pt \"MS Shell Dlg 2\";\n"
"font: 75 16pt \"Noto Serif\";\n"
"color: rgb(201, 37, 49);"));
        parilla = new QPushButton(page_2);
        parilla->setObjectName(QStringLiteral("parilla"));
        parilla->setGeometry(QRect(50, 100, 121, 111));
        parilla->setCursor(QCursor(Qt::OpenHandCursor));
        parilla->setStyleSheet(QStringLiteral("background-color: transparent;"));
        parilla->setIconSize(QSize(100, 100));
        ensalada = new QPushButton(page_2);
        ensalada->setObjectName(QStringLiteral("ensalada"));
        ensalada->setGeometry(QRect(230, 100, 121, 111));
        ensalada->setCursor(QCursor(Qt::OpenHandCursor));
        ensalada->setStyleSheet(QStringLiteral("background-color: transparent;"));
        ensalada->setIconSize(QSize(100, 100));
        mar = new QPushButton(page_2);
        mar->setObjectName(QStringLiteral("mar"));
        mar->setGeometry(QRect(390, 100, 121, 111));
        mar->setCursor(QCursor(Qt::OpenHandCursor));
        mar->setStyleSheet(QStringLiteral("background-color: transparent;"));
        mar->setIconSize(QSize(100, 100));
        sopa = new QPushButton(page_2);
        sopa->setObjectName(QStringLiteral("sopa"));
        sopa->setGeometry(QRect(550, 100, 121, 111));
        sopa->setCursor(QCursor(Qt::OpenHandCursor));
        sopa->setStyleSheet(QStringLiteral("background-color: transparent;"));
        sopa->setIconSize(QSize(100, 100));
        guarnicion = new QPushButton(page_2);
        guarnicion->setObjectName(QStringLiteral("guarnicion"));
        guarnicion->setGeometry(QRect(230, 310, 121, 111));
        guarnicion->setCursor(QCursor(Qt::OpenHandCursor));
        guarnicion->setStyleSheet(QStringLiteral("background-color: transparent;"));
        guarnicion->setIconSize(QSize(100, 100));
        reposteria = new QPushButton(page_2);
        reposteria->setObjectName(QStringLiteral("reposteria"));
        reposteria->setGeometry(QRect(390, 310, 121, 111));
        reposteria->setCursor(QCursor(Qt::OpenHandCursor));
        reposteria->setStyleSheet(QStringLiteral("background-color: transparent;"));
        reposteria->setIconSize(QSize(100, 100));
        infantil = new QPushButton(page_2);
        infantil->setObjectName(QStringLiteral("infantil"));
        infantil->setGeometry(QRect(550, 310, 121, 111));
        infantil->setCursor(QCursor(Qt::OpenHandCursor));
        infantil->setStyleSheet(QStringLiteral("background-color: transparent;"));
        infantil->setIconSize(QSize(100, 100));
        entrada = new QPushButton(page_2);
        entrada->setObjectName(QStringLiteral("entrada"));
        entrada->setGeometry(QRect(50, 310, 121, 111));
        entrada->setCursor(QCursor(Qt::OpenHandCursor));
        entrada->setStyleSheet(QStringLiteral("background-color: transparent;"));
        entrada->setIconSize(QSize(100, 100));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 220, 40, 20));
        label_2->setStyleSheet(QLatin1String("font: 75 italic 10pt \"Noto Serif\";\n"
"color: rgb(241, 241, 241);"));
        label_13 = new QLabel(page_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(110, 220, 55, 20));
        label_13->setStyleSheet(QLatin1String("font: 75 italic 10pt \"Noto Serif\";\n"
"color: rgb(201, 37, 49);"));
        label_14 = new QLabel(page_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(260, 220, 60, 20));
        label_14->setStyleSheet(QLatin1String("font: 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(241, 241, 241);\n"
"font: 75 italic 10pt \"Noto Serif\";"));
        label_15 = new QLabel(page_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(80, 430, 60, 20));
        label_15->setStyleSheet(QStringLiteral("color: rgb(241, 241, 241);font: 75 italic 10pt \"Noto Serif\";"));
        label_16 = new QLabel(page_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(420, 220, 30, 20));
        label_16->setStyleSheet(QStringLiteral("color: rgb(241, 241, 241);font: 75 italic 10pt \"Noto Serif\";"));
        label_17 = new QLabel(page_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(450, 220, 55, 20));
        label_17->setStyleSheet(QLatin1String("font: 75 italic 10pt \"Noto Serif\";\n"
"color: rgb(201, 37, 49);"));
        label_18 = new QLabel(page_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(560, 220, 60, 20));
        label_18->setStyleSheet(QStringLiteral("color: rgb(241, 241, 241);font: 75 italic 10pt \"Noto Serif\";"));
        label_19 = new QLabel(page_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(620, 220, 55, 20));
        label_19->setStyleSheet(QLatin1String("font: 75 italic 10pt \"Noto Serif\";\n"
"color: rgb(201, 37, 49);"));
        label_20 = new QLabel(page_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(570, 430, 55, 20));
        label_20->setStyleSheet(QStringLiteral("color: rgb(241, 241, 241);font: 75 italic 10pt \"Noto Serif\";"));
        label_21 = new QLabel(page_2);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(620, 430, 55, 20));
        label_21->setStyleSheet(QLatin1String("font: 75 italic 10pt \"Noto Serif\";\n"
"color: rgb(201, 37, 49);"));
        label_22 = new QLabel(page_2);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(250, 430, 90, 20));
        label_22->setStyleSheet(QLatin1String("color: rgb(241, 241, 241);\n"
"font: 75 italic 10pt \"Noto Serif\";"));
        label_23 = new QLabel(page_2);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(420, 430, 90, 20));
        label_23->setStyleSheet(QLatin1String("color: rgb(241, 241, 241);\n"
"font: 75 italic 10pt \"Noto Serif\";"));
        paginas->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        line_4 = new QFrame(page_3);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(180, 37, 580, 1));
        line_4->setStyleSheet(QStringLiteral("background-color:#707070;"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 20, 150, 31));
        label_5->setStyleSheet(QStringLiteral("font: 16pt \"MS Shell Dlg 2\";color: rgb(201, 37, 49);"));
        scrollArea = new QScrollArea(page_3);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 60, 750, 470));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 748, 468));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        menuParrila1 = new QGridLayout();
        menuParrila1->setObjectName(QStringLiteral("menuParrila1"));

        gridLayout_2->addLayout(menuParrila1, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        paginas->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        line_5 = new QFrame(page_4);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(119, 37, 641, 1));
        line_5->setStyleSheet(QStringLiteral("background-color:#707070;"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(page_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 20, 130, 31));
        label_6->setStyleSheet(QStringLiteral("font: 16pt \"MS Shell Dlg 2\";color: rgb(201, 37, 49);"));
        scrollArea_2 = new QScrollArea(page_4);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(0, 60, 750, 470));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 748, 468));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        menuEnsalada = new QGridLayout();
        menuEnsalada->setObjectName(QStringLiteral("menuEnsalada"));

        gridLayout_3->addLayout(menuEnsalada, 0, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        paginas->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        line_6 = new QFrame(page_5);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(89, 37, 671, 1));
        line_6->setStyleSheet(QStringLiteral("background-color:#707070;"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(page_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(0, 20, 100, 31));
        label_7->setStyleSheet(QStringLiteral("font: 16pt \"MS Shell Dlg 2\";color: rgb(201, 37, 49);"));
        scrollArea_3 = new QScrollArea(page_5);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(0, 60, 750, 470));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 748, 468));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        menuMar = new QGridLayout();
        menuMar->setObjectName(QStringLiteral("menuMar"));

        gridLayout_4->addLayout(menuMar, 0, 0, 1, 1);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);
        paginas->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        label_9 = new QLabel(page_6);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 20, 180, 31));
        label_9->setStyleSheet(QStringLiteral("font: 16pt \"MS Shell Dlg 2\";color: rgb(201, 37, 49);"));
        line_7 = new QFrame(page_6);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(159, 37, 601, 1));
        line_7->setStyleSheet(QStringLiteral("background-color:#707070;"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        scrollArea_4 = new QScrollArea(page_6);
        scrollArea_4->setObjectName(QStringLiteral("scrollArea_4"));
        scrollArea_4->setGeometry(QRect(1, 60, 750, 470));
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QStringLiteral("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 748, 468));
        gridLayout_5 = new QGridLayout(scrollAreaWidgetContents_4);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        menuSopa = new QGridLayout();
        menuSopa->setObjectName(QStringLiteral("menuSopa"));

        gridLayout_5->addLayout(menuSopa, 0, 0, 1, 1);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);
        paginas->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        label_10 = new QLabel(page_7);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 20, 160, 31));
        label_10->setStyleSheet(QLatin1String("color: rgb(201, 37, 49);font: 16pt \"MS Shell Dlg 2\";\n"
"font: 75 16pt \"Noto Serif\";"));
        line_8 = new QFrame(page_7);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(140, 30, 620, 16));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        scrollArea_6 = new QScrollArea(page_7);
        scrollArea_6->setObjectName(QStringLiteral("scrollArea_6"));
        scrollArea_6->setGeometry(QRect(0, 60, 750, 470));
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QStringLiteral("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 748, 468));
        gridLayout_7 = new QGridLayout(scrollAreaWidgetContents_6);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        menuEntradas = new QGridLayout();
        menuEntradas->setObjectName(QStringLiteral("menuEntradas"));

        gridLayout_7->addLayout(menuEntradas, 0, 0, 1, 1);

        scrollArea_6->setWidget(scrollAreaWidgetContents_6);
        paginas->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        label_11 = new QLabel(page_8);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(0, 20, 160, 31));
        label_11->setStyleSheet(QStringLiteral("color: rgb(201, 37, 49);font: 16pt \"MS Shell Dlg 2\";"));
        line_9 = new QFrame(page_8);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(190, 30, 570, 16));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        scrollArea_7 = new QScrollArea(page_8);
        scrollArea_7->setObjectName(QStringLiteral("scrollArea_7"));
        scrollArea_7->setGeometry(QRect(0, 60, 750, 470));
        scrollArea_7->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName(QStringLiteral("scrollAreaWidgetContents_7"));
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 748, 468));
        gridLayout_8 = new QGridLayout(scrollAreaWidgetContents_7);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        menuGuarnicion = new QGridLayout();
        menuGuarnicion->setObjectName(QStringLiteral("menuGuarnicion"));

        gridLayout_8->addLayout(menuGuarnicion, 0, 0, 1, 1);

        scrollArea_7->setWidget(scrollAreaWidgetContents_7);
        paginas->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        label_12 = new QLabel(page_9);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(0, 20, 130, 31));
        label_12->setStyleSheet(QStringLiteral("color: rgb(201, 37, 49);font: 16pt \"MS Shell Dlg 2\";"));
        line_10 = new QFrame(page_9);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setGeometry(QRect(160, 30, 600, 16));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        scrollArea_8 = new QScrollArea(page_9);
        scrollArea_8->setObjectName(QStringLiteral("scrollArea_8"));
        scrollArea_8->setGeometry(QRect(0, 60, 750, 470));
        scrollArea_8->setWidgetResizable(true);
        scrollAreaWidgetContents_8 = new QWidget();
        scrollAreaWidgetContents_8->setObjectName(QStringLiteral("scrollAreaWidgetContents_8"));
        scrollAreaWidgetContents_8->setGeometry(QRect(0, 0, 748, 468));
        gridLayout_9 = new QGridLayout(scrollAreaWidgetContents_8);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        menuReposteria = new QGridLayout();
        menuReposteria->setObjectName(QStringLiteral("menuReposteria"));

        gridLayout_9->addLayout(menuReposteria, 0, 0, 1, 1);

        scrollArea_8->setWidget(scrollAreaWidgetContents_8);
        paginas->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName(QStringLiteral("page_10"));
        label_239 = new QLabel(page_10);
        label_239->setObjectName(QStringLiteral("label_239"));
        label_239->setGeometry(QRect(0, 20, 160, 31));
        label_239->setStyleSheet(QStringLiteral("color: rgb(201, 37, 49);font: 16pt \"MS Shell Dlg 2\";"));
        line_11 = new QFrame(page_10);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setGeometry(QRect(190, 30, 570, 16));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        scrollArea_9 = new QScrollArea(page_10);
        scrollArea_9->setObjectName(QStringLiteral("scrollArea_9"));
        scrollArea_9->setGeometry(QRect(0, 60, 750, 470));
        scrollArea_9->setWidgetResizable(true);
        scrollAreaWidgetContents_9 = new QWidget();
        scrollAreaWidgetContents_9->setObjectName(QStringLiteral("scrollAreaWidgetContents_9"));
        scrollAreaWidgetContents_9->setGeometry(QRect(0, 0, 748, 468));
        gridLayout_10 = new QGridLayout(scrollAreaWidgetContents_9);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        menuInfantil = new QGridLayout();
        menuInfantil->setObjectName(QStringLiteral("menuInfantil"));

        gridLayout_10->addLayout(menuInfantil, 0, 0, 1, 1);

        scrollArea_9->setWidget(scrollAreaWidgetContents_9);
        paginas->addWidget(page_10);
        page_11 = new QWidget();
        page_11->setObjectName(QStringLiteral("page_11"));
        line_12 = new QFrame(page_11);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setGeometry(QRect(130, 30, 630, 16));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);
        label_270 = new QLabel(page_11);
        label_270->setObjectName(QStringLiteral("label_270"));
        label_270->setGeometry(QRect(0, 20, 160, 31));
        label_270->setStyleSheet(QStringLiteral("color: rgb(201, 37, 49);font: 16pt \"MS Shell Dlg 2\";"));
        coctel = new QPushButton(page_11);
        coctel->setObjectName(QStringLiteral("coctel"));
        coctel->setGeometry(QRect(150, 210, 121, 111));
        coctel->setCursor(QCursor(Qt::OpenHandCursor));
        coctel->setStyleSheet(QStringLiteral("background-color: transparent;"));
        coctel->setIconSize(QSize(100, 100));
        vino = new QPushButton(page_11);
        vino->setObjectName(QStringLiteral("vino"));
        vino->setGeometry(QRect(500, 210, 121, 111));
        vino->setCursor(QCursor(Qt::OpenHandCursor));
        vino->setStyleSheet(QStringLiteral("background-color: transparent;"));
        vino->setIconSize(QSize(100, 100));
        label_271 = new QLabel(page_11);
        label_271->setObjectName(QStringLiteral("label_271"));
        label_271->setGeometry(QRect(190, 330, 70, 20));
        label_271->setStyleSheet(QLatin1String("font: 75 italic 10pt \"Noto Serif\";\n"
"color: rgb(241, 241, 241);"));
        label_272 = new QLabel(page_11);
        label_272->setObjectName(QStringLiteral("label_272"));
        label_272->setGeometry(QRect(550, 330, 40, 20));
        label_272->setStyleSheet(QLatin1String("font: 75 italic 10pt \"Noto Serif\";\n"
"color: rgb(241, 241, 241);"));
        paginas->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName(QStringLiteral("page_12"));
        line_13 = new QFrame(page_12);
        line_13->setObjectName(QStringLiteral("line_13"));
        line_13->setGeometry(QRect(130, 30, 630, 16));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);
        label_273 = new QLabel(page_12);
        label_273->setObjectName(QStringLiteral("label_273"));
        label_273->setGeometry(QRect(0, 20, 110, 31));
        label_273->setCursor(QCursor(Qt::UpArrowCursor));
        label_273->setStyleSheet(QStringLiteral("color: rgb(201, 37, 49);font: 16pt \"MS Shell Dlg 2\";"));
        scrollArea_10 = new QScrollArea(page_12);
        scrollArea_10->setObjectName(QStringLiteral("scrollArea_10"));
        scrollArea_10->setGeometry(QRect(0, 110, 750, 420));
        scrollArea_10->setStyleSheet(QStringLiteral("border:none;"));
        scrollArea_10->setWidgetResizable(true);
        scrollAreaWidgetContents_10 = new QWidget();
        scrollAreaWidgetContents_10->setObjectName(QStringLiteral("scrollAreaWidgetContents_10"));
        scrollAreaWidgetContents_10->setGeometry(QRect(0, 0, 750, 420));
        gridLayout_11 = new QGridLayout(scrollAreaWidgetContents_10);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        menuCoteles = new QGridLayout();
        menuCoteles->setObjectName(QStringLiteral("menuCoteles"));

        gridLayout_11->addLayout(menuCoteles, 0, 0, 1, 1);

        scrollArea_10->setWidget(scrollAreaWidgetContents_10);
        layoutWidget = new QWidget(page_12);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 80, 751, 20));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QLatin1String("font: 75 italic 10pt \"Noto Serif\";\n"
"color: rgb(241, 241, 241);"));

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        label_24 = new QLabel(layoutWidget);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setStyleSheet(QLatin1String("font: 75 italic 10pt \"Noto Serif\";\n"
"color: rgb(241, 241, 241);"));

        gridLayout->addWidget(label_24, 0, 1, 1, 1);

        paginas->addWidget(page_12);
        page_13 = new QWidget();
        page_13->setObjectName(QStringLiteral("page_13"));
        label_540 = new QLabel(page_13);
        label_540->setObjectName(QStringLiteral("label_540"));
        label_540->setGeometry(QRect(10, 20, 71, 31));
        label_540->setStyleSheet(QStringLiteral("color: rgb(201, 37, 49);font: 16pt \"MS Shell Dlg 2\";"));
        line_26 = new QFrame(page_13);
        line_26->setObjectName(QStringLiteral("line_26"));
        line_26->setGeometry(QRect(110, 30, 640, 16));
        line_26->setFrameShape(QFrame::HLine);
        line_26->setFrameShadow(QFrame::Sunken);
        line_27 = new QFrame(page_13);
        line_27->setObjectName(QStringLiteral("line_27"));
        line_27->setGeometry(QRect(180, 372, 16, 18));
        line_27->setFrameShape(QFrame::VLine);
        line_27->setFrameShadow(QFrame::Sunken);
        scrollArea_5 = new QScrollArea(page_13);
        scrollArea_5->setObjectName(QStringLiteral("scrollArea_5"));
        scrollArea_5->setGeometry(QRect(1, 60, 750, 470));
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QStringLiteral("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 748, 468));
        gridLayout_6 = new QGridLayout(scrollAreaWidgetContents_5);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        menuVinos = new QGridLayout();
        menuVinos->setObjectName(QStringLiteral("menuVinos"));

        gridLayout_6->addLayout(menuVinos, 0, 0, 1, 1);

        scrollArea_5->setWidget(scrollAreaWidgetContents_5);
        paginas->addWidget(page_13);
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(60, 0, 1, 601));
        line->setStyleSheet(QStringLiteral("background-color:#707070;"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_14 = new QFrame(centralwidget);
        line_14->setObjectName(QStringLiteral("line_14"));
        line_14->setGeometry(QRect(0, 120, 60, 1));
        line_14->setStyleSheet(QStringLiteral("background-color:#707070;"));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);
        line_15 = new QFrame(centralwidget);
        line_15->setObjectName(QStringLiteral("line_15"));
        line_15->setGeometry(QRect(0, 0, 60, 1));
        line_15->setStyleSheet(QStringLiteral("background-color:#707070;"));
        line_15->setFrameShape(QFrame::HLine);
        line_15->setFrameShadow(QFrame::Sunken);
        line_17 = new QFrame(centralwidget);
        line_17->setObjectName(QStringLiteral("line_17"));
        line_17->setGeometry(QRect(0, 180, 60, 1));
        line_17->setStyleSheet(QStringLiteral("background-color:#707070;"));
        line_17->setFrameShape(QFrame::HLine);
        line_17->setFrameShadow(QFrame::Sunken);
        line_18 = new QFrame(centralwidget);
        line_18->setObjectName(QStringLiteral("line_18"));
        line_18->setGeometry(QRect(0, 60, 60, 1));
        line_18->setStyleSheet(QStringLiteral("background-color:#707070;"));
        line_18->setFrameShape(QFrame::HLine);
        line_18->setFrameShadow(QFrame::Sunken);
        line_16 = new QFrame(centralwidget);
        line_16->setObjectName(QStringLiteral("line_16"));
        line_16->setGeometry(QRect(0, 240, 60, 1));
        line_16->setStyleSheet(QStringLiteral("background-color:#707070;"));
        line_16->setFrameShape(QFrame::HLine);
        line_16->setFrameShadow(QFrame::Sunken);
        Principal_Mesero->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Principal_Mesero);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 21));
        Principal_Mesero->setMenuBar(menubar);
        statusbar = new QStatusBar(Principal_Mesero);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Principal_Mesero->setStatusBar(statusbar);

        retranslateUi(Principal_Mesero);

        paginas->setCurrentIndex(11);


        QMetaObject::connectSlotsByName(Principal_Mesero);
    } // setupUi

    void retranslateUi(QMainWindow *Principal_Mesero)
    {
        Principal_Mesero->setWindowTitle(QApplication::translate("Principal_Mesero", "MainWindow", Q_NULLPTR));
        mesas->setText(QString());
        comanda->setText(QString());
        bebidas->setText(QString());
        cuenta->setText(QString());
        label->setText(QString());
        label_3->setText(QApplication::translate("Principal_Mesero", "Mapa de piso ", Q_NULLPTR));
        mesa_1->setText(QString());
        mesa_2->setText(QString());
        mesa_3->setText(QString());
        mesa_4->setText(QString());
        mesa_5->setText(QString());
        mesa_6->setText(QString());
        mesa_7->setText(QString());
        mesa_8->setText(QString());
        mesa_9->setText(QString());
        mesa_10->setText(QString());
        mesa_11->setText(QString());
        mesa_12->setText(QString());
        label_4->setText(QApplication::translate("Principal_Mesero", "Platillos", Q_NULLPTR));
        parilla->setText(QString());
        ensalada->setText(QString());
        mar->setText(QString());
        sopa->setText(QString());
        guarnicion->setText(QString());
        reposteria->setText(QString());
        infantil->setText(QString());
        entrada->setText(QString());
        label_2->setText(QApplication::translate("Principal_Mesero", "De la ", Q_NULLPTR));
        label_13->setText(QApplication::translate("Principal_Mesero", "parrilla", Q_NULLPTR));
        label_14->setText(QApplication::translate("Principal_Mesero", "Ensalada", Q_NULLPTR));
        label_15->setText(QApplication::translate("Principal_Mesero", "Entradas", Q_NULLPTR));
        label_16->setText(QApplication::translate("Principal_Mesero", "Del ", Q_NULLPTR));
        label_17->setText(QApplication::translate("Principal_Mesero", "mar", Q_NULLPTR));
        label_18->setText(QApplication::translate("Principal_Mesero", "Sopas y", Q_NULLPTR));
        label_19->setText(QApplication::translate("Principal_Mesero", "pastas", Q_NULLPTR));
        label_20->setText(QApplication::translate("Principal_Mesero", "Men\303\272", Q_NULLPTR));
        label_21->setText(QApplication::translate("Principal_Mesero", "infantil", Q_NULLPTR));
        label_22->setText(QApplication::translate("Principal_Mesero", "Guarniciones", Q_NULLPTR));
        label_23->setText(QApplication::translate("Principal_Mesero", "Reposter\303\255a", Q_NULLPTR));
        label_5->setText(QApplication::translate("Principal_Mesero", "De la parrilla", Q_NULLPTR));
        label_6->setText(QApplication::translate("Principal_Mesero", "Ensaladas", Q_NULLPTR));
        label_7->setText(QApplication::translate("Principal_Mesero", "Del mar", Q_NULLPTR));
        label_9->setText(QApplication::translate("Principal_Mesero", "Sopas y pastas", Q_NULLPTR));
        label_10->setText(QApplication::translate("Principal_Mesero", "Entradas", Q_NULLPTR));
        label_11->setText(QApplication::translate("Principal_Mesero", "Guarniciones", Q_NULLPTR));
        label_12->setText(QApplication::translate("Principal_Mesero", "Reposteria", Q_NULLPTR));
        label_239->setText(QApplication::translate("Principal_Mesero", "Men\303\272 infantil", Q_NULLPTR));
        label_270->setText(QApplication::translate("Principal_Mesero", "Bebidas", Q_NULLPTR));
        coctel->setText(QString());
        vino->setText(QString());
        label_271->setText(QApplication::translate("Principal_Mesero", "Cocteles", Q_NULLPTR));
        label_272->setText(QApplication::translate("Principal_Mesero", "Vinos", Q_NULLPTR));
        label_273->setText(QApplication::translate("Principal_Mesero", "Cocteles", Q_NULLPTR));
        label_8->setText(QApplication::translate("Principal_Mesero", "                                      Con alcohol", Q_NULLPTR));
        label_24->setText(QApplication::translate("Principal_Mesero", "                                      Sin alcohol", Q_NULLPTR));
        label_540->setText(QApplication::translate("Principal_Mesero", "Vinos", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Principal_Mesero: public Ui_Principal_Mesero {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_MESERO_H

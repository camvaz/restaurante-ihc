#-------------------------------------------------
#
# Project created by QtCreator 2020-01-24T10:03:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Restaurante
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        Administrador/principal_administrador.cpp \
        Bartender/principal_bartender.cpp \
        Cajero/principal_cajero.cpp \
        Cocinero/principal_cocinero.cpp \
    Garrotero/principal_garrotero.cpp \
        Hostess/principal_hostess.cpp \
        Mesero/principal_mesero.cpp \
        main.cpp \
        mainwindow.cpp \

HEADERS += \
        Administrador/principal_administrador.h \
        Bartender/principal_bartender.h \
        Cajero/principal_cajero.h \
        Cocinero/principal_cocinero.h \
    Garrotero/principal_garrotero.h \
        Hostess/principal_hostess.h \
        Mesero/principal_mesero.h \
        mainwindow.h \

FORMS += \
        Administrador/principal_administrador.ui \
        Bartender/principal_bartender.ui \
        Cajero/principal_cajero.ui \
        Cocinero/principal_cocinero.ui \
    Garrotero/principal_garrotero.ui \
        Hostess/principal_hostess.ui \
        Mesero/principal_mesero.ui \
        mainwindow.ui \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=

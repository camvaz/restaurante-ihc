#-------------------------------------------------
#
# Project created by QtCreator 2020-01-24T10:03:34
#
#-------------------------------------------------

QT       += core gui sql

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
    Administrador/Reportes/GraficaVentas.cpp \
    Administrador/Reportes/Reportes.cpp \
    Administrador/crear_usuario.cpp \
    Administrador/inventario/Inventario.cpp \
    Administrador/mapa_piso_admin.cpp \
        Administrador/principal_administrador.cpp \
    Administrador/tarjeta_perfil_empleado.cpp \
    Administrador/ver_info_usuario.cpp \
    Administrador/widget_perfiles_usuarios.cpp \
        Bartender/principal_bartender.cpp \
        Cajero/principal_cajero.cpp \
        Cocinero/principal_cocinero.cpp \
    Garrotero/principal_garrotero.cpp \
    Hostess/mapa_de_piso.cpp \
        Hostess/principal_hostess.cpp \
    Login/Login.cpp \
    Login/LoginCuentas.cpp \
    Login/TarjetaCuentas.cpp \
    Mesero/confirmacion_comanda.cpp \
    Mesero/mensaje.cpp \
        Mesero/principal_mesero.cpp \
    Mesero/tarjetaplatillo.cpp \
        main.cpp \
        mainwindow.cpp \
    Mesero/mensajeconfirmar.cpp \
    Mesero/mensajecantidad.cpp

HEADERS += \
    Administrador/Reportes/GraficaVentas.h \
    Administrador/Reportes/Reportes.h \
    Administrador/crear_usuario.h \
    Administrador/inventario/Inventario.h \
    Administrador/mapa_piso_admin.h \
        Administrador/principal_administrador.h \
    Administrador/tarjeta_perfil_empleado.h \
    Administrador/ver_info_usuario.h \
    Administrador/widget_perfiles_usuarios.h \
        Bartender/principal_bartender.h \
        Cajero/principal_cajero.h \
        Cocinero/principal_cocinero.h \
    Garrotero/principal_garrotero.h \
    Hostess/mapa_de_piso.h \
        Hostess/principal_hostess.h \
    Login/Login.h \
    Login/LoginCuentas.h \
    Login/TarjetaCuentas.h \
    Mesero/confirmacion_comanda.h \
    Mesero/mensaje.h \
        Mesero/principal_mesero.h \
    Mesero/tarjetaplatillo.h \
        mainwindow.h \
    Mesero/mensajeconfirmar.h \
    Mesero/mensajecantidad.h

FORMS += \
    Administrador/Reportes/GraficaVentas.ui \
    Administrador/Reportes/Reportes.ui \
    Administrador/crear_usuario.ui \
    Administrador/inventario/Inventario.ui \
    Administrador/mapa_piso_admin.ui \
        Administrador/principal_administrador.ui \
    Administrador/tarjeta_perfil_empleado.ui \
    Administrador/ver_info_usuario.ui \
    Administrador/widget_perfiles_usuarios.ui \
        Bartender/principal_bartender.ui \
        Cajero/principal_cajero.ui \
        Cocinero/principal_cocinero.ui \
    Garrotero/principal_garrotero.ui \
    Hostess/mapa_de_piso.ui \
        Hostess/principal_hostess.ui \
    Login/Login.ui \
    Login/LoginCuentas.ui \
    Login/TarjetaCuentas.ui \
    Mesero/confirmacion_comanda.ui \
    Mesero/mensaje.ui \
        Mesero/principal_mesero.ui \
    Mesero/tarjetaplatillo.ui \
        mainwindow.ui \
    Mesero/mensajeconfirmar.ui \
    Mesero/mensajecantidad.ui


#INCLUDEPATH += "C:/Users/rober/Downloads/OChart/include"

#LIBS += -L"C:/Users/rober/Downloads/OChart/lib"

#LIBS += -lopenchartplugin

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=

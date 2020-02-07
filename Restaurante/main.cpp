#include "mainwindow.h"
#include <QApplication>
#include <Login/LoginCuentas.h>
#include <Administrador/inventario/Inventario.h>
#include <Administrador/principal_administrador.h>
#include "Administrador/Reportes/GraficaVentas.h"
#include "Administrador/Reportes/Reportes.h"
#include <Login/Login.h>
#include <QSqlDatabase>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");
   // MainWindow w;
   // w.show();
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setPort(3306);
    database.setDatabaseName("restaurante");
    database.setUserName("root");
    database.setPassword("password");
    if(!database.open()){
        qDebug()<<database.lastError().text();
    }
    else {
        qDebug()<<"Base de datos conectada";
    }

    Reportes w;
    w.show();

    GraficaVentas u;
    u.show();



    return a.exec();
}

#include "mainwindow.h"
#include <QApplication>
#include <Login/LoginCuentas.h>
#include <Administrador/inventario/Inventario.h>
#include <Administrador/principal_administrador.h>
#include "Administrador/Reportes/GraficaVentas.h"
#include "Administrador/Reportes/Reportes.h"
#include <Login/Login.h>
#include <QSqlDatabase>
#include <Mesero/principal_mesero.h>
#include <Mesero/confirmacion_comanda.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //a.setStyle("fusion");
   // MainWindow w;
   // w.show();

    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setDatabaseName("restaurante");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setPassword("password");
//    database.setPassword("xamppadampa");
    database.setPort(3306);
    if(!database.open()){
        qDebug()<<database.lastError().text();
    }
    else {
        qDebug()<<"Base de datos conectada";
    }

    Login w;
    w.show();


    return a.exec();
}

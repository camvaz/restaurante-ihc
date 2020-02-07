#include "mainwindow.h"
#include <QApplication>
#include <Login/LoginCuentas.h>
#include <Login/Login.h>
#include <QSqlDatabase>
#include <Administrador/principal_administrador.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
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
    else{
        qDebug()<<"Base de datos conectada";
    }

    principal_administrador w;
    w.show();
    return a.exec();
}

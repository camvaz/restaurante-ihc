#include "mainwindow.h"
#include <QApplication>
#include <Administrador/principal_administrador.h>
#include <Mesero/principal_mesero.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // MainWindow w;
   // w.show();
    //principal_administrador w;
    //w.show();

   Principal_Mesero l;
   l.show();
    return a.exec();
}

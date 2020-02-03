#include "mainwindow.h"
#include <QApplication>
#include <Administrador/principal_administrador.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // MainWindow w;
   // w.show();
    principal_administrador w;
    w.show();


    return a.exec();
}

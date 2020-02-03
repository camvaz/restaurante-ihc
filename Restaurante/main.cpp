#include "mainwindow.h"
#include <QApplication>
#include <Mesero/principal_mesero.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
   Principal_Mesero m;
       m.show();
    return a.exec();
}

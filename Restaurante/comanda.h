#ifndef COMANDA_H
#define COMANDA_H

#include <QString>

class Comanda
{
    int numComanda;
    QString fecha;
    int numMesa;
    int numComensales; //
    int numMesero;
    int tipoServicio;
    int tiempoServicio;

public:
    Comanda();
};

#endif // COMANDA_H

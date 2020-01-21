#ifndef CUENTA_H
#define CUENTA_H

#include <QString>

class Cuenta
{
    int numComanda;
    //lista productos consumidos
    float total;
    int formaPago;
    QString fecha;
public:
    Cuenta();
};

#endif // CUENTA_H

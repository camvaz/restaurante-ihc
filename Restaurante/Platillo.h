#ifndef PLATILLO_H
#define PLATILLO_H
#include <QString>


class Platillo
{
public:
    Platillo();
private:
    QString     *ingredientes;
    QString     nombre;
    float       precio;

    void verPlatillo();
};

#endif // PLATILLO_H

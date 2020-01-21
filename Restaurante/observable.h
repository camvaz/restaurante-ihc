#ifndef OBSERVABLE_H
#define OBSERVABLE_H
#include <observer.h>

class Observable
{
public:
    Observable();
       virtual void registrar(Observer *observer) = 0;
       virtual void remover(Observer *observer) = 0;
       virtual void notificar() = 0;
};

#endif // OBSERVABLE_H

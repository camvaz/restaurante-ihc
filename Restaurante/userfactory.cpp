#include "userfactory.h"

UserFactory::UserFactory()
{

}

UserFactory* UserFactory:: build(){
    return new UserFactory();
    //Espacio para crear demas objetos
}

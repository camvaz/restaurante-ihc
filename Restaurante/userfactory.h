#ifndef USERFACTORY_H
#define USERFACTORY_H

class UserFactory
{
private:
public:
    UserFactory();
    static UserFactory *build();
};


#endif // USERFACTORY_H

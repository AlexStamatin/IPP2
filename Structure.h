#ifndef Structure_H
#define Structure_H
#include "Damage.h"
#include <iostream>

class Structure{

protected:
    DamageDealer dealer;

    Structure(DamageDealer deal):delaer(deal){}

    virtual void attack()= 0;
    virtual void doubleDamage() = 0;

};


#endif // Structure_H

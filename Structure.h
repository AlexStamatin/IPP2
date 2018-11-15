#ifndef Structure_H
#define Structure_H
#include "DamageDealer.h"
#include <iostream>

class Structure{

protected:
    DamageDealer* dealer;

    Structure(DamageDealer* deal):dealer(deal){}
public:
    virtual void attack()= 0;
    virtual void doubleDamage() = 0;

};


#endif // Structure_H

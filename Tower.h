#ifndef Tower_H
#define Tower_H
#include "Structure.h"

class Tower:public Structure{

float damage;

public:
    Tower(float dmg,DamageDealer* deal):damage(dmg),Structure(deal){}

    virtual void attack() override{

    dealer->dealDamage(this->damage);
    }

    virtual void doubleDamage() override{
        damage *=2;
    }
};
#endif // Tower_H

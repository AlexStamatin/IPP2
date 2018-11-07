#ifndef HeroAdapter_H
#define HeroAdapter_H
#include "OldHero.cpp"
#include "Hero.h"
#include <iostream>

class HeroAdapter: public Hero, private OldHero{

public:
    HeroAdapter(float base, float variation):OldHero(base-variation,base+variation){}

virtual float averageDamage() override {

   avgDMG();

}

};

#endif // HeroAdapter_H

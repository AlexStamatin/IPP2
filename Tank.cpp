#ifndef Tank_H
#define Tank_H
#include "AttackVehicle.h"
#include <iostream>

using namespace std;

class Tank: public AttackVehicle{

float mainGun;
public:
    Tank(float gun):mainGun(gun){}

    virtual void damageSources() override{
    cout<<"Main Gun: "<<mainGun<<" DPS"<<endl;
    }

};

#endif // Tank_H

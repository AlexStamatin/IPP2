#ifndef LaserDecorator_H
#define LaserDecorator_H
#include "Decorator.cpp"
#include <iostream>
using namespace std;
class LaserDecorator: public Decorator{

public:

    LaserDecorator(AttackVehicle* veh):Decorator(veh){}

    virtual void damageSources() override{
        Decorator::damageSources();
        cout<<"Laser: 250 DPS"<<endl;
    }

};

#endif // LaserDecorator_H

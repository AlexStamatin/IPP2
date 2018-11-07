#ifndef RocketDecorator_H
#define RocketDecorator_H
#include "Decorator.cpp"
#include <iostream>

using namespace std;
class RocketDecorator: public Decorator{

public:
    RocketDecorator(AttackVehicle* veh):Decorator(veh){}

    virtual void damageSources() override{

    Decorator::damageSources();
    cout<<"Rocket Launcher: 100 DPS"<<endl;

    }


};

#endif // RocketDecorator_H

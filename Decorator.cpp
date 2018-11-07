#ifndef Decorator_H
#define Decorator_H
#include "AttackVehicle.h"
class Decorator: public AttackVehicle{

AttackVehicle* veh;

public:

    Decorator(AttackVehicle* vehicle):veh(vehicle){}

    virtual void damageSources() override{
    veh->damageSources();
    }
};
#endif // Decorator_H

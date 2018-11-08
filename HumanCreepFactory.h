#ifndef HumanCreepFactory_H
#define HumanCreepFactory_H
#include "CreepFactory.h"
class HumanCreepFactory: public CreepFactory{

public:
    virtual Creep spawnCreep() override{
        return new HumanCreep();
    }
};

#endif // HumanCreepFactory_J

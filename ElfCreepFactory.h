#ifndef ElfCreepFactory_H
#define ElfCreepFactory_H
#include "ElfCreep.cpp"
#include "CreepFactory.h"
class ElfCreepFactory: public CreepFactory{

public:
    virtual Creep* spawnCreep() override{
        return new ElfCreep();
    }
};
#endif // ElfCreepFactory_H

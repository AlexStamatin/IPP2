#ifndef CreepFactory_H
#define CreepFactory_H
#include "Creep.h"
class CreepFactory{
public:
 virtual Creep* spawnCreep() = 0;

};

#endif // CreepFactory_H


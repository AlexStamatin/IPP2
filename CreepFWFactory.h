#ifndef CreepFWFactory_H
#define CreepFWFactory_H
#include "Creep.h"
class CreepFWFactory {
public:
    enum Race {Human,Elf};
    virtual Creep* getRace(Race r) = 0;

};


#endif // CreepFWFactory_H

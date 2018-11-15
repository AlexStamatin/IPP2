#ifndef CreepRaceFWFactory_H
#define CreepRaceFWFactory_H
#include "CreepFactory.h"
#include "ElfCreepFactory.h"
#include "HumanCreepFactory.h"
#include "CreepFWFactory.h"
#include <map>
#include "Creep.h"
class CreepRaceFWFactory: public CreepFWFactory
{
    map<Race, Creep*> cache;

public:

    Creep* getRace(Race r) override
    {
        if (cache.count(r) == 0)
        {
            CreepFactory* cfact;
            if (r == Race::Elf)
            {
                cfact = new ElfCreepFactory();
            }
            else
            {
                cfact = new HumanCreepFactory();
            }
            cache.insert(make_pair(r,cfact->spawnCreep()));
        }
        return cache.at(r);
    }
};


#endif // CreepRaceFWFactory_H

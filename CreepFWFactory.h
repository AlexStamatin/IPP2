#ifndef CreepFWFactory_H
#define CreepFWFactory_H

class CreepFWFactory {

    enum Race {Human,Race};
    virtual Creep getRace(Race r) = 0;

};


#endif // CreepFWFactory_H

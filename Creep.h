#ifndef Creep_H
#define Creep_H
#include "CustomCreep.cpp"

class Creep{
public:
    virtual float unitCost(CustomCreep* cust) = 0;
    virtual void printStats(CustomCreep* cust) = 0;

};

#endif // Creep_H

#ifndef HumanCreep_H
#define HumanCreep_H
#include "Creep.h"
#include "CustomCreep.cpp"
class HumanCreep: public Creep{

    float baseCost = 100;

    float customCost(CustomCreep* cust)
    {
        if (cust->getMoveSpeed() > 200)
        {
            return 50;
        }
        else
        {
            return 25;
        }
    }
public:
    float unitCost(CustomCreep* cust) override{
        return baseCost + customCost(cust);
    }
    void printStats(CustomCreep* cust) override{
    cust->printCustom();
    }


};


#endif // HumanCreep_H

#ifndef ElfCreep_H
#define ElfCreep_H
#include "Creep.h"
#include "CustomCreep.cpp"

class ElfCreep: public Creep{

    float baseCost = 200;

    float customCost(CustomCreep* cust){

    if (cust->getArmortype() == "Normal")
    {
        return 100;
    }
    else{
        return 200;
    }

    }
public:
    float unitCost(CustomCreep* cust) override{
        return baseCost+customCost(cust);
    }
    void prinStats(CustomCreep* cust) {
        cust->printCustom();
    }



};



#endif // ElfCreep

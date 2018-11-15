#ifndef CustomRaceCreep_H
#define CustomRaceCreep_H
#include "CustomCreep.cpp"
#include <iostream>

using namespace std;
class CustomRaceCreep: public CustomCreep
{
    int movespeed;
    string armourtype;
public:
    CustomRaceCreep(int ms, string arm):movespeed(ms),armourtype(arm){}

    virtual int getMoveSpeed() override{
        return movespeed;
    }

    virtual string getArmortype() override{
        return armourtype;
    }
    virtual void printCustom() override{
        cout<<"Movement Speed: "<<this->movespeed<<endl;
        cout<<"Armour type: "<<this->armourtype<<endl;
    }
};


#endif // CustomRaceCreep_H

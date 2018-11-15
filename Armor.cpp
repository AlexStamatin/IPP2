#ifndef Armor_H
#define Armor_H
#include <iostream>
using namespace std;
class Armor{

int amount;

public:
    void setArmor(int lvl)
    {
        amount = 2*lvl;
        cout<<"Setting Armor to: "<<amount<<endl;
    }
    float dealtdmg(float dmg)
    {
        cout<<"Dealt damage calculated: "<<(dmg - (amount/100)*dmg)<<endl;
        return (dmg - (amount/100)*dmg);
    }


};
#endif // Armor_H

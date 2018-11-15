#ifndef Weapons_H
#define Weapons_H
#include <iostream>
using namespace std;
class Weapons{

float basedmg = 100;
int critMulti = 1;

public:
    void setDamage(int lvl)
    {
        basedmg = lvl*100;
        cout<<"Setting damage to: "<<basedmg<<endl;
    }
    void setCrit(int lvl)
    {
        critMulti = lvl+1;
        cout<<"Setting Critical Multiplication to: "<<critMulti<<endl;
    }

};


#endif // Weapons_H

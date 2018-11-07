#ifndef MagicDamageDealer_H
#define MagicDamageDealer_H
#include "DamageDealer.h"
#include <iostream>
using namespace std;

class MagicDamageDealer: public DamageDealer{


virtual void dealDamage(float amount) override{
cout<<"Dealing "<<amount<<" magic damage"<<endl;

}

};


#endif // MagicDamageDealer_H

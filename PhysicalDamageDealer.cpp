#ifndef PhysicalDamageDealer_H
#define PhysicalDamageDealer_H
#include "DamageDealer.h"
#include <iostream>
using namespace std;
class PhysicalDamageDealer: public DamageDealer{


virtual void dealDamage(float amount) override{
cout<<"Dealing "<<amount<<" physical damage"<<endl;

}

};


#endif // MagicDamageDealer_H

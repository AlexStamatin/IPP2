#ifndef OldHero_H
#define OldHero_H
#include <iostream>
using namespace std;
class OldHero{

float lowDamage = 0;
float highDamage = 0;
public:
OldHero(float low, float high):lowDamage(low),highDamage(high){}

virtual float avgDMG()
{
    float avg = (this->lowDamage+this->highDamage)/2;
    cout<<"Hero average damage: "<<avg<<endl;
    return avg;
}

};

#endif // OldHero_H

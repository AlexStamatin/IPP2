#ifndef CustomCreep_H
#define CustomCreep_H
#include <string>

using namespace std;
class CustomCreep{
public:
    virtual int getMoveSpeed() = 0;
    virtual string getArmortype() = 0;

    virtual void printCustom() = 0;


};

#endif // CustomCreep_H

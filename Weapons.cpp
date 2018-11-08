#ifndef Weapons_H
#define Weapons_H

class Weapons{

float basedmg = 100;
int critMulti = 1;

public:
    void setDamage(int lvl)
    {
        basedmg = lvl*100;
    }
    void setCrit(int lvl)
    {
        critMulti = lvl;
    }

};


#endif // Weapons_H

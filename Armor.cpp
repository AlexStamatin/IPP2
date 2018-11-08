#ifndef Armor_H
#definde Armor_H

class Armor{

int amount;

public:
    void setArmor(int lvl)
    {
        amount = 2*lvl;
    }
    float dealtdmg(float dmg)
    {
        return (dmg - (amount/100)*dmg);
    }


};
#endif // Armor_H

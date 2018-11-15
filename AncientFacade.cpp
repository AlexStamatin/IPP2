#ifndef AncientFacade_H
#define AncientFacade_H
#include "Weapons.cpp"
#include "Armor.cpp"
#include "Body.cpp"
class AncientFacade{

Weapons wp;
Armor def;
Body bd;

public:

    void initialize()
    {
        wp.setDamage(1);
        wp.setCrit(1);
        def.setArmor(1);
        bd.growBody();
    }

};

#endif // AncientFacade_H

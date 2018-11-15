#include <iostream>
//Adapter
#include "Hero.h"
#include "HeroAdapter.cpp"
//Bridge
#include "Tower.h"
#include "Structure.h"
#include "PhysicalDamageDealer.cpp"
#include "MagicDamageDealer.cpp"
//Decorator
#include "AttackVehicle.h"
#include "RocketDecorator.cpp"
#include "LaserDecorator.cpp"
#include "Tank.cpp"
//Flyweight
#include "CreepFWFactory.h"
#include "CreepRaceFWFactory.cpp"
#include "CustomRaceCreep.cpp"
//Facade
#include "AncientFacade.cpp"


class TestFacade
{
    AncientFacade* fac = new AncientFacade();

public:
    void testfac()
    {
        fac->initialize();
    }

};


class TestFlyweight
{
    CreepFWFactory* fact = new CreepRaceFWFactory();
    Creep* elfc = fact->getRace(CreepFWFactory::Race::Elf);
    Creep* humc = fact->getRace(CreepFWFactory::Race::Human);
    Creep* hum2c = fact->getRace(CreepFWFactory::Race::Human);
    CustomCreep* cust1 = new CustomRaceCreep(100,"Normal");
    CustomCreep* cust2 = new CustomRaceCreep(200,"Fortified");
    CustomCreep* cust3 = new CustomRaceCreep(250,"Divine");


public:
    void testfly()
    {
        if (humc == hum2c)
        {
            cout<<"Same Objects"<<endl;
        }

        cout<<"Elf Creep customization 1 cost: "<<elfc->unitCost(cust1)<<endl;
        cout<<"Elf Creep customization 2 cost: "<<elfc->unitCost(cust2)<<endl;

        cout<<"Human Creep customization 1: "<<endl;humc->printStats(cust1);cout<<endl;
        cout<<"Human Creep customization 2: "<<endl;humc->printStats(cust2);cout<<endl;
    }
};


class TestDecorator
{
    AttackVehicle* veh = new RocketDecorator(new LaserDecorator(new Tank(75)));

public:
    void testdecor()
    {
        veh->damageSources();
    }

};




class TestBridge
{
    Structure* structs [2] =  {
    new Tower(100, new PhysicalDamageDealer()),
    new Tower(150, new MagicDamageDealer())

    };
public:
    void testbd()
    {
        structs[0]->attack();
        structs[1]->doubleDamage();
        structs[1]->attack();
    }
};



class TestAdapter
{
    Hero* h;
    public:
    void testadapt()
    {
        h = new HeroAdapter(100,5);
        h->averageDamage();
    }
};


void testPatterns()
{
    TestAdapter ta;
    TestBridge tb;
    TestDecorator td;
    TestFlyweight tf;
    TestFacade tfac;


    ta.testadapt();
    tb.testbd();
    td.testdecor();
    tf.testfly();
    tfac.testfac();

}

using namespace std;



int main()
{
    testPatterns();
    return 0;
}

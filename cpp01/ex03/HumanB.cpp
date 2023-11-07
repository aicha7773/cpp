#include "HumanB.hpp"

HumanB::HumanB(std::string n) : name(n) , WT(NULL) {
    std::cout << "a constructor Human B has been called"<<std::endl;
}

void HumanB::setWeapon(Weapon &weap)
{
    WT = &weap;
}

void HumanB::attack()
{
    if (!WT)
        return;
    std::cout<<name<<" attacks with their "<<WT->getType()<<std::endl;
}

HumanB::~HumanB(){
    std::cout << "a desstructor human B has been called"<<std::endl;
}

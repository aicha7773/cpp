#include "HumanB.hpp"

HumanB::HumanB(std::string n) : name(n) , WT(NULL) {
}

void HumanB::setWeapon(Weapon weap)
{
    WT = &weap;
}

void HumanB::attack()
{
    std::cout<<name<<" attacks with their "<<WT->getType()<<std::endl;
}

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon *type) : name(n), WT(type) {
}

void HumanA::attack()
{
    std::cout<<name<<" attacks with their "<<WT->getType()<<std::endl;
}

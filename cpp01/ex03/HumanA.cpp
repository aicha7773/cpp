#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &type) : name(n), WT(type) 
{
    std::cout << "a constructor human A has been called"<<std::endl;
}

void HumanA::attack()
{
    std::cout<<name<<" attacks with their "<<WT.getType()<<std::endl;
}

HumanA::~HumanA(){
    std::cout << "a desstructor human A has been called"<<std::endl;
}

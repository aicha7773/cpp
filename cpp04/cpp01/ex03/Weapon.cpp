#include"Weapon.hpp"

Weapon::Weapon(std::string t)
{
    std::cout << "a constructor weapon has been called"<<std::endl;
    type = t;
}

std::string &Weapon::getType()
{
    return type;
}

void Weapon::setType(std::string t)
{
    type = t;
}

Weapon::~Weapon()
{
    std::cout << "a destructor weapon has been called"<<std::endl;
}

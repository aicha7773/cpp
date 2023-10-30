#include"Weapon.hpp"

Weapon::Weapon(std::string t)
{
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

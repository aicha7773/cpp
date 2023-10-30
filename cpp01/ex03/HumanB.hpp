#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon *WT;
    public:
        HumanB(std::string n);
        void setWeapon(Weapon WT);
        void attack();
};

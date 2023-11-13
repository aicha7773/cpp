#pragma once

#include <iostream>
#include"Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon WT;
    public:
        HumanA(std::string n, Weapon &WT);
        void attack();
        ~HumanA();
};

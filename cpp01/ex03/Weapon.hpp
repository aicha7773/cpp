#pragma once

#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        std::string &getType();
        void setType(std::string type);
};

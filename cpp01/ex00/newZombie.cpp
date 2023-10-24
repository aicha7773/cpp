#include "Zombie.hpp"

Zombie* newZombie( std::string name)
{
    Zombie *ret(name);
    ret = new Zombie;
    // ret->setter(name);
    // ret->announce();
    return ret;
}

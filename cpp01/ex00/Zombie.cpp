#include "Zombie.hpp"

void Zombie::setter(std::string n)
{
    name = n;
}

Zombie::Zombie(std::string n)
{
    name = n;
    announce();
}

void Zombie::announce()
{
    std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}
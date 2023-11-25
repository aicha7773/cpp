#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "a constructor has been called"<<std::endl;
}

Zombie::Zombie(std::string n)
{
    std::cout << "a constructor has been called by the Zombie : "<< n<<std::endl;
    name = n;
}

void Zombie::Zombie_set(std::string n)
{
    name = n;
}

void Zombie::announce()
{
    std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::~Zombie()
{
    std::cout << "a destructor has been called by the Zombie : "<< name <<std::endl;
}

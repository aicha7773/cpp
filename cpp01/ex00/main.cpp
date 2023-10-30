#include "Zombie.hpp"

int main()
{
    Zombie *z=newZombie("oooops");
    z->announce();
    randomChump("hello");
    delete z;
}

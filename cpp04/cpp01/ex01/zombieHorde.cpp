#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i=0;
    if (N < 0)
        return NULL;
    Zombie *horde = new Zombie[N];

    while(i < N)
    {
        horde[i].Zombie_set(name);
        i++;
    }
    return horde;
}

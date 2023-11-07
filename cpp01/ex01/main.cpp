#include "Zombie.hpp"

int main()
{
    int i=0;
    Zombie *z= zombieHorde(4, "hord");
    while(i < 4)
    {
       z[i].announce();
        i++;
    }
    delete[] z;
}

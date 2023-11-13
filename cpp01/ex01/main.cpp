#include "Zombie.hpp"

int main()
{
    int i=0;
    Zombie *z= zombieHorde(5, "hord");
    if (!z)
        return 0;
    while(i < 3)
    {
       z[i].announce();
        i++;
    }
    delete[] z;
}

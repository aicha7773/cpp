#include "Zombie.hpp"

int main()
{
    Zombie *z= zombieHorde(4, "hord");
    delete[] z;
}

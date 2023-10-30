#include "sed.hpp"

int main(int ac, char **av)
{
    if (ac == 4)
    {
        replace(av);
    }
    else
        std::cout<<"not exact arument number\n";
    return 0;
}
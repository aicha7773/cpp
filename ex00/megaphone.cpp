#include <iostream>

int main(int ac, char **av)
{
    int i=1;
    int j=0;

    if (ac == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while(av[i])
    {
        j=0;
        while(av[i][j])
        {
            if((av[i][j] >= 'a' && av[i][j] <= 'z'))
                av[i][j]-=32;
            std::cout<<av[i][j];
            j++;
        }
        i++;
    }
    std::cout<<std::endl;
    return 0;
}
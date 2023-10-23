#include "phonebook.hpp"

int test(std::string str)
{
    unsigned long i=0;
    if (str.empty())
        return 1;
    while(i < str.length())
    {
        if (str[i] < '0' || str[i] > '9')
            return 1;
        i++;
    }
    return 0;
}

void    add(contact *contacts,int indice)
{
    int i=indice;
    std::string str;

    if (indice >= 8)
        i = indice - (8 * (indice / 8));
    while(str.empty())
    {
        std::cout<<"tap the first name\n";
        std::cin>>str;
        if (str.empty())
            exit(0);
        contacts[i].set_first(str);
    }
    // str = "";
    // while(str.empty())
    // {
    //     std::cout<<"tap the last name\n";
    //     std::cin>>str;
    //     if (str.empty())
    //         exit(0);
    //     contacts[i].set_last(str);
    // }
    // str = "";
    // while(str.empty())
    // {
    //     std::cout<<"tap the nickname\n";
    //     std::cin>>str;
    //     if (str.empty())
    //         exit(0);
    //     contacts[i].set_nickname(str);
    // }
    // str = "";
    // while(str.empty())
    // {
    //     std::cout<<"tap the darkest secret\n";
    //     std::cin>>str;
    //     if (str.empty())
    //         exit(0);
    //     contacts[i].set_secret(str);
    // }
    // str = "";
    // while(test(str))
    // {
    //     std::cout<<"tap the number\n";
    //     std::cin>>str;
    //     if (str.empty())
    //         exit(0);
    //     contacts[i].set_number(str);
    // }
}

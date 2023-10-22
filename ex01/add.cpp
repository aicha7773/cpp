#include "phonebook.hpp"

void    add(contact *contacts,int indice)
{
    int i=indice;
    std::string str;

    if (indice>=3)
        i = indice - (3 * (indice / 3));
    std::cout<<"i ="<<i<<"indice = "<<indice<<std::endl;
    while(str.empty())
    {
        std::cout<<"tap the first name\n";
        std::cin>>str;
        contacts[i].set_first(str);
    }
    str="";
    while(str.empty())
    {
        std::cout<<"tap the last name\n";
        std::cin>>str;
        contacts[i].set_last(str);
    }
    str="";
    while(str.empty())
    {
        std::cout<<"tap the nickname\n";
        std::cin>>str;
        contacts[i].set_nickname(str);
    }
    str="";
    while(str.empty())
    {
        std::cout<<"tap the darkest secret\n";
        std::cin>>str;
        contacts[i].set_secret(str);  
    }
    str="";
    while(str.empty())
    {
        std::cout<<"tap the number\n";
        std::cin>>str;
        contacts[i].set_number(str);  
    }
}

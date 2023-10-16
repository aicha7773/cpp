#include "phonebook.hpp"

void    add(contact *contacts,int indice)
{
    int i=indice;

    if (indice>=8)
        i=0;
    while(contacts[i].first_name.empty())
    {
        std::cout<<"tap the first name\n";
        std::cin>>contacts[i].first_name;
    }
    while(contacts[i].last_name.empty())
    {
        std::cout<<"tap the last name\n";
        std::cin>>contacts[i].last_name;
    }
    while(contacts[i].nickname.empty())
    {
        std::cout<<"tap the nickname\n";
        std::cin>>contacts[i].nickname;
    }
    while(contacts[i].darkest_secret.empty())
    {
        std::cout<<"tap the darkest secret\n";
        std::cin>>contacts[i].darkest_secret;
    }
    while(contacts[i].number.empty())
    {
        std::cout<<"tap the darkest secret\n";
        std::cin>>contacts[i].number;
    }
}

#include "phonebook.hpp"

int main()
{
    std::string str;
    contact contacts[8];
    int indice=0;
    while (1)
    {
        std::cout << "give an order: ";
        std::cin>>str;
        if(str.empty())
            break;
        if (str == "ADD")
        {
            add(contacts,indice);
            indice++;
        }
        else if(str == "SEARCH")
            search(contacts, indice);
        else if (str == "EXIT")
            break;
    }
}

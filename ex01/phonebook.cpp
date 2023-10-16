#include "phonebook.hpp"

int main()
{
    std::string str;
    contact contacts[8];
    int indice=0;
    while (1)
    {
        std::cin>>str;
        if (str == "ADD")
        {
            add(contacts,indice);
            indice++;
        }
        else if(str == "SEARCH")
            search(contacts);
        else if (str == "EXIT")
            break;
        else
        {
            std::cout << "there is an ERROR !!!!!\n";
            break;
        }
    }
}

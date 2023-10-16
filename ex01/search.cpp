# include "phonebook.hpp"

void search(contact *contacts)
{
    int i = 0;

    std::string str;
    while (str.empty())
    {
        std::cout<<"give me a name\n";
        std::cin>>str;
    }
    while (i < 8)
    {
        if (str == contacts[i].first_name)
        {
            std::cout << "first name: "<<std::cout<<contacts[i].first_name<<std::endl;
            std::cout << "last name: "<<std::cout<<contacts[i].last_name<<std::endl;
            std::cout << "nickname name: "<<std::cout<<contacts[i].nickname<<std::endl;
            std::cout << "darkest secret: "<<std::cout<<contacts[i].darkest_secret<<std::endl;
            std::cout << "number: "<<std::cout<<contacts[i].number<<std::endl;
            break;
        }
        i++;
    }
}


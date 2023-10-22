# include "phonebook.hpp"

void    put_str(std::string str)
{
    unsigned long i = 0;
    if (str.length() >= 10)
    {
        while (i < 9)
        {
            std::cout<<str[i];
            i++;
        }
        std::cout<<".|";
        return ;
    }
    i = 0;
    if (str.length() < 10)
    {
        while(i < (10 - str.length()))
        {
            std::cout <<" ";
            i++;
        }
    }
    std::cout<<str<<"|";
}

void search(contact *contacts , int indice)
{
    int i = 0;
    int in = -1;

    std::cout<<"index|first name| last name| nick name\n";
    std::cout<<"-----|----------|----------|----------\n";
    if (indice >= 3)
        indice = 3;
    if (indice == 0)
        return ;
    while (i < indice)
    {
        std::cout<<"    "<<i<<"|";
        put_str(contacts[i].get_first());
        put_str(contacts[i].get_last());
        put_str(contacts[i].get_nickname());
        std::cout<<std::endl;
        i++;
    }
    while (in < 0 || in >= indice)
    {
        std::cout<<"give me an indice\n";
        std::cin>>in;
    }
    std::cout << "first name: "<<contacts[in].get_first()<<std::endl;
    std::cout << "last name: "<<contacts[in].get_last()<<std::endl;
    std::cout << "nickname name: "<<contacts[in].get_nickname()<<std::endl;
    std::cout << "darkest secret: "<<contacts[in].get_secret()<<std::endl;
    std::cout << "number: "<<contacts[in].get_number()<<std::endl;
}

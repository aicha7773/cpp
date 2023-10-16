#include <iostream>
#include <string>

class contact{
    private:
    public:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string darkest_secret;
        std::string number;
        //  contact();
};

void    add(contact *contacts, int indice);
void    search(contact *contacts);

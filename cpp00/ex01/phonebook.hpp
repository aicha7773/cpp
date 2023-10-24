#include <iostream>
#include <string>

class contact{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string darkest_secret;
        std::string number;
    public:
        void set_first(std::string str);
        void set_last(std::string str);
        void set_nickname(std::string str);
        void set_secret(std::string str);
        void set_number(std::string str);
        std::string get_first() const;
        std::string get_last() const;
        std::string get_nickname() const;
        std::string get_secret() const;
        std::string get_number() const;
};

void    add(contact *contacts, int indice);
void    search(contact *contacts, int indice);

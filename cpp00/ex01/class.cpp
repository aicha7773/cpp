#include "phonebook.hpp"

void contact::set_first(std::string str)
{
        first_name = str;
}
void contact::set_last(std::string str)
{
        last_name = str;
}
void contact::set_nickname(std::string str)
{
        nickname = str;
}
void contact::set_secret(std::string str)
{
        darkest_secret = str;
}
void contact::set_number(std::string str)
{
        number = str;
}
std::string contact::get_first() const
{
        return first_name;
}
std::string contact::get_last() const
{
        return last_name;
}
std::string contact::get_nickname() const
{
        return nickname;
}
std::string contact::get_secret() const
{
        return darkest_secret;
}
std::string contact::get_number() const
{
        return number;
}

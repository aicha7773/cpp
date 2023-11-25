/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 06:18:22 by aatki             #+#    #+#             */
/*   Updated: 2023/11/04 11:37:48 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::printInTable(int indice)
{
    int i=0;
    while (i < indice)
    {
        std::cout<< std::setw(10) << i <<"|";
        put_str(contacts[i].get_first());
        put_str(contacts[i].get_last());
        put_str(contacts[i].get_nickname());
        std::cout<<std::endl;
        i++;
    }
}

void PhoneBook::printContact(int i)
{
    std::cout << "first name: "<<contacts[i].get_first()<<std::endl;
    std::cout << "last name: "<<contacts[i].get_last()<<std::endl;
    std::cout << "nickname name: "<<contacts[i].get_nickname()<<std::endl;
    std::cout << "darkest secret: "<<contacts[i].get_secret()<<std::endl;
    std::cout << "number: "<<contacts[i].get_number()<<std::endl;
}

void PhoneBook::C_set_first(int i, std::string str)
{
        if(!str.empty())
                contacts[i].set_first(str);
}

void PhoneBook::C_set_last(int i, std::string str)
{
        if(!str.empty())
                contacts[i].set_last(str);
}

void PhoneBook::C_set_nickname(int i, std::string str)
{
        if(!str.empty())
            contacts[i].set_nickname(str);
}

void PhoneBook::C_set_secret(int i, std::string str)
{
        if(!str.empty())
                contacts[i].set_secret(str);
}

void PhoneBook::C_set_number(int i, std::string str)
{
        if(!str.empty())
                contacts[i].set_number(str);
}

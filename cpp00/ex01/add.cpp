/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:33:54 by aatki             #+#    #+#             */
/*   Updated: 2023/11/01 18:03:09 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int test(std::string str)
{
    unsigned long i=0;
    if (str.empty())
        return 1;
    while(i < str.length())
    {
        if (str[i] < '0' || str[i] > '9')
            return 1;
        i++;
    }
    return 0;
}

std::string readInfo(std::string message)
{
    std::string str;

    while(str.empty())
    {
        std::cout<<message;
        std::getline(std::cin, str);
        // if (str.empty())
        //     exit(0);
    }
    return str;
}

void    add(contact *contacts,int indice)
{
    std::string num;
    int i=indice;

    if (indice >= 8)
        i = indice - (8 * (indice / 8));
        contacts[i].set_first(readInfo("tap the first name\n"));
        contacts[i].set_last(readInfo("tap the last name\n"));
        contacts[i].set_nickname(readInfo("tap the nickname\n"));
        contacts[i].set_secret(readInfo("tap the darkest secret\n"));
    while(test(num))
        num = readInfo("tap the number\n");
    contacts[i].set_number(num);
}

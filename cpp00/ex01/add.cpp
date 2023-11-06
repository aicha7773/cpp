/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:33:54 by aatki             #+#    #+#             */
/*   Updated: 2023/11/04 07:40:22 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int test(std::string str, int c)
{
    unsigned long i=0;
    if (str.empty() || !c)
        return 0;
    while(i < str.length())
    {
        if (str[i] < '0' || str[i] > '9')
            return 1;
        i++;
    }
    return 0;
}

int ft_space(std::string str)
{
    unsigned long i=0;
    while (i < str.length())
    {
        if (std::isspace(str[i]))
            return 0;
        i++;
    }
    return 1;
}

std::string readInfo(std::string message, int *ctrlD)
{
    std::string str;

    if (*ctrlD == 0)
        return "NULL";
    while(str.empty() || !ft_space(str))
    {
        std::cout<<message;
        getline(std::cin, str);
        if (std::cin.eof())
        {
            *ctrlD = 0;
            return "NULL";
        }
            
    }
    return str;
}

int    add(PhoneBook &phone,int indice)
{
    std::string num="hh";
    int i=indice;
    int *ctrlD = new int;

    *ctrlD=1;
    if (indice >= 8)
        i = indice - (8 * (indice / 8));
    phone.C_set_first(i, readInfo("tap the first name\n", ctrlD));
    phone.C_set_last(i, readInfo("tap the last name\n", ctrlD));
    phone.C_set_nickname(i, readInfo("tap the nickname\n", ctrlD));
    phone.C_set_secret(i, readInfo("tap the darkest secret\n", ctrlD));
    while(test(num, *ctrlD))
        num = readInfo("tap the number\n", ctrlD);
    phone.C_set_number(i, num);
    if (!*ctrlD)
    {
        delete ctrlD;
        return (0);
    }
    else
    {
        delete ctrlD;
        return (1);
    }
}

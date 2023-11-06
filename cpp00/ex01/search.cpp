/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:34:00 by aatki             #+#    #+#             */
/*   Updated: 2023/11/04 14:59:56 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

void    put_str(std::string str)
{
    if (str.length() > 10)
        std::cout << str.substr(0, 9)<<".|";
    else
        std::cout << std::setw(10)<<str<<"|";
}

int search(PhoneBook phone, int indice)
{
    std::string in;

    std::cout<<"     index|first name| last name| nick name\n";
    std::cout<<"----------|----------|----------|----------\n";
    if (indice >= 8)
        indice = 8;
    if (indice == 0)
        return 1;
    phone.printInTable(indice);
    std::cout<<"give me an indice\n";
    // std::cin >> in;
    getline(std::cin, in);
    if (std::cin.eof())
        return 0;
    if(in[0] < 48 || in[0] >= 48 + indice || in.length() != 1)
        std::cout<<"not on the list\n";
    else
        phone.printContact(in[0] - '0');
    return 1;
}

ADD
eeaaaaaaaaa
eeaaaaaaaaa
eeeaaaaaaaaa
eeeaaaaaaaaa
1111111111



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:34:02 by aatki             #+#    #+#             */
/*   Updated: 2023/11/02 15:53:40 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
    std::string str;
    contact contacts[8];
    int indice=0;
    while (1)
    {
        std::cout << "give an order: ";
        std::cin>>str;
        if(std::cin.eof())
            break;
        if (str == "ADD")
        {
            add(contacts,indice);
            indice++;
        }
        else if(str == "SEARCH")
            search(contacts, indice);
        else if (str == "EXIT")
            break;
    }
}

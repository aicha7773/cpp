/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 06:17:24 by aatki             #+#    #+#             */
/*   Updated: 2023/11/04 15:02:38 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    std::string str;
    int indice=0;
    PhoneBook phone;

    while (1)
    {
        std::cout << "give an order: ";
        getline(std::cin, str);
        if(std::cin.eof())
            break;
        if (str == "ADD")
        {
            if (!add(phone, indice))
                break;
            indice 
        }
        else if(str == "SEARCH")
        {
            if (!search(phone, indice))
                break;
        }
        else if (str == "EXIT")
            break;
    }
}

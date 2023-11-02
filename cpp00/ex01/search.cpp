/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:34:00 by aatki             #+#    #+#             */
/*   Updated: 2023/11/02 16:31:26 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    std::string in="-";

    std::cout<<"index|first name| last name| nick name\n";
    std::cout<<"-----|----------|----------|----------\n";
    if (indice >= 8)
        indice = 8;
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
    while (in[0] < 48 || in[0] >= 48 + indice || in.length() != 1)
    {
        in="";
        std::cout<<"give me an indice\n";
        getline(std::cin, in);
        if (std::cin)
            exit(0);
    }
    int inn = in[0] - '0';
    std::cout << "first name: "<<contacts[inn].get_first()<<std::endl;
    std::cout << "last name: "<<contacts[inn].get_last()<<std::endl;
    std::cout << "nickname name: "<<contacts[inn].get_nickname()<<std::endl;
    std::cout << "darkest secret: "<<contacts[inn].get_secret()<<std::endl;
    std::cout << "number: "<<contacts[inn].get_number()<<std::endl;
}

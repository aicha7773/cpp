/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:34:09 by aatki             #+#    #+#             */
/*   Updated: 2023/11/04 15:07:39 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook{
    private:
        Contact contacts[8];
    public:
        void C_set_first(int i, std::string str);
        void C_set_last(int i, std::string str);
        void C_set_nickname(int i, std::string str);
        void C_set_secret(int i, std::string str);
        void C_set_number(int i, std::string str);
        void printInTable(int indice);
        void printContact(int indice);
};

int    add(PhoneBook &phone, int indice);
int    search(PhoneBook phone, int indice);
void    put_str(std::string str);

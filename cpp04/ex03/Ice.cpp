/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 02:38:30 by aatki             #+#    #+#             */
/*   Updated: 2023/11/19 04:55:08 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    std::cout<<"the Ice Default constractor\n";
    type = "ice";
}

Ice::Ice(Ice const &src)
{
    std::cout<<"the Ice copy constractor\n";
    type = src->type;
}

Ice::Ice const &operator =(Ice const &src)
{
    std::cout<<"the Ice assiment operator\n";
    if (this != &src)
        type = src->type;
    return *this;
}

Ice::~Ice()
{
    std::cout<<"the Ice Default destractor\n";
}

virtual AMateria* Ice::clone() const
{
    Ice* ret = new Ice;
    ret->type = type;
    return ret;
}

virtual void Ice::use(ICharacter& target)
{
    std::cout<< "* shoots an ice bolt at "<<target->Name<<" *";
}

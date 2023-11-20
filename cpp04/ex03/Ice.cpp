/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 02:38:30 by aatki             #+#    #+#             */
/*   Updated: 2023/11/20 05:31:09 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice()
{
    std::cout<<"the Ice Default constractor\n";
    type = "ice";
}

Ice::Ice(Ice const &src)
{
    std::cout<<"the Ice copy constractor\n";
    type = src.getType();
}

Ice const &Ice::operator =(Ice const &src)
{
    std::cout<<"the Ice assiment operator\n";
    if (this != &src)
        type = src.getType();
    return *this;
}

Ice::~Ice()
{
    std::cout<<"the Ice Default destractor\n";
}

AMateria* Ice::clone() const
{
    Ice* ret = new Ice;
    ret->type = type;
    return ret;
}

void Ice::use(ICharacter& target)
{
    std::cout<< "* shoots an ice bolt at "<<target.getName()<<" *\n";
}

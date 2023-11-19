/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 02:38:17 by aatki             #+#    #+#             */
/*   Updated: 2023/11/19 08:56:25 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"

AMateria::AMateria(std::string const & type)
{
    std::cout<<"the AMateria paramitrize constractor\n";
    this->type = type;
}

AMateria::AMateria()
{
    std::cout<<"the AMateria Default constractor\n";
    this->type = "Amateria";
}

AMateria::AMateria(AMateria const & src)
{
    std::cout<<"the AMateria copy constractor\n";
    type = src.type;
}

AMateria::~AMateria()
{
    std::cout<<"the AMateria destractor\n";
}

AMateria & AMateria::operator=(AMateria const & src)
{
    std::cout<<"the AMateria assiment operator\n";
    if (this != &src)
        type = src.type;
    return *this;
}

std::string const & AMateria::getType() const
{
    return type;
}

AMateria* AMateria::AMateria::clone() const
{
    AMateria* ret = new Ice();
    ret->type = type;
    return ret;
}

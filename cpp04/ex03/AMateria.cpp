/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 02:38:17 by aatki             #+#    #+#             */
/*   Updated: 2023/11/19 04:54:27 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria(std::string const & type)
{
    std::cout<<"the AMateria paramitrize constractor\n";
    this->type = type;
}

AMateria()
{
    std::cout<<"the AMateria Default constractor\n";
    this->type = "Amateria";
}

AMateria(AMateria const & src)
{
    std::cout<<"the AMateria copy constractor\n";
    type = src->type;
}

~AMateria()
{
    std::cout<<"the AMateria destractor\n";
}

AMateria & operator=(AMateria const & src)
{
    std::cout<<"the AMateria assiment operator\n";
    if (this != &src)
        type = src->type;
    return *this;
}

std::string const & getType() const
{
    return type;
}

virtual AMateria* AMateria::clone() const
{
    AMateria* ret = new AMateria;
    ret->type = type;
    return ret;
}

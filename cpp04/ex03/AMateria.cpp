/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 02:38:17 by aatki             #+#    #+#             */
/*   Updated: 2023/11/23 18:32:42 by aatki            ###   ########.fr       */
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

std::string const & AMateria::getType() const
{
    return type;
}

AMateria* AMateria::AMateria::clone() const
{
    if (type == "cure")
        return (new Cure);
    else
        return (new Ice);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    std::cout<<"the AMateria assiment operator\n"; // message to show u u are in this class
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 02:38:17 by aatki             #+#    #+#             */
/*   Updated: 2023/11/25 11:45:36 by aatki            ###   ########.fr       */
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

AMateria const & AMateria::operator=(AMateria const & src)
{
    std::cout<<"the AMateria aasiment operator\n";
    type = src.type;
    return *this;
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
    std::cout<<"the AMateria use\n"; // message to sheow u are in this class
}

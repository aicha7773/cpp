/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 02:38:22 by aatki             #+#    #+#             */
/*   Updated: 2023/11/19 09:02:34 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure()
{
    std::cout<<"the Cure Default constractor\n";
    type = "Cure";
}

Cure::Cure(Cure const &src)
{
    std::cout<<"the Cure copy constractor\n";
    type = src.getType();
}

Cure const &Cure::operator =(Cure const &src)
{
    std::cout<<"the Cure assiment operator\n";
    if (this != &src)
        type = src.getType();
    return *this;
}

Cure::~Cure()
{
    std::cout<<"the Cure Default destractor\n";
}

AMateria* Cure::clone() const
{
    Cure* ret = new Cure;
    ret->type = type;
    return ret;
}

void Cure::use(ICharacter& target)
{
    std::cout<<"* heals "<< target.getName() <<"’s wounds *";
}

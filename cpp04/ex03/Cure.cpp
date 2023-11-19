/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 02:38:22 by aatki             #+#    #+#             */
/*   Updated: 2023/11/19 04:55:21 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    std::cout<<"the Cure Default constractor\n";
    type = "cure";
}

Cure::Cure(Cure const &src)
{
    std::cout<<"the Cure copy constractor\n";
    type = src->type;
}

Cure::Cure const &operator =(Cure const &src)
{
    std::cout<<"the Cure assiment operator\n";
    if (this != &src)
        type = src->type;
    return *this;
}

Cure::~Cure()
{
    std::cout<<"the Cure Default destractor\n";
}

virtual AMateria* Cure::clone() const
{
    Cure* ret = new Cure;
    ret->type = type;
    return ret;
}

virtual void Cure::use(Curearacter& target)
{
    std::cout<<"* heals "<< target->Name <<"’s wounds *";
}

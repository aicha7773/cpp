/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 03:01:50 by aatki             #+#    #+#             */
/*   Updated: 2023/11/20 15:02:06 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout<<"an WrongAnimal Default constractor called\n";
    type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    std::cout<<"an WrongAnimal copy constractor called\n";
    type = src.type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout<<"an WrongAnimal Default Destractor called\n";
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &src)
{
    std::cout<<"an WrongAnimal assiment operator called\n";
    type = src.type;
    return *this;
}

std::string WrongAnimal::getType() const
{
    return type;
}

void WrongAnimal::makeSound() const
{
    std::cout<<"cats don’t bark\n";
}

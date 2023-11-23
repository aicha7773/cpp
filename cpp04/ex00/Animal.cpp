/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 03:01:50 by aatki             #+#    #+#             */
/*   Updated: 2023/11/23 20:04:26 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout<<"an Animal Default constractor called\n";
    type = "Animal";
}

Animal::Animal(Animal const &src)
{
    std::cout<<"an Animal copy constractor called\n";
    type = src.type;
}

Animal::~Animal()
{
    std::cout<<"an Animal Default Destractor called\n";
}

Animal & Animal::operator=(Animal const &src)
{
    std::cout<<"an Animal assiment operator called\n";
    type = src.type;
    return *this;
}

std::string Animal::getType() const
{
    return type;
}

void Animal::makeSound() const
{
    std::cout<<"called makesound from the base\n";
}

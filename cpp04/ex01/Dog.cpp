/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 03:08:41 by aatki             #+#    #+#             */
/*   Updated: 2023/11/23 17:23:24 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout<<"an Dog Default constractor called\n";
    type = "Dog";
    brain = new Brain;
}

Dog::Dog(Dog const &src) : Animal(src)
{
    std::cout<<"an Dog copy constractor called\n";
    if(this != &src)
        brain = new Brain(*src.brain);
}

Dog::~Dog()
{
    std::cout<<"an Dog Default Destractor called\n";
    delete brain;
}

Dog & Dog::operator=(Dog const &src)
{
    std::cout<<"an Dog assiment operator called\n";
    if(this != &src)
    {
        type = src.getType();
        delete brain;
        brain = new Brain(*src.brain);
    }
    return *this;
}

std::string Dog::getType() const
{
    return type;
}

Brain *Dog::getBrain() const
{
    return brain;
}

void Dog::makeSound() const
{
    std::cout<<"Dog appah\n";
}

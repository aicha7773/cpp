/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 03:08:41 by aatki             #+#    #+#             */
/*   Updated: 2023/11/20 09:34:59 by aatki            ###   ########.fr       */
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
    {
        brain = new Brain();
        for (int i=0;i<100;i++)
            src.getBrain()->getIdeas()[i]=src.getBrain()->getIdeas()[i];
    }
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
        brain = new Brain();
        for (int i=0;i<100;i++)
            src.getBrain()->getIdeas()[i]=src.getBrain()->getIdeas()[i];
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

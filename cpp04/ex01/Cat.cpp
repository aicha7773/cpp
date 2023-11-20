/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 03:10:49 by aatki             #+#    #+#             */
/*   Updated: 2023/11/20 09:26:29 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout<<"an Cat Default constractor called\n";
    type = "Cat";
    brain = new Brain();
}

Cat::Cat(Cat const &src)  : Animal(src)
{
    std::cout<<"an Cat copy constractor called\n";
    if(this != &src)
    {
        brain = new Brain();
        for (int i=0;i<100;i++)
            src.getBrain()->getIdeas()[i]=src.getBrain()->getIdeas()[i];
    }
}

Cat::~Cat()
{
    std::cout<<"an Cat Default Destractor called\n";
    delete brain;
}

Cat & Cat::operator=(Cat const &src)
{
    std::cout<<"an Cat assiment operator called\n";
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

std::string Cat::getType() const
{
    return type;
}

Brain *Cat::getBrain() const
{
    return brain;   
}

void Cat::makeSound() const
{
    std::cout<<"cats meeeow\n";
}

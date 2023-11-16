/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 03:10:49 by aatki             #+#    #+#             */
/*   Updated: 2023/11/16 05:38:22 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout<<"an Cat Default constractor called\n";
    type = "Cat";
}

Cat::Cat(Cat const &src)  : Animal(src)
{
    std::cout<<"an Cat copy constractor called\n";
}

Cat::~Cat()
{
    std::cout<<"an Cat Default Destractor called\n";
}

Cat & Cat::operator=(Cat const &src)
{
    std::cout<<"an Cat assiment operator called\n";
    type = src.type;
    return *this;
}

std::string Cat::getType() const
{
    return type;
}

void Cat::makeSound() const
{
    std::cout<<"cats meeeow\n";
}

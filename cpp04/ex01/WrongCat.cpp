/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 03:10:49 by aatki             #+#    #+#             */
/*   Updated: 2023/11/16 05:38:22 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout<<"an WrongCat Default constractor called\n";
    type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &src)  : WrongAnimal(src)
{
    std::cout<<"an WrongCat copy constractor called\n";
}

WrongCat::~WrongCat()
{
    std::cout<<"an WrongCat Default Destractor called\n";
}

WrongCat & WrongCat::operator=(WrongCat const &src)
{
    std::cout<<"an WrongCat assiment operator called\n";
    type = src.type;
    return *this;
}

std::string WrongCat::getType() const
{
    return type;
}

void WrongCat::makeSound() const
{
    std::cout<<"Wrongcats meeeow\n";
}

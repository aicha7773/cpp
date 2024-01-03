/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 01:39:35 by aatki             #+#    #+#             */
/*   Updated: 2024/01/03 03:05:59 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::~A()
{
    std::cout<<"the A Desructor";
}

void A::getName()
{
    std::cout<<"A";
}

Base * A::generate(void)
{
    return (new A);
}

void A::identify(Base* p)
{
    A *d{ dynamic_cast<A>(p) };
	std::cout << "The name of the Derived is: " << d->getName() << '\n';
}

void A::identify(Base& p)
{
    A& d{ dynamic_cast<A&>(p) };
	std::cout << "The name of the Derived is: " << d.getName() << '\n';
}

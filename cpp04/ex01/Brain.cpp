/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 01:58:23 by aatki             #+#    #+#             */
/*   Updated: 2023/11/23 20:07:51 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout<<"an Brain Default constractor called\n";
}

Brain::Brain(Brain const &src)
{
    std::cout<<"an Brain copy constractor called\n";
    for (int i=0;i<100;i++)
        ideas[i] = src.ideas[i];
}

Brain::~Brain()
{
    std::cout<<"an Brain Default Destractor called\n";
}

Brain & Brain::operator=(Brain const &src)
{
    std::cout<<"an Brain assiment operator called\n";
    if (this != &src)
    for (int i=0;i<100;i++)
        ideas[i] = src.ideas[i];
    return *this;
}


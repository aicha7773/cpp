/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 01:58:23 by aatki             #+#    #+#             */
/*   Updated: 2023/11/20 10:51:31 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout<<"an Brain Default constractor called\n";
    ideas = new std::string[100];
}

Brain::Brain(Brain const &src)
{
    std::cout<<"an Brain copy constractor called\n";
    ideas = new std::string[100];
    for (int i=0;i<100;i++)
    src.getIdeas()[i]=src.getIdeas()[i];
}

Brain::~Brain()
{
    std::cout<<"an Brain Default Destractor called\n";
    delete[] ideas;
}

Brain & Brain::operator=(Brain const &src)
{
    std::cout<<"an Brain assiment operator called\n";
    if (this != &src)
    {
        ideas = new std::string[100];
        for (int i=0;i<100;i++)
        src.getIdeas()[i]=src.getIdeas()[i];
    }
    return *this;
}

std::string* Brain::getIdeas()const
{
    return ideas;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 22:02:55 by aatki             #+#    #+#             */
/*   Updated: 2023/12/19 22:22:02 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestFor::RobotomyRequestFor()
{
    std::cout<<"the RobotomyRequestFor default constructor\n";
}

RobotomyRequestFor::RobotomyRequestFor(std::string name, int grade,int grade2,bool indc)
{
    std::cout<<"the RobotomyRequestFor paramtrize constructor\n";   
}

RobotomyRequestFor::RobotomyRequestFor(RobotomyRequestFor &other)
{
    std::cout<<"the RobotomyRequestFor copy constructor\n";
    if (!other)
    {
        name = other.name;
        indicating = other.indicating;
        grade = other.grade;
        grade2 = other.grade2;
    }
}

RobotomyRequestFor::~RobotomyRequestFor()
{   
    std::cout<<"the RobotomyRequestFor default destructor\n";
}

RobotomyRequestFor & RobotomyRequestFor::operator=(RobotomyRequestFor &other)
{
    std::cout<<"the RobotomyRequestFor assiment operator\n";   
}

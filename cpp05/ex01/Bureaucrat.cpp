/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:16:41 by aatki             #+#    #+#             */
/*   Updated: 2023/11/27 17:21:47 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout<<"the Bureaucrat Default constractor";
}

Bureaucrat::Bureaucrat(int grade)
{
    std::cout<<"the Bureaucrat grade constractor";
    try
    {
        this->Grade = grade;
        if(this->Grade > 150)
            throw GradeTooLowException();
        if(this->Grade <= 0)
            throw GradeTooHighException();
    }
    catch()
    catch()

}

Bureaucrat::Bureaucrat(std::string Name) : Name(Name)
{
    std::cout<<"the Bureaucrat Name constractor";
}

Bureaucrat::Bureaucrat(const  Bureaucrat & other) : Name(other.Name)
{
    std::cout<<"the Bureaucrat copy constractor";
    if (this != &other)
        *this = other;
}

Bureaucrat & Bureaucrat::operator=(const  Bureaucrat & other)
{
    std::cout<<"the Bureaucrat assiment operator constractor";
    if(this != &other)
        Grade = other.Grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout<<"the Bureaucrat destractor constractor";
}

void Bureaucrat::GradeTooHighException ()
{
    Grade = 150;
}

void Bureaucrat::GradeTooLowException()
{
    Grade = 1;
}

int Bureaucrat::getGrade()const
{
    return Grade;
}

std::string Bureaucrat::getName()const
{
    return Name;
}

void Bureaucrat::incrementGrade()
{
    if (Grade + 1 <= 150)
        Grade ++;
}

void Bureaucrat::decrementGrade()
{
    if (Grade -1 > 0)
        Grade --;
}

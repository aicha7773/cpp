/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:16:41 by aatki             #+#    #+#             */
/*   Updated: 2023/12/01 17:53:06 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout<<"the Bureaucrat Default constractor";
}

Bureaucrat::Bureaucrat(int grade)
{
    int cas =0;
    std::cout<<"the Bureaucrat grade constractor";
  
    try
    {
        if (grade < 0)
            cas = 1;
        if (grade >= 150)
            cas = 2;
    }
    catch(int cas)
    {
        
    }
    catch(int cas)
    {
        
    }
    catch(int cas)
    {
        
    }
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
    
}

void Bureaucrat::GradeTooLowException()
{
    
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:16:41 by aatki             #+#    #+#             */
/*   Updated: 2023/12/18 17:46:58 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout<<"the Bureaucrat Default constractor\n";
}

Bureaucrat::Bureaucrat(std::string Name, int grade) : Name(Name)
{
    std::cout<<"the Bureaucrat paramtraze constractor\n";
    Grade = grade;
    if (Grade < 0)
         throw Bureaucrat::GradeTooHighException();
    if (Grade > 150)
         throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const  Bureaucrat & other) : Name(other.Name)
{
    std::cout<<"the Bureaucrat copy constractor\n";
    if (this != &other)
        *this = other;
}

Bureaucrat & Bureaucrat::operator=(const  Bureaucrat & other)
{
    std::cout<<"the Bureaucrat assiment operator constractor\n";
    if(this != &other)
        Grade = other.Grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout<<"the Bureaucrat destractor constractor\n";
}

const char * Bureaucrat::GradeTooHighException::what () const throw ()
{
    return "the grade is so high";
}

const char * Bureaucrat::GradeTooLowException::what () const throw ()
{
    return "the grade is so low";
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
    Grade --;
    if (Grade < 1)
         throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
    Grade ++;
    if (Grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form obj)
{
    if(obj.getIndicating())
        std::cout<<Name<<"signed"<<obj.getName()<<std::endl;
    else
        std::cout<<Name<<"couldn’t sign "<<obj.getName()<<" because <reason>"<<std::endl;
}

std::ostream & operator << (std::ostream & stream,Bureaucrat &buro)
{
   stream<<buro.getGrade();
   return stream;
}

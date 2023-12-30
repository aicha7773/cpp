/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:16:41 by aatki             #+#    #+#             */
/*   Updated: 2023/12/30 22:00:10 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
    std::cout<<"the Bureaucrat assiment operator constructor\n";
    if(this != &other)
        Grade = other.Grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout<<"the Bureaucrat destructor\n";
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
    if (Grade - 1 < 1)
         throw Bureaucrat::GradeTooHighException();
    Grade --;
}

void Bureaucrat::decrementGrade()
{
    if (Grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    Grade ++;
}

void Bureaucrat::signForm(Form &obj)
{
    if(obj.getIndicating())
        std::cout<<Name<<" signed "<<obj.getName()<<std::endl;
    else
        std::cout<<Name<<" couldn’t sign "<<obj.getName()<<" because the grade to  signe is too Low "<<std::endl;
}

std::ostream & operator << (std::ostream & stream,Bureaucrat &buro)
{
   stream<<buro.getGrade();
   return stream;
}

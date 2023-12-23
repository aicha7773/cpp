/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:31:56 by aatki             #+#    #+#             */
/*   Updated: 2023/12/22 19:21:09 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : Name("init"), GradeToSigne(1) ,GradeToExecute(1)
{
    std::cout<<"the Form Default constractor\n";
    indicating = 0;
}

Form::Form(std::string AName, int AGradeToSigne ,int AGradeToExecute, bool Aind) : Name(AName), GradeToSigne (AGradeToSigne), GradeToExecute(AGradeToExecute) 
{
    std::cout<<"the Form paramtrize constractor\n";
    indicating = Aind;
    if (GradeToSigne < 0)
         throw Form::GradeTooHighException();
    if (GradeToSigne > 150)
         throw Form::GradeTooLowException();
    if (GradeToExecute < 0)
         throw Form::GradeTooHighException();
    if (GradeToExecute > 150)
         throw Form::GradeTooLowException();
}

Form::Form(const  Form & other) : Name(other.Name) , GradeToSigne(other.GradeToSigne), GradeToExecute(other.GradeToExecute)
{
    std::cout<<"the Form copy constractor\n";
    if (this != &other)
        indicating = other.indicating;
}

Form & Form::operator=(const  Form & other)
{
    std::cout<<"the Form assiment operator constractor\n";
    if(this != &other)
    {
        // indicating = other.indicating;
        // Name = other.Name;
        // GradeToExecute = other.GradeToExecute;
        // GradeToSigne = other.GradeToSigne;
    }
    return *this;
}

Form::~Form()
{
    std::cout<<"the Form Default Destractor\n";
}

const char * Form::GradeTooHighException::what () const throw ()
{
    return "the grade is so high";
}

const char * Form::GradeTooLowException::what () const throw ()
{
    return "the grade is so low";
}

int Form::getGradeToSigne() const
{
    return GradeToSigne;
}

int Form::getGradeToExecute() const
{
    return GradeToExecute;
}

std::string Form::getName() const
{
    return Name;
}

bool Form::getIndicating() const
{
    return  indicating;
}

void Form::beSigned(Bureaucrat &obj)
{
    if(!indicating)
    {
        if (obj.getGrade() >= GradeToSigne)
            indicating = 1;
        else
            throw Form::GradeTooLowException();   
    }
}

std::ostream & operator << (std::ostream & stream,Form &buro)
{
   stream<<buro.getName()<<buro.getGradeToSigne()<<buro.getGradeToExecute()<<buro.getIndicating();
   return stream;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:31:56 by aatki             #+#    #+#             */
/*   Updated: 2023/12/30 21:48:10 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : Name("init"), GradeToSigne(1) ,GradeToExecute(1)
{
    std::cout<<"the AForm Default constractor\n";
    indicating = 0;
}

AForm::AForm(std::string AName, int AGradeToSigne ,int AGradeToExecute) : Name(AName), GradeToSigne (AGradeToSigne), GradeToExecute(AGradeToExecute) 
{
    std::cout<<"the AForm paramtrize constractor\n";
    if (GradeToSigne < 0 || GradeToExecute < 0)
        throw AForm::GradeTooHighException();
    if (GradeToSigne > 150 || GradeToExecute > 150)
        throw AForm::GradeTooLowException();
    indicating = false;
}

AForm::AForm(const  AForm & other) : Name(other.Name) , GradeToSigne(other.GradeToSigne), GradeToExecute(other.GradeToExecute)
{
    std::cout<<"the AForm copy constractor\n";
    if (this != &other)
        indicating = other.indicating;
}

AForm & AForm::operator=(const  AForm & other)
{
    std::cout<<"the AForm assiment operator constractor\n";
    if(this != &other)
        indicating = other.indicating;
    return *this;
}

AForm::~AForm()
{
    std::cout<<"the AForm Default Destractor\n";
}

const char * AForm::GradeTooHighException::what () const throw ()
{
    return "the grade is so high";
}

const char * AForm::GradeTooLowException::what () const throw ()
{
    return "the grade is so low";
}

int AForm::getGradeToSigne() const
{
    return GradeToSigne;
}

int AForm::getGradeToExecute() const
{
    return GradeToExecute;
}

std::string AForm::getName() const
{
    return Name;
}

bool AForm::getIndicating() const
{
    return  indicating;
}

void AForm::beSigned(Bureaucrat &obj)
{
    if(!indicating)
    {
        if (obj.getGrade() <= GradeToSigne)
            indicating = 1;
        else
            throw AForm::GradeTooLowException();
    }
}

std::ostream & operator << (std::ostream & stream,AForm &buro)
{
   stream<<buro.getName()<<buro.getGradeToSigne()<<buro.getGradeToExecute()<<buro.getIndicating();
   return stream;
}

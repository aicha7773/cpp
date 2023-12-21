/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:31:56 by aatki             #+#    #+#             */
/*   Updated: 2023/12/20 21:40:35 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("init"), grade(0) ,grade2(0)
{
    std::cout<<"the AForm Default constractor\n";
}

AForm::AForm(std::string Name, int Grade ,int Grade2, bool ind) : name(Name), grade(Grade) ,grade2 (Grade2)
{
    std::cout<<"the AForm paramtraze constractor\n";
    if (grade < 0)
         throw AForm::GradeTooHighException();
    if (grade > 150)
         throw AForm::GradeTooLowException();
    indicating = ind;
}

AForm::AForm(const  AForm & other) : name(other.name) , grade(other.grade),grade2 (other.grade2)
{
    std::cout<<"the AForm copy constractor\n";
    if (this != &other)
        *this = other;
}

AForm & AForm::operator=(const  AForm & other)
{
    if(this != &other)
    std::cout<<"the AForm assiment operator constractor\n";
    return *this;
}

AForm::~AForm()
{
    std::cout<<"the AForm destractor constractor\n";
}

const char * AForm::GradeTooHighException::what () const throw ()
{
    return "the grade is so high";
}

const char * AForm::GradeTooLowException::what () const throw ()
{
    return "the grade is so low";
}

int AForm::getGrade()const
{
    return grade;
}

std::string AForm::getName()const
{
    return name;
}

int AForm::getGrade2()const
{
    return grade2;
}

bool AForm::getIndicating()const
{
    return  indicating;   
}

void AForm::beSigned(Bureaucrat obj)
{
    (void)obj;
    if (obj.getGrade() >= 150)
        indicating = 1;
    else
        throw AForm::GradeTooLowException();
}

std::ostream & operator << (std::ostream & stream,AForm &buro)
{
   stream<<buro.getName()<<buro.getGrade()<<buro.getGrade2()<<buro.getIndicating();
   return stream;
}

// void AForm::incrementGrade()
// {
//     grade --;
//     if (grade < 1)
//          throw AForm::GradeTooHighException();
// }

// void AForm::decrementGrade()
// {
//     grade ++;
//     if (grade > 150)
//         throw AForm::GradeTooLowException();
// }

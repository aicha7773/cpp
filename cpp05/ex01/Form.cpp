/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:31:56 by aatki             #+#    #+#             */
/*   Updated: 2023/12/05 18:13:43 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("init"), grade(0)
{
    std::cout<<"the Form Default constractor\n";
}

Form::Form(std::string Name, int Grade) : name(Name), grade(Grade)
{
    std::cout<<"the Form paramtraze constractor\n";
    if (grade < 0)
         throw Form::GradeTooHighException();
    if (grade > 150)
         throw Form::GradeTooLowException();
}

Form::Form(const  Form & other) : name(other.name) , grade(other.grade)
{
    std::cout<<"the Form copy constractor\n";
    if (this != &other)
        *this = other;
}

Form & Form::operator=(const  Form & other)
{
    if(this != &other)
    std::cout<<"the Form assiment operator constractor\n";
    return *this;
}

Form::~Form()
{
    std::cout<<"the Form destractor constractor\n";
}

const char * Form::GradeTooHighException::what () const throw ()
{
    return "the grade is so high";
}

const char * Form::GradeTooLowException::what () const throw ()
{
    return "the grade is so low";
}

int Form::getGrade()const
{
    return grade;
}

std::string Form::getName()const
{
    return name;
}

int getGrade2()const
{
    return grade2;
}

bool getIndicating()const
{
    return & indicating;   
}

// void Form::incrementGrade()
// {
//     grade --;
//     if (grade < 1)
//          throw Form::GradeTooHighException();
// }

// void Form::decrementGrade()
// {
//     grade ++;
//     if (grade > 150)
//         throw Form::GradeTooLowException();
// }

std::ostream & operator << (std::ostream & stream,Form &buro)
{
   stream<<buro.getName()<<buro.getGrade()<<buro.getGrade2()<<buro.getIndicating();
   return stream;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:31:56 by aatki             #+#    #+#             */
/*   Updated: 2023/12/14 19:51:18 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("init"), grade(0) ,grade2(0)
{
    std::cout<<"the Form Default constractor\n";
}

Form::Form(std::string Name, int Grade ,int Grade2, bool ind) : name(Name), grade(Grade) ,grade2 (Grade2)
{
    std::cout<<"the Form paramtraze constractor\n";
    if (grade < 0)
         throw Form::GradeTooHighException();
    if (grade > 150)
         throw Form::GradeTooLowException();
    indicating = ind;
}

Form::Form(const  Form & other) : name(other.name) , grade(other.grade),grade2 (other.grade2)
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

int Form::getGrade2()const
{
    return grade2;
}

bool Form::getIndicating()const
{
    return  indicating;   
}


void Form::beSigned()
{
    
}

std::ostream & operator << (std::ostream & stream,Form &buro)
{
   stream<<buro.getName()<<buro.getGrade()<<buro.getGrade2()<<buro.getIndicating();
   return stream;
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



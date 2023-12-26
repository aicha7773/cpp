/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:08:10 by aatki             #+#    #+#             */
/*   Updated: 2023/12/25 19:13:19 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>

class Form;
class AForm;

class  Bureaucrat
{
    private:
        const std::string  Name;
        int Grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string Name,int grade);
        Bureaucrat(const  Bureaucrat & other);
        Bureaucrat & operator =(const  Bureaucrat & other);
        ~Bureaucrat();
        class GradeTooHighException : public std::exception
        {
            const char * what () const throw ();
        };
        class GradeTooLowException : public std::exception
        {
            const char * what () const throw ();
        };
        int getGrade()const;
        std::string getName()const;
        void incrementGrade();
        void decrementGrade();
        void signForm(Form &obj);
        void executeForm(AForm const & form);
};


std::ostream & operator << (std::ostream & stream,Bureaucrat &buro);

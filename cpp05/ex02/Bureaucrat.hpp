/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:08:10 by aatki             #+#    #+#             */
/*   Updated: 2023/12/19 22:33:35 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>
#include "Form.hpp"

// class Form{};

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
        void signForm(Form obj);
};


std::ostream & operator << (std::ostream & stream,Bureaucrat &buro);

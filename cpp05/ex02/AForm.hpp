/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:31:45 by aatki             #+#    #+#             */
/*   Updated: 2023/12/18 18:44:41 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool indicating;
        const int grade;
        const int grade2;
    public:
        Form();
        Form(std::string Name, int Grade ,int Grade2, bool ind);
        Form(const  Form & other);
        Form & operator =(const  Form & other);
        ~Form();
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
        int getGrade2()const;
        bool getIndicating()const;
        void incrementGrade();
        void decrementGrade();
        virtual void beSigned(Bureaucrat obj) = 0;
};

std::ostream & operator << (std::ostream & stream,Form &buro);

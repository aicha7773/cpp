/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:31:45 by aatki             #+#    #+#             */
/*   Updated: 2023/12/22 19:18:01 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
    private:
        const std::string Name;
        bool indicating;
        const int GradeToSigne;
        const int GradeToExecute;
    public:
        Form();
        Form(std::string Name, int GradeToSigne ,int GradeToExecute, bool indicating);
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
        int getGradeToSigne()const;
        int getGradeToExecute()const;
        std::string getName()const;
        bool getIndicating()const;
        void incrementGrade();
        void decrementGrade();
        void beSigned(Bureaucrat &obj);
};

std::ostream & operator << (std::ostream & stream,Form &buro);

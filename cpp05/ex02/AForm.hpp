/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:31:45 by aatki             #+#    #+#             */
/*   Updated: 2023/12/22 21:35:11 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

class Bureaucrat;

class AForm
{
    private:
        const std::string Name;
        bool indicating;
        const int GradeToSigne;
        const int GradeToExecute;
    public:
        AForm();
        AForm(std::string Name, int GradeToSigne ,int GradeToExecute, bool indicating);
        AForm(const  AForm & other);
        AForm & operator =(const  AForm & other);
        ~AForm();
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
        virtual void beSigned(Bureaucrat &obj) = 0;
};

std::ostream & operator << (std::ostream & stream,AForm &buro);

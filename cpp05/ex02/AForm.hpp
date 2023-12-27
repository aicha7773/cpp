/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:31:45 by aatki             #+#    #+#             */
/*   Updated: 2023/12/25 00:47:17 by aatki            ###   ########.fr       */
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
        AForm(std::string Name, int GradeToSigne ,int GradeToExecute);
        AForm(const  AForm & other);
        AForm & operator =(const  AForm & other);
        virtual ~AForm();
        class GradeTooHighException : public std::exception
        {
            const char * what () const throw ();
        };
        class GradeTooLowException : public std::exception
        {
            const char * what () const throw ();
        };
        class MaBaaadHiHiHi : public std::exception
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
        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream & operator << (std::ostream & stream,AForm &buro);

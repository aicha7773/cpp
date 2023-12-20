/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:31:45 by aatki             #+#    #+#             */
/*   Updated: 2023/12/19 22:34:12 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

// class Bureaucrat{};

class AForm
{
    private:
        const std::string name;
        bool indicating;
        const int grade;
        const int grade2;
    public:
        AForm();
        AForm(std::string Name, int Grade ,int Grade2, bool ind);
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
        int getGrade()const;
        std::string getName()const;
        int getGrade2()const;
        bool getIndicating()const;
        void incrementGrade();
        void decrementGrade();
        virtual void beSigned(Bureaucrat obj) = 0;
};

std::ostream & operator << (std::ostream & stream,AForm &buro);

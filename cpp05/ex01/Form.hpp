/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:31:45 by aatki             #+#    #+#             */
/*   Updated: 2023/12/05 18:06:35 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Form
{
    private:
        const std::string name;
        bool indicating;
        const int grade;
        const int grade2;
    public:
        Form();
        Form(std::string Name,int grade);
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
    
};

std::ostream & operator << (std::ostream & stream,Form &buro);

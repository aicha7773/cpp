/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:08:10 by aatki             #+#    #+#             */
/*   Updated: 2023/11/26 11:10:51 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class  Bureaucrat
{
    private:
        const std::string  Name;
        int Grade;
    public:
        Bureaucrat();
        Bureaucrat(int grade);
        Bureaucrat(std::string Name);
        Bureaucrat(const  Bureaucrat & other);
        Bureaucrat & operator =(const  Bureaucrat & other);
        ~Bureaucrat();
        void GradeTooHighException ();
        void GradeTooLowException();
        int getGrade()const;
        std::string getName()const;
        void incrementGrade();
        void decrementGrade();
};

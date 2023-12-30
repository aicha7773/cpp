/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 22:02:02 by aatki             #+#    #+#             */
/*   Updated: 2023/12/30 20:38:28 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <math.h>
#include<fstream>

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
    public :
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm &other);
        ~RobotomyRequestForm();
        class MaBaaadHiHiHi : public std::exception
        {
            const char * what () const throw ();
        };
        RobotomyRequestForm & operator=(RobotomyRequestForm &other);
        void execute(Bureaucrat const & executor) const;
};

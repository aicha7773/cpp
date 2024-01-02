/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 04:34:29 by aatki             #+#    #+#             */
/*   Updated: 2024/01/01 21:30:12 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

class Intern
{
    public:
        Intern();
        Intern(Intern &obj);
        ~Intern();
        Intern& operator=(Intern &obj);
        class FormFailed : public std::exception
        {
            const char * what () const throw ();
        };
        AForm *makeForm(std::string theForm, std::string the_target);
};

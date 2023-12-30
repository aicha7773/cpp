/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 22:24:39 by aatki             #+#    #+#             */
/*   Updated: 2023/12/30 20:37:50 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm &other);
        ~PresidentialPardonForm();
        class MaBaaadHiHiHi : public std::exception
        {
            const char * what () const throw ();
        };
        PresidentialPardonForm & operator=(PresidentialPardonForm &other);
        PresidentialPardonForm(std::string target);
        void execute(Bureaucrat const & executor) const;
};

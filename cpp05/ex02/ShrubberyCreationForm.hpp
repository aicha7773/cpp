/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:54:42 by aatki             #+#    #+#             */
/*   Updated: 2023/12/25 01:29:29 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm &other);
        ~ShrubberyCreationForm();
        class MaBaaadHiHiHi : public std::exception
        {
            const char * what () const throw ();
        };
        ShrubberyCreationForm & operator=(ShrubberyCreationForm &other);
        void execute(Bureaucrat const & executor) const;
};

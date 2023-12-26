/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 04:34:34 by aatki             #+#    #+#             */
/*   Updated: 2023/12/26 07:14:57 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout<<"the Intern Default constructor\n";
}

Intern::Intern(Intern &obj)
{
    (void)obj;
    std::cout<<"the Intern copy constructor\n";
}

Intern::~Intern()
{
    std::cout<<"the Intern destructor\n";
}

Intern& Intern::operator=(Intern &obj)
{
    (void)obj;
    std::cout<<"the Intern assiment operator\n";
    return *this;
}

AForm *Intern::makeForm(std::string theForm, std::string the_target)
{
    AForm *form;
    if(theForm == "ShrubberyCreation")
        form = new ShrubberyCreationForm(the_target);
    else if(theForm == "RobotomyRequest")
        form = new RobotomyRequestForm(the_target);
    else if(theForm == "PresidentialPardon")
        form = new PresidentialPardonForm(the_target);
    else
    {
        std::cerr<<"there is no form whit this name\n";
        return NULL;
    }
    std::cout<<"Intern creates "<<theForm<<"\n";
    return form;
}

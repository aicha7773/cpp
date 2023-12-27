/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 04:34:34 by aatki             #+#    #+#             */
/*   Updated: 2023/12/27 02:40:50 by aatki            ###   ########.fr       */
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
    std::string tab[]={"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm *ftab[] = {new ShrubberyCreationForm(the_target), new RobotomyRequestForm(the_target), new PresidentialPardonForm(the_target)};
    for(int i = 0; i < 3; i++)
    {
        if (tab[i] == theForm)
        {
            std::cout<<"Intern creates "<<theForm<<"\n";
            for(int j=i+1; j < 3; j++)
                delete (ftab[j]);
            return ftab[i];
        }
        delete (ftab[i]);
    }
    std::cout<<"no Form whit this type";
    return NULL;
}

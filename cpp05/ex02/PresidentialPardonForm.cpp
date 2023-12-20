/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 22:23:54 by aatki             #+#    #+#             */
/*   Updated: 2023/12/19 22:37:40 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout<<"the PresidentialPardonForm default constructor\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string name, int grade,int grade2,bool indc)
{
    std::cout<<"the PresidentialPardonForm paramtrize constructor\n";   
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other)
{
    std::cout<<"the PresidentialPardonForm copy constructor\n";
    if (!other)
    {
        name = other.name;
        indicating = other.indicating;
        grade = other.grade;
        grade2 = other.grade2;
    }
}

PresidentialPardonForm::~PresidentialPardonForm()
{   
    std::cout<<"the PresidentialPardonForm default destructor\n";
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm &other)
{
    std::cout<<"the PresidentialPardonForm assiment operator\n";   
}

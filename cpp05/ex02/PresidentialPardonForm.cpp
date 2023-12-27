/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 22:23:54 by aatki             #+#    #+#             */
/*   Updated: 2023/12/25 01:29:14 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonFormm", 72, 45)
{
    std::cout<<"the PresidentialPardonForm default constructor\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonFormm", 72, 45)
{
    std::cout<<"the PresidentialPardonForm paramtrize constructor\n";
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other)
{
    std::cout<<"the PresidentialPardonForm copy constructor\n";
    if (this != &other)
    {
        target = other.target;
    }
}

PresidentialPardonForm::~PresidentialPardonForm()
{   
    std::cout<<"the PresidentialPardonForm default destructor\n";
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm &other)
{
    std::cout<<"the PresidentialPardonForm assiment operator\n";
    if (this != &other)
        target = other.target;
    return *this;
}

const char *  PresidentialPardonForm::MaBaaadHiHiHi::what()const throw()
{
    return "MaBaaaadhiiiihihihihi actually the bureaucrat grade it's too low or the form not indicated\n";
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(getIndicating() && executor.getGrade() <= getGradeToExecute())
        std::cout<<target<<" has been pardoned by Zaphod Beeblebrox\n";
    else
        throw PresidentialPardonForm::MaBaaadHiHiHi();
}

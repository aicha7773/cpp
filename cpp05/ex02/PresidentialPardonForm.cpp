/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 22:23:54 by aatki             #+#    #+#             */
/*   Updated: 2023/12/23 02:41:19 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :Name("Default"),indicating(0), GradeToSigne(25) , GradeToExecute(5)
{
    std::cout<<"the PresidentialPardonForm default constructor\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Name("Default"),indicating(0), GradeToSigne(25) , GradeToExecute(5)
{
    std::cout<<target<<" has been pardoned by Zaphod Beeblebrox\n";
}

// PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other)
// {
//     std::cout<<"the PresidentialPardonForm copy constructor\n";
//     if (!other)
//     {
//         Name = other.Name;
//         indicating = other.indicating;
//         GradeToSigne = 25;
//         GradeToExecute = 5;
//     }
// }

// PresidentialPardonForm::~PresidentialPardonForm()
// {
//     std::cout<<"the PresidentialPardonForm default destructor\n";
// }

// PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm &other)
// {
//     std::cout<<"the PresidentialPardonForm assiment operator\n";   
// }

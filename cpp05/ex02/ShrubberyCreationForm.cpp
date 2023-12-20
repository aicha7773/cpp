/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:55:33 by aatki             #+#    #+#             */
/*   Updated: 2023/12/19 22:21:45 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout<<"the ShrubberyCreationForm default constructor\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, int grade,int grade2,bool indc)
{
    std::cout<<"the ShrubberyCreationForm paramtrize constructor\n";   
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other)
{
    std::cout<<"the ShrubberyCreationForm copy constructor\n";
    if (!other)
    {
        name = other.name;
        indicating = other.indicating;
        grade = other.grade;
        grade2 = other.grade2;
    }
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{   
    std::cout<<"the ShrubberyCreationForm default destructor\n";
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm &other)
{
    std::cout<<"the ShrubberyCreationForm assiment operator\n";   
}

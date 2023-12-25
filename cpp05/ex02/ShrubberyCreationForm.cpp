/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:55:33 by aatki             #+#    #+#             */
/*   Updated: 2023/12/25 01:34:43 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationFormm", 72, 45)
{
    std::cout<<"the ShrubberyCreationForm default constructor\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationFormm", 72, 45)
{
    std::cout<<"the ShrubberyCreationForm paramtrize constructor\n";
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other)
{
    std::cout<<"the ShrubberyCreationForm copy constructor\n";
    if (this != &other)
    {
        target = other.target;
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

const char *  PresidentialPardonForm::MaBaaadHiHiHi::what()const throw()
{
    return "MaBaaaadhiiiihihihihi\n";
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
    std::string theData ="a tree\n"; //"   ad88                             \n\
    // d8"                                                ,d     \n\
    // 88                                                 88\n\
    // MM88MMM ,adPPYba,  8b,dPPYba,  ,adPPYba, ,adPPYba, MM88MMM  \n\
    // 88   a8"     "8a 88P'   "Y8 a8P_____88 I8[    ""   88     \n\
    // 88   8b       d8 88         8PP"""""""  `"Y8ba,    88     \n\
    // 88   "8a,   ,a8" 88         "8b,   ,aa aa    ]8I   88,    \n\
    // 88    `"YbbdP"'  88          `"Ybbd8"' `"YbbdP"'   "Y888 "\n\";

    if(getIndicating() && executor.getGrade <= getGradeToExecute())
    {
        std::ofstream outputFile(target.append("_shrubbery"));
        if (!outputFile.is_open())
        {
            std::cout << "Error: Could not open the file." << std::endl;
            return ;
        }
        outputFile<<theData;
    }
    else
        throw PresidentialPardonForm::MaBaaadHiHiHi();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:55:33 by aatki             #+#    #+#             */
/*   Updated: 2023/12/26 05:38:28 by aatki            ###   ########.fr       */
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
    if (this != &other)
        target = other.target;
    return *this;
}

const char *  ShrubberyCreationForm::MaBaaadHiHiHi::what()const throw()
{
    return "MaBaaaadhiiiihihihihi\n";
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::string theData ="       ****\n\
     ********\n\
    **  ******\n\
     *   ******     ******\n\
         ******   *********\n\
          ****  *****   ***\n\
          ***  ***     **\n\
    *************       *\n\
  ******************\n\
 *****   H*****H*******\n\
 ***     H-___-H  *********\n\
  ***    H     H      *******\n\
   **    H-___-H        *****\n\
     *   H     H         ****\n\
         H     H         ***\n\
         H-___-H         **\n\
         H     H         *\n\
         H-___-H\n\
         ALOHA!!";

    if(getIndicating() && executor.getGrade() <= getGradeToExecute())
    {
        std::ofstream outputFile(target + "_shrubbery");
        if (!outputFile.is_open())
        {
            std::cout << "Error: Could not open the file." << std::endl;
            return ;
        }
        outputFile<<theData;
    }
    else
        throw ShrubberyCreationForm::MaBaaadHiHiHi();
}

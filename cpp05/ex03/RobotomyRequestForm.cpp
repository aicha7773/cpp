/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 22:02:55 by aatki             #+#    #+#             */
/*   Updated: 2023/12/28 18:32:48 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45)
{
    std::cout<<"the RobotomyRequestForm default constructor\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45)
{
    std::cout<<"the RobotomyRequestForm paramtrize constructor\n";
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other)
{
    std::cout<<"the RobotomyRequestForm copy constructor\n";
    if (this != &other)
    {
        target = other.target;
    }
}

RobotomyRequestForm::~RobotomyRequestForm()
{   
    std::cout<<"the RobotomyRequestForm default destructor\n";
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm &other)
{
    std::cout<<"the RobotomyRequestForm assiment operator\n";
    if (this != &other)
        target = other.target;
    return *this;
}

const char *  RobotomyRequestForm::MaBaaadHiHiHi::what()const throw()
{
    return "MaBaaaadhiiiihihihihi actually the bureaucrat grade it's too low or the form not indicated\n";
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if(getIndicating() && executor.getGrade() <= getGradeToExecute())
    {
        srand (time(NULL));
        int r = rand();
        if(r % 2 == 0)
            std::cout<<target<<" has been robotomized successfully\n";
        else
            std::cout<<"the robotomy failed\n";
    }
    else
        throw RobotomyRequestForm::MaBaaadHiHiHi();
}

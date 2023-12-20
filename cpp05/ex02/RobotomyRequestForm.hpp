/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 22:02:02 by aatki             #+#    #+#             */
/*   Updated: 2023/12/19 22:23:05 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    public :
        RobotomyRequestForm();
        RobotomyRequestForm(std::string name, int grade,int grade2,bool indc);
        RobotomyRequestForm(RobotomyRequestForm &other);
        ~RobotomyRequestForm();
        RobotomyRequestForm & operator=(RobotomyRequestForm &other);
};

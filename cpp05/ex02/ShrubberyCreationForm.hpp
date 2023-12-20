/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:54:42 by aatki             #+#    #+#             */
/*   Updated: 2023/12/19 22:15:25 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string name, int grade,int grade2,bool indc);
        ShrubberyCreationForm(ShrubberyCreationForm &other);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm & operator=(ShrubberyCreationForm &other);
};

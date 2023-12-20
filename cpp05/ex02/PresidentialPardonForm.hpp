/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 22:24:39 by aatki             #+#    #+#             */
/*   Updated: 2023/12/19 22:24:44 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(std::string name, int grade,int grade2,bool indc);
        PresidentialPardonForm(PresidentialPardonForm &other);
        ~PresidentialPardonForm();
        PresidentialPardonForm & operator=(PresidentialPardonForm &other);
};

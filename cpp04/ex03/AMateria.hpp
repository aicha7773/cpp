/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 02:38:19 by aatki             #+#    #+#             */
/*   Updated: 2023/11/19 07:12:19 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria(std::string const & type);
        AMateria(AMateria const & src);
        AMateria();
        ~AMateria();
        AMateria & operator=(AMateria const & src);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

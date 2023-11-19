/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 02:38:32 by aatki             #+#    #+#             */
/*   Updated: 2023/11/19 06:12:14 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const &src);
        Ice const &operator =(Ice const &src);
        ~Ice();
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

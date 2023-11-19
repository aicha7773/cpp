/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 02:38:26 by aatki             #+#    #+#             */
/*   Updated: 2023/11/19 06:12:31 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure const &src);
        Cure const &operator =(Cure const &src);
        ~Cure();
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

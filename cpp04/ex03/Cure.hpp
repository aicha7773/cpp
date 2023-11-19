/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 02:38:26 by aatki             #+#    #+#             */
/*   Updated: 2023/11/19 09:01:50 by aatki            ###   ########.fr       */
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
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

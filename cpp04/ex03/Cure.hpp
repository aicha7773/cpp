/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 02:38:26 by aatki             #+#    #+#             */
/*   Updated: 2023/11/21 10:24:36 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure &src);
        Cure const &operator =(const Cure &src);
        ~Cure();
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

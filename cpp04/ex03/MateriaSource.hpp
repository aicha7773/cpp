/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 04:06:17 by aatki             #+#    #+#             */
/*   Updated: 2023/11/20 03:30:34 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *materia[4];
    public:
        int idx;
        MateriaSource();
        MateriaSource(MateriaSource const &src);
        ~MateriaSource();
        MateriaSource const &operator =(MateriaSource const &src);
        virtual void learnMateria(AMateria*add);
        virtual AMateria* createMateria(std::string const & type);
};

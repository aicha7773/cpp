/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 04:06:17 by aatki             #+#    #+#             */
/*   Updated: 2023/11/19 08:41:13 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *materia[4];
        int idx;
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &src);
        ~MateriaSource();
        MateriaSource const &operator =(MateriaSource const &src);
        virtual void learnMateria(AMateria*add);
        virtual AMateria* createMateria(std::string const & type);
};

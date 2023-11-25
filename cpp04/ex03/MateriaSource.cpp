/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 04:06:12 by aatki             #+#    #+#             */
/*   Updated: 2023/11/25 11:45:11 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
    std::cout<<"the MateriaSource Default constractor\n";
    *materia = NULL;
    idx = 0;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
    std::cout<<"the MateriaSource copy constractor\n";
    if (this != &src)
    {
        this->idx = src.idx;
        for (int i=0;i <= src.idx ;i++)
        {
            delete materia[i];
            if (src.materia[i]->getType() == "cure")
                materia[i] = new Cure();
            else
                materia[i] = new Ice();
        }
    }
}

MateriaSource const &MateriaSource::operator =(MateriaSource const &src)
{
    std::cout<<"the MateriaSource assiment operator\n";
    if (this != &src)
    {
        this->idx = src.idx;
        for (int i=0;i <= src.idx ;i++)
        {
            delete materia[i];
            if (src.materia[i]->getType() == "cure")
                materia[i] = new Cure();
            else
                materia[i] = new Ice();
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    std::cout<<"the MateriaSource Default destractor\n";
    
    for(int i=0;i<idx;i++)
        delete materia[i];
}

void MateriaSource::learnMateria(AMateria* add)
{
    if (idx < 4)
    {
        materia[idx] = add->clone();
        idx ++;
    } 
    delete add;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    if (type == "ice" || type == "cure")
    {
        for (int i=0; i < idx; i++)
        {
            if (materia[i]->getType() == type)
                return materia[i]->clone();
        }
    }
    return NULL;
}

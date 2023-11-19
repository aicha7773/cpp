/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 04:06:12 by aatki             #+#    #+#             */
/*   Updated: 2023/11/19 08:39:52 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout<<"the MateriaSource Default constractor\n";
    materia = NULL;
    idx = 0;
}

MateriaSource::MateriaSource(MateriaSource const &src) : 
{
    std::cout<<"the MateriaSource copy constractor\n";
    if (this != &src)
    {
        this->idx = src->idx;
        this->Name = src->Name;
        for (int i=0;i <= idx ;i++)
        {
            delete materia[i];
            materia[idx] = new AMateria;
            materia[idx]->type  = add->type;
        }
    }
}

MateriaSource::MateriaSource const &operator =(MateriaSource const &src)
{
    std::cout<<"the MateriaSource assiment operator\n";
    if (this != &src)
    {
        this->idx = src->idx;
        this->Name = src->Name;
        for (int i=0;i <= idx ;i++)
        {
            delete materia[i];
            materia[idx] = new AMateria;
            materia[idx]->type  = add->type;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    std::cout<<"the MateriaSource Default destractor\n";
    if (materia)
        delete materia;
}

virtual void learnMateria(AMateria* add)
{
    if (idx < 4)
    {
        materia[idx] = new AMateria;
        materia[idx]->type  = add->type;
        idx ++;
    }
}

virtual AMateria* createMateria(std::string const & type)
{
    if (type == "ice" || type == "cure")
    {
        for (int i=0; i < 4; i++)
        {
            if (materia[i]->type == type)
            {
                AMateria ret = new AMateria;
                ret->type  = materia->type;
            }
        }
    }
    return NULL;
}

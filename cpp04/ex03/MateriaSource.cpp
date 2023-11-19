/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 04:06:12 by aatki             #+#    #+#             */
/*   Updated: 2023/11/19 08:32:53 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
    std::cout<<"the IMateriaSource Default constractor\n";
    materia = NULL;
    idx = 0;
}

IMateriaSource::IMateriaSource(IMateriaSource const &src) : 
{
    std::cout<<"the IMateriaSource copy constractor\n";
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

IMateriaSource::IMateriaSource const &operator =(IMateriaSource const &src)
{
    std::cout<<"the IMateriaSource assiment operator\n";
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

IMateriaSource::~IMateriaSource()
{
    std::cout<<"the IMateriaSource Default destractor\n";
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

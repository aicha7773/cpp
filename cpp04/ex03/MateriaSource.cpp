/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 04:06:12 by aatki             #+#    #+#             */
/*   Updated: 2023/11/19 07:00:45 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
    std::cout<<"the IMateriaSource Default constractor\n";
}

IMateriaSource::IMateriaSource(IMateriaSource const &src)
{
    std::cout<<"the IMateriaSource copy constractor\n";
}

IMateriaSource::IMateriaSource const &operator =(IMateriaSource const &src)
{
    std::cout<<"the IMateriaSource assiment operator\n";
    if (this != &src)
        type = src->type;
    return *this;
}

IMateriaSource::~IMateriaSource()
{
    std::cout<<"the IMateriaSource Default destractor\n";
}

virtual void learnMateria(AMateria*)
{
    
}

virtual AMateria* createMateria(std::string const & type)
{
    
}

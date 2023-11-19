/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 04:06:17 by aatki             #+#    #+#             */
/*   Updated: 2023/11/19 02:00:22 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource
{
    public:
    IMateriaSource();
    IMateriaSource(IMateriaSource const &src);
    virtual ~IMateriaSource() {}
    IMateriaSource const &operator =(IMateriaSource const &src);
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 05:07:59 by aatki             #+#    #+#             */
/*   Updated: 2024/01/07 05:39:17 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>

void function(T &t)
{
    std::cout<<t<<std::endl;
}

template <typename T>

void iter(T *tab,unsigned int size ,void (*function)(T &t))
{
    for (unsigned int i=0; i< size ;i++)
        function(tab[i]);
}

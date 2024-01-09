/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 05:07:59 by aatki             #+#    #+#             */
/*   Updated: 2024/01/09 01:25:50 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename U>

void function(U &t)
{
    std::cout<<t<<std::endl;
}

template <typename T, typename U>

void iter(T *tab,unsigned int size ,void (*function)(U t))
{
    for (unsigned int i=0; i< size ;i++)
        function(tab[i]);
}


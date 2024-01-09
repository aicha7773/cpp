/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 05:43:48 by aatki             #+#    #+#             */
/*   Updated: 2024/01/09 18:43:11 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

template <typename T>

class Array
{
    private:
        T *tab;
        unsigned int asize;
    public:
        Array(){ tab = new T; asize =0;}
        Array(unsigned int n){tab = new T[n] ;asize = n;}
        ~Array(){delete[] tab;}
        Array(Array &other)
        {
            asize = other.asize;
            tab = new T[asize];
            for (unsigned int i = 0;i<asize;i++)
                tab[i] = other.tab[i];
        }
        Array &operator=(Array &other)
        {
            delete[] tab;
            asize = other.size();
            tab = new T[asize];
            for (unsigned int i=0;i<asize;i++)
                tab[i] = other.tab[i];
            return *this;
        }
        unsigned int size() const
        {
            return asize;
        }
        T& operator[](unsigned int indx)
        {
            if (indx >= asize)
                throw std::runtime_error("out of range");
            return tab[indx];
        }
};

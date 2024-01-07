/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 05:43:48 by aatki             #+#    #+#             */
/*   Updated: 2024/01/07 06:30:51 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

template <typename T>

class Array
{
    private:
        T *tab;
        unsigned int asize;
    public:
        Array(){ tab = new T; asize =0;}
        Array(unsigned int n){tab = new T[n] ;asize = n;}
        ~Array(){delete tab;}
        Array(Array &other)
        {
            asize = other.asize;
            tab = new T[asize];
            for (unsigned int i;i<asize;i++)
                tab[i] = other.tab[i];
        }
        Array &operator=(Array &other)
        {
            delete tab;
            asize = other.size;
            tab = new T[asize];
            for (unsigned int i;i<asize;i++)
                tab[i] = other.tab[i];
        }
        unsigned int size() const
        {
            return asize;
        }
        class OutOfSize : public std::exception
        {
            public :
            const char *what() throw()
            {
                return "out of rang OOOOooops\n";
            }
        };
        T& operator[](int indx)
        {
            if (indx >= asize || indx < 0)
                throw Array::OutOfSize();
            return tab[indx];
        }
};


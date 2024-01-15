/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 12:47:37 by aatki             #+#    #+#             */
/*   Updated: 2024/01/15 18:56:35 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <list>

template<typename T>

class MutantStack : public std::stack <T>
{
    public:
        MutantStack(){}
        MutantStack(const MutantStack <T>&other) : std::stack<T>(other){*this = other;}
        MutantStack & operator=(const MutantStack &other){ std::stack<T>::operator=(other); return *this;}
        ~MutantStack(){}
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
};

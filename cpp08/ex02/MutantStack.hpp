/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 12:47:37 by aatki             #+#    #+#             */
/*   Updated: 2024/01/14 12:02:01 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>

template<typename T>

class MutantStack : public std::stack <T>
{
    public:
        MutantStack(){}
        MutantStack(MutantStack &other){}
        MutantStack & operator=(MutantStack &other){}
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

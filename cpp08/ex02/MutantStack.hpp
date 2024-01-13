/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 12:47:37 by aatki             #+#    #+#             */
/*   Updated: 2024/01/13 13:31:07 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>

class MutantStack : public std::stack
{
    private:
        unsigned int N;
        T *stack;
        unsigned int asize;
    public:
        MutantS tack(){N = 0; size = 0; T = new T}
        MutantStack(MutantStack &other){N = other.N;}
        MutantStack & operator=(MutantStack &other);
        ~MutantStack();
}

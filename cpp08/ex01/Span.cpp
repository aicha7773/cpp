/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 09:56:35 by aatki             #+#    #+#             */
/*   Updated: 2024/01/13 09:22:51 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    N = 0;
}

Span::Span(unsigned int N)
{
    this->N = N;
}

Span::Span(Span &other)
{
    if (this != &other)
    {
        N = other.N; 
        vec = other.vec;
    }
}

Span::~Span()
{
    vec.clear();
}

Span & Span::operator=(Span &other)
{
    vec.clear();
    if (this != &other)
    {
        N = other.N;
        vec = other.vec;
    }
    return *this;
}

void Span::addNumber(int number)
{
    if (vec.size() + 1 >= N)
        throw std::runtime_error("the vector is  already Full\n");
    vec.push_back(number);
}

int Span::shortestSpan()
{
    vec.sort();
    int min=vec[2] - vec[1];
    for (std::vector<int>::iterator i = vec.begin(); i != vec.end() ;i++)
    {
        if (min > *(i +  1) - *i)
            min = *(i +  1) - *i;
    }
    return min;
}

// int Span::longestSpan()
// {
//     std::vector <int> copy(vec);
//     copy.sort();
//     return (copy.[copy.size()] - copy.[0]);
// }

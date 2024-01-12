/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 09:56:35 by aatki             #+#    #+#             */
/*   Updated: 2024/01/12 11:47:53 by aatki            ###   ########.fr       */
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
        N = other->N;
        for (auto i=vec.begin();  i != vec.end(); i++)
            vec.push_back(other.vec.data());
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
        N = other->N;
        for (auto i=vec.begin();  i != vec.end(); i++)
            vec.push_back(other.vec.data());
    }
    return *this;
}

void Span::addNumber(int number)
{
    if (size + 1 >= N)
        throw std::runtime_error("the vector is  already Full\n");
    vec.push_back(number);
}

int Span::shortestSpan()
{
    auto i;
    for (i=vec.begin();  i != vec.end(); ++i){}
    return i;
}

int Span::longestSpan()
{
    
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 09:56:35 by aatki             #+#    #+#             */
/*   Updated: 2024/01/15 18:55:17 by aatki            ###   ########.fr       */
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
    N = other.N;
    vec.assign(other.vec.begin(), other.vec.end());
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
        vec.assign(other.vec.begin(), other.vec.end());
    }
    return *this;
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (vec.size() + (end - begin) > N)
        throw std::runtime_error("the vector is  already Full\n");
    vec.insert(vec.end(), begin, end);
}

void Span::addNumber(int number)
{
    if (vec.size() + 1 > N)
        throw std::runtime_error("the vector is  already Full\n");
    vec.push_back(number);
}

int Span::shortestSpan()
{
    std::vector <int> copy(vec);
    std::sort(copy.begin(),copy.end());
    int min = copy[1] - copy[0];
    for (std::vector<int>::iterator i = copy.begin(); i != copy.end() - 1 ;i++)
    {
        if (min > *(i +  1) - *i)
            min = *(i +  1) - *i;
    }
    return min;
}

int Span::longestSpan()
{
    std::vector <int> copy(vec);
    std::sort(copy.begin(),copy.end());
    return (copy[copy.size() - 1] - copy[0]);
}

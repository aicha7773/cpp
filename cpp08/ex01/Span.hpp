/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 09:56:29 by aatki             #+#    #+#             */
/*   Updated: 2024/01/13 12:06:35 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        unsigned int N;
        std::vector <int> vec;
    public:
        Span();
        Span(unsigned int N);
        Span(Span &other);
        ~Span();
        Span &operator=(Span &other);
        void addNumber(int number);
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:33:09 by aatki             #+#    #+#             */
/*   Updated: 2024/01/19 19:28:24 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include<sstream>
#include <stack>
#include <list>

void calculator(std::string input);

// template<typename T>

// class MutantStack : public std::stack <T>
// {
//     public:
//         typedef typename std::stack<T>::container_type::iterator iterator;
//         iterator begin()
//         {
//             return this->c.begin();
//         }
//         iterator end()
//         {
//             return this->c.end();
//         }
//         T &operator[](unsigned int i)
//         {
//             return this->c[i];
//         }
// };

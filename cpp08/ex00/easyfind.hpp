/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 03:20:52 by aatki             #+#    #+#             */
/*   Updated: 2024/01/15 18:28:06 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <exception>
#include <unordered_set>
#include <map>
#include <unordered_map>

template<typename T>

void easyfind(T t,int occur)
{
    std::vector <int>::iterator it;
    it = std::find(t.begin(), t.end(), occur);
    if (it == t.end())
        throw std::runtime_error("no occurence\n");
    std::cout<<"occurence has been find "<< *it<<std::endl;
}

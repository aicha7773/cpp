/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 03:20:52 by aatki             #+#    #+#             */
/*   Updated: 2024/01/12 03:54:33 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>

template<typename T>

void easyfind(T t,int occur)
{
    for(int i=0; i<t.size();i++)
    {
        if (t[i] == occur)
        {
            std::cout<<"the occurence is "<<t[i]<<std::endl;
            return ;
        }
    }
    throw std::runtime_error("no occurence\n");
}

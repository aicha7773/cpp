/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 04:16:33 by aatki             #+#    #+#             */
/*   Updated: 2024/01/08 19:12:18 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>

void swap(T &t1,T &t2)
{
    T tmp;
    tmp = t1;
    t1 = t2;
    t2 = tmp;
}

template <typename T>

T& min(T &t1,T &t2)
{
    if (t1 < t2)
        return t1;
    else
        return t2;
}

template <typename T>

T& max(T &t1,T &t2)
{
    if (t1 > t2)
        return t1;
    else
        return t2;
}

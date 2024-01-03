/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 03:37:56 by aatki             #+#    #+#             */
/*   Updated: 2024/01/03 01:26:42 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data d;
    d.k=9;
    Serializer S;
    uintptr_t u=S.serialize(&d);
    S.deserialize(u);
    std::cout<<"d.k = "<<d.k<<std::endl;
    return 0;
}


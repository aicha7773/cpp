/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 03:37:56 by aatki             #+#    #+#             */
/*   Updated: 2024/01/06 20:35:31 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data *d = new  Data;
    d->k=9;

    std::cout<<d<<std::endl;
    uintptr_t u =  Serializer::serialize(d);
    std::cout<<u<<std::endl;
    Serializer::deserialize(u);
    std::cout<<"d->k = "<<d->k<<std::endl;
    delete d;
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 00:33:07 by aatki             #+#    #+#             */
/*   Updated: 2024/01/02 04:05:33 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    // std::cout<<"the Serializer Default constructor\n";
}

Serializer::~Serializer()
{
    // std::cout<<"the Serializer Destructor\n";
}

Serializer::Serializer(Serializer &other)
{
    // std::cout<<"the Serializer copy constructor\n";
    if (this != &other)
    {
        
    }
}

Serializer & Serializer::operator=(Serializer & other)
{
    // std::cout<<"the Serializer assiment operator\n";
    if (this != &other)
    {
        
    }
    return *this;
}

Data*  Serializer::deserialize(uintptr_t raw)
{
    Data *ret = reinterpret_cast<Data*>(raw);
    return ret;
}

uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t ret = reinterpret_cast<uintptr_t>(ptr);
    return ret;
}

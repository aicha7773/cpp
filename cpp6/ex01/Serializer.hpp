/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 00:30:53 by aatki             #+#    #+#             */
/*   Updated: 2024/01/02 03:59:55 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct
{
    int k;
}Data;

class Serializer
{
    public:
    Serializer();
    ~Serializer();
    Serializer(Serializer &other);  
    Serializer & operator=(Serializer & other);
    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);
};

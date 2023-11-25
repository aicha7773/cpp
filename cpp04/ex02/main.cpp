/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 02:43:31 by aatki             #+#    #+#             */
/*   Updated: 2023/11/25 11:56:50 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    int n=1;
    Animal  *animal[n];
    for(int i=0;i<n;i++)
    {
        if (i % 2)
            animal[i]=new Cat;
        else
            animal[i]=new Dog;
    }
    for(int i=0;i<n;i++)
    {
        delete animal[i];
    }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 02:43:31 by aatki             #+#    #+#             */
/*   Updated: 2023/11/23 17:37:00 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal **tab=new Animal*[40];
    for(int i=0;i<40;i++)
    {
        if (i % 2)
            tab[i]=new Cat;
        else
            tab[i]=new Dog;
    }
    for(int i=0;i<40;i++)
    {
        delete tab[i];
    }
    delete [] tab;
}

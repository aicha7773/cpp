/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 02:43:31 by aatki             #+#    #+#             */
/*   Updated: 2023/11/20 10:55:20 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int mainn()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;
    return 0;
}

int main()
{
    mainn();
    system ("leaks WorldOnFire");
}

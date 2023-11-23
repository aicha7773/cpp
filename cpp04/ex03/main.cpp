/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 02:38:35 by aatki             #+#    #+#             */
/*   Updated: 2023/11/23 16:17:09 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"

int mainn()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    Character me("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me.equip(tmp);
    delete tmp;
    tmp = src->createMateria("cure");
    me.equip(tmp);
    delete tmp;
    ICharacter* bob = new Character("bob");
    Character test(me);
    test.use(0, *bob);
    test.use(1, *bob);
    test.unequip(1);
    test.use(1, *bob);
    delete bob;
    delete src;
    return 0;
}

int main()
{
    mainn();
    system ("leaks AMateria");
}

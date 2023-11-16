/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 05:32:55 by aatki             #+#    #+#             */
/*   Updated: 2023/11/14 23:18:22 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap t("naaadjiya");
    for(int i = 0; i < 100; i++)
        t.attack("appah");
    t.takeDamage(155);
    t.beRepaired(2);
    t.highFivesGuys();
    return 0;
}

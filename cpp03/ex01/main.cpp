/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 05:32:55 by aatki             #+#    #+#             */
/*   Updated: 2023/11/14 23:00:05 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap t("naaadjiya");
    for(int i = 0; i < 100; i++)
        t.attack("appah");
    t.takeDamage(155);
    t.beRepaired(2);
    t.guardGate();
    return 0;
}

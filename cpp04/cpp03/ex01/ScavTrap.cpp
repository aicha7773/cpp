/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 06:29:04 by aatki             #+#    #+#             */
/*   Updated: 2023/11/14 23:05:24 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout<<"Default constructor called from ScavTrap\n";
}

ScavTrap::ScavTrap(std::string initName) : ClapTrap(initName)
{
    std::cout<<"parametrized constructor called from ScavTrap\n";
    Name = initName;
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
    std::cout<<"copy constructor called from ScavTrap\n";
    Name = src.Name;
    HitPoints = src.HitPoints;
    EnergyPoints = src.EnergyPoints;
    AttackDamage = src.AttackDamage;
}

ScavTrap::~ScavTrap()
{
    std::cout<<"Destructor called from ScavTrap\n";
}

ScavTrap & ScavTrap::operator=(ScavTrap const &src)
{
    std::cout<<"copy assiment operator called from ScavTrap\n";
    if (this != &src)
    {
        Name = src.Name;
        HitPoints = src.HitPoints;
        EnergyPoints = src.EnergyPoints;
        AttackDamage = src.AttackDamage;
    }
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout<<"ScavTrap is now in Gate keeper mode\n";
}

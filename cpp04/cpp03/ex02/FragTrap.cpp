/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 23:13:54 by aatki             #+#    #+#             */
/*   Updated: 2023/11/14 23:16:42 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout<<"Default constructor called from FragTrap\n";
}

FragTrap::FragTrap(std::string initName) : ClapTrap(initName)
{
    std::cout<<"parametrized constructor called from FragTrap\n";
    Name = initName;
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
    std::cout<<"copy constructor called from FragTrap\n";
    Name = src.Name;
    HitPoints = src.HitPoints;
    EnergyPoints = src.EnergyPoints;
    AttackDamage = src.AttackDamage;
}

FragTrap::~FragTrap()
{
    std::cout<<"Destructor called from FragTrap\n";
}

FragTrap & FragTrap::operator=(FragTrap const &src)
{
    std::cout<<"copy assiment operator called from FragTrap\n";
    if (this != &src)
    {
        Name = src.Name;
        HitPoints = src.HitPoints;
        EnergyPoints = src.EnergyPoints;
        AttackDamage = src.AttackDamage;
    }
    return *this;
}

void FragTrap::highFivesGuys()
{
    std::cout<<"Again, add more tests to your program.\n";
}

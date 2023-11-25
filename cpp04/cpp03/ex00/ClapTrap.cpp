/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 05:32:50 by aatki             #+#    #+#             */
/*   Updated: 2023/11/15 00:30:37 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout<<"Default constructor called from ClapTrap\n";
}

ClapTrap::ClapTrap(std::string initName)
{
    std::cout<<"parametrized constructor called from ClapTrap\n";
    Name = initName;
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout<<"copy constructor called from ClapTrap\n";
    Name = src.Name;
    HitPoints = src.HitPoints;
    EnergyPoints = src.EnergyPoints;
    AttackDamage = src.AttackDamage;
}

ClapTrap::~ClapTrap()
{
    std::cout<<"Destructor called from ClapTrap\n";
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src)
{
    std::cout<<"copy assiment operator called from ClapTrap\n";
    if (this != &src)
    {
        Name = src.Name;
        HitPoints = src.HitPoints;
        EnergyPoints = src.EnergyPoints;
        AttackDamage = src.AttackDamage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    //std::cout<<"from attack function HitPoints :"<<HitPoints<<" EnergyPoints :"<<EnergyPoints<<" AttackDamage "<<AttackDamage<<"\n";
    if (EnergyPoints > 0 && HitPoints > 0)
    {
        std::cout<<"ClapTrap "<<Name<<" attacks "<<target<<", causing "<<AttackDamage<<"points of damage!\n";
        EnergyPoints --;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    // std::cout<<"from takeDamage function HitPoints :"<<HitPoints<<" EnergyPoints :"<<EnergyPoints<<" AttackDamage "<<AttackDamage<<"\n";
    if (EnergyPoints > 0 && HitPoints > 0)
    {
        std::cout<<"we lose "<<amount<<" EnergyPoint\n";
        if (EnergyPoints < amount)
            EnergyPoints = 0;
        else
            EnergyPoints -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    // std::cout<<"from beRepaired function HitPoints :"<<HitPoints<<" EnergyPoints :"<<EnergyPoints<<" AttackDamage "<<AttackDamage<<"\n";
    if (EnergyPoints > 0 && HitPoints > 0)
    {
        std::cout<<"we gain "<<amount<<" EnergyPoint\n";
        EnergyPoints += amount;
    }
}

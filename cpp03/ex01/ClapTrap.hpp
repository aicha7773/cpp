/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 05:32:52 by aatki             #+#    #+#             */
/*   Updated: 2023/11/14 22:51:47 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap
{
    protected:
        std::string Name;
         unsigned int HitPoints;
         unsigned int EnergyPoints;
         unsigned int AttackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string init_name);
        ClapTrap(ClapTrap const &src);
        ~ClapTrap();
        ClapTrap &operator=(ClapTrap const &src);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

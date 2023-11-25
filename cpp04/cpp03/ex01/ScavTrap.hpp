/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 06:28:05 by aatki             #+#    #+#             */
/*   Updated: 2023/11/14 22:40:18 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :
        ScavTrap();
        ScavTrap(std::string init_name);
        ScavTrap(ScavTrap const &src);
        ~ScavTrap();
        ScavTrap &operator=(ScavTrap const &src);
        void guardGate();
};

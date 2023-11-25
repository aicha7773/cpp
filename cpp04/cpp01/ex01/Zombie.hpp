/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:03:15 by aatki             #+#    #+#             */
/*   Updated: 2023/11/07 09:03:16 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie() ;
        Zombie(std::string name);
        void Zombie_set(std::string name);
        void announce( void );
        ~Zombie();

};

Zombie* zombieHorde( int N, std::string name );

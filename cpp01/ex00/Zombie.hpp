/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 07:56:04 by aatki             #+#    #+#             */
/*   Updated: 2023/11/07 09:03:10 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string name);
        void announce( void );
        ~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

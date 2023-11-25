/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 07:56:01 by aatki             #+#    #+#             */
/*   Updated: 2023/11/07 08:29:18 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string n)
{
    std::cout << "a constructor has been called by the Zombie : "<< n<<std::endl;
    name = n;
}

void Zombie::announce()
{
    std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::~Zombie()
{
    std::cout << "a destructor has been called by the Zombie : "<< name <<std::endl;
}

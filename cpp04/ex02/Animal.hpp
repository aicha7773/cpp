/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 02:54:52 by aatki             #+#    #+#             */
/*   Updated: 2023/11/23 20:22:25 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal 
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(Animal const &src);
        virtual ~Animal();
        Animal & operator=(Animal const &src);
        std::string getType() const;
        virtual void makeSound() const = 0;
};

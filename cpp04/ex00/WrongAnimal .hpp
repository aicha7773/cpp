/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 02:54:52 by aatki             #+#    #+#             */
/*   Updated: 2023/11/20 15:06:44 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal 
{
    protected:
    std::string type;
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal const &src);
        ~WrongAnimal();
        WrongAnimal & operator=(WrongAnimal const &src);
        std::string getType() const;
        virtual void makeSound() const;
};

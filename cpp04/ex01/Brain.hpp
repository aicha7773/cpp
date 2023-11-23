/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:16:34 by aatki             #+#    #+#             */
/*   Updated: 2023/11/23 17:35:49 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include <stdlib.h>

class Brain
{
    private :
        std::string *ideas;
    public :
        Brain();
        Brain(Brain const &src);
        ~Brain();
        Brain & operator=(Brain const &src);
};


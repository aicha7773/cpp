/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:16:34 by aatki             #+#    #+#             */
/*   Updated: 2023/11/20 09:22:28 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>

class Brain
{
    private :
        std::string ideas[100];
    public :
        Brain();
        Brain(Brain const &src);
        ~Brain();
        Brain & operator=(Brain const &src);
        std::string* getIdeas()const;
};


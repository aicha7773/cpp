/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 05:37:17 by aatki             #+#    #+#             */
/*   Updated: 2023/11/07 09:03:39 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


class Harl
{
    private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    public:
    void complain( std::string level );
};
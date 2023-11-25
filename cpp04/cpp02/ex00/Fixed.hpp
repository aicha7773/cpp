/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:16:01 by aatki             #+#    #+#             */
/*   Updated: 2023/11/13 02:54:24 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
    private:
        int fixedPoint;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(Fixed const & src);
        ~Fixed();
        Fixed & operator =(Fixed const & src);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

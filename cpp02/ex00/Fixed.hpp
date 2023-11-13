/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:16:01 by aatki             #+#    #+#             */
/*   Updated: 2023/11/13 02:13:52 by aatki            ###   ########.fr       */
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
        void storing(float number);
};

int *dicimal_to_binary(unsigned int n,int *size);

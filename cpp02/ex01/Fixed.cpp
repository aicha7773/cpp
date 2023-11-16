/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:15:53 by aatki             #+#    #+#             */
/*   Updated: 2023/11/14 04:35:20 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout<<"Default constructor called\n";
    fixedPoint = 0;
}

Fixed::Fixed(int const value)
{
    std::cout<<"Int constructor called\n";
    fixedPoint = value << bits;
}

Fixed::Fixed(float const value)
{
    std::cout<<"Float constructor called\n";
    float Fnum = value;
    int one = 1;
    one <<= bits;
    Fnum*=one;
    fixedPoint = roundf(Fnum);
}

Fixed::Fixed(Fixed const & src)
{
    std::cout<<"Copy constructor called\n";
    fixedPoint = src.fixedPoint;
}

Fixed::~Fixed()
{
    std::cout<<"Destructor called\n";
}

Fixed & Fixed::operator=(Fixed const & src)
{
    std::cout<<"Copy assignment operator called\n";
    if (this != &src)
    {
        fixedPoint = src.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits( void ) const
{
    std::cout<<"getRawBits member function called\n";
    return fixedPoint;
}

void Fixed::setRawBits( int const raw )
{
    std::cout<<"setRawBits member function called\n";
    fixedPoint = raw;
}

float Fixed::toFloat( void ) const
{
    float change = fixedPoint;
    int one = 1;
    one <<= bits;
    change /= one;
    return change;
}

int Fixed::toInt( void ) const
{
    int change = fixedPoint;
    change = change >> bits;
    return change;
}

std::ostream& operator<< (std::ostream &os, const Fixed &obj)
{
    os << obj.toFloat();
    return os;
}

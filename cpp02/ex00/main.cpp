/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:15:50 by aatki             #+#    #+#             */
/*   Updated: 2023/11/13 02:12:52 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    // Fixed a;
    // Fixed b( a );
    // Fixed c;
    // c = b;
    // std::cout << a.getRawBits() << std::endl;
    // std::cout << b.getRawBits() << std::endl;
    // std::cout << c.getRawBits() << std::endl;
    int *size=NULL;
    int *tab=dicimal_to_binary(7,size);
    int i=0;
    printf("%d\n",*size);
    while(i < 3)
    {
        printf("tab[%d] = %d\n",i,tab[i]);
        i++;
    }
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 03:09:47 by aatki             #+#    #+#             */
/*   Updated: 2023/11/03 03:10:50 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i=1;
    int j=0;

    if (ac == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while(av[i])
    {
        j=0;
        while(av[i][j])
        {
            av[i][j]=toupper(av[i][j]);
            std::cout<<av[i][j];
            j++;
        }
        i++;
    }
    std::cout<<std::endl;
    return 0;
}
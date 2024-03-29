/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 05:43:45 by aatki             #+#    #+#             */
/*   Updated: 2024/01/12 01:34:39 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int> ar(3);
    Array<int> ar2(3);
    try{
        ar[0]=1;
        ar[1]=9000000;
        int o=ar[2]=3;
        std::cout<<o<<std::endl;
    for (int i=0;i<3;i++)
        std::cout<<ar[i]<<std::endl;
    }
    catch(std::exception& e){
        std::cout << e.what() << std::endl;
    }
}

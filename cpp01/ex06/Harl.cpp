/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 05:41:38 by aatki             #+#    #+#             */
/*   Updated: 2023/11/11 15:30:31 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double- \
    cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
}

void Harl::info()
{
     std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put \
            enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void Harl::warning()
{
     std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for \
        years whereas you started working here since last month."<<std::endl;
}

void Harl::error()
{
     std::cout << "This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void Harl::complain( std::string level)
{
    int i=0;
    std::string levelPtr[] = {"DEBUG", "INFO", "WARNING", "ERROR", "I am not sure how tired I am today..."};
    while(i < 5)
    {
        if (levelPtr[i] == level)
            break;
        i++;
    }
    switch (i + 1) {
    case 1:
        debug();
    case 2:
        info();
    case 3:
        warning();
    case 4:
        error();
        break;
    case 5:
        std::cout<<"[ Probably complaining about insignificant problems ]\n";
    }
}

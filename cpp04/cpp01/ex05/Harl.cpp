/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 05:41:38 by aatki             #+#    #+#             */
/*   Updated: 2023/11/09 20:52:30 by aatki            ###   ########.fr       */
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
     std::cout <<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void Harl::complain( std::string level)
{
    int i=0;
    std::string levelPtr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*functionPtrs[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    while(i < 4)
    {
        if (levelPtr[i] == level)
            (this->*functionPtrs[i])();
        i++;
    }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 02:06:11 by aatki             #+#    #+#             */
/*   Updated: 2024/01/06 20:39:42 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Functions.hpp"

Base * generate(void)
{
    srand (time(0));
    int r = rand();
    if (r % 3 == 0)
        return new A;
    else if(r % 2 == 0)
        return new B;
    else
        return new C;
}

void identify(Base* p)
{
    
    if (dynamic_cast<A*>(p))
        std::cout<<"A\n";
    else if (dynamic_cast<B*>(p))
         std::cout<<"B\n";
    else if (dynamic_cast<C*>(p))
        std::cout<<"C\n";
    else
        std::cout<<"class not found\n";
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout<<"A\n";
    }
    catch(const std::exception &e)
    {
            try
            {
                (void)dynamic_cast<B&>(p);
                std::cout<<"B\n";
            }
            catch(const std::exception &e)
            {
                    try
                    {
                        (void)dynamic_cast<C&>(p);
                        std::cout<<"C\n";
                    }
                    catch(const std::exception &e)
                    {
                        std::cout<<"no Derived class\n";
                    }
            }
    }
}

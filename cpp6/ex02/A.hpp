/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 01:56:12 by aatki             #+#    #+#             */
/*   Updated: 2024/01/03 03:02:21 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Base.hpp"

class A : public Base
{
    public:
        ~A();
        void getName();
        Base * generate(void);
        void identify(Base* p);
        void identify(Base& p);
};

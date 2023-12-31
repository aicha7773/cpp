/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 02:04:41 by aatki             #+#    #+#             */
/*   Updated: 2024/01/04 00:18:22 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <exception>

Base * generate(void);
void identify(Base* p);
void identify(Base& p);


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:03:51 by aatki             #+#    #+#             */
/*   Updated: 2023/11/07 09:03:52 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include <sstream>

void replace(char **av);
void writeInFile(std::string line, std::ofstream &outputFile, std::string word , std::string replacew);

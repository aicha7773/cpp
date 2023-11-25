/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:05:27 by aatki             #+#    #+#             */
/*   Updated: 2023/11/07 09:05:28 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void replace(char **av)
{
    std::string s = av[1];
    std::string line;
    std::ifstream inputFile(av[1]);

    if (!inputFile.is_open())
    {
        std::cout << "Error: Could not open the file." << std::endl;
        return ;
    }
    std::ofstream outputFile(s.append(".replace"));
    if (!outputFile.is_open())
    {
        std::cout << "Error: Could not open the file." << std::endl;
        return ;
    }
    while (!inputFile.eof())
    {
        getline(inputFile,line);
        writeInFile(line, outputFile, av[2],av[3]);
    }
    inputFile.close();
    outputFile.close();
}

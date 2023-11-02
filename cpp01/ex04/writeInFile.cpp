/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writeInFile.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:01:19 by aatki             #+#    #+#             */
/*   Updated: 2023/11/01 16:56:26 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void writeInFile(std::string line, std::ofstream &outputFile, std::string word)
{
    std::cout<<word<<line<<"njkfjlht\n";
    // (void)outputFile;
    std::istringstream stream(line);
    std::string token;
    while (std::getline(stream, token, ' '))
    {
        if (word == token)
            outputFile <<"kkkkkkkkk"<<" ";
        else
            outputFile << token<< " ";
        std::cout<<token;
    }
    outputFile<<std::endl;
}

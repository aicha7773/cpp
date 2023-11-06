/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writeInFile.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:01:19 by aatki             #+#    #+#             */
/*   Updated: 2023/11/06 05:52:41 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void writeInFile(std::string line, std::ofstream &outputFile, std::string word , std::string replacew)
{
    std::size_t i=0;
    std::string token;
    std::size_t found=line.find(word);
    while (found != std::string::npos)
    {
        outputFile<<line.substr(i,found);
        outputFile<<replacew;
        i+=word.length();
        found = line.find(word,i);
    }
    outputFile<<line.substr(i,line.length());
    outputFile<<std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:37:38 by aatki             #+#    #+#             */
/*   Updated: 2024/01/17 17:08:04 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int CheckRanges(long long tab)
{
    if (tab [0] < 2009 || tab[0] > 2022)
        return 0;
        if (tab [0] < 2009 || tab[0] > 2022)
        return 0;
        if (tab [0] < 2009 || tab[0] > 2022)
        return 0;
    return 1;
}

int CheckLine(std::string line)
{
    unsigned int i=0;
    long long tab[4];
    if (line.size() < 13)
        return 0;
    if (line[4] != '-' || line[7] != '-' || line[10] != ' ' || line[11] != '|' || line[12] != ' ')
        return 0;
    line[4] = '1';
    line[7] = '1';
    line[10] = '1';
    line[11] = '1';
    line[12] = '1';
    while(!line.empty() && i < 13)
    {
        if(!isdigit(line[i]))
            return 0;
        i++;
    }
    while(i < line.size())
    {
        if(!isdigit(line[i]) && line[i] != '.' && line[i] != '-' && line[i] != '+')
            return 0;
        i++;
    }
    tab[0] = stoi(line.substr(0,4));
    tab[1] = stoi(line.substr(5,2));
    tab[2] = stoi(line.substr(8,2));
    tab[3] = stoi(line.substr(13,line.size() - 12));
    std::cout<<tab[0]<<" "<<tab[1]<<" "<<tab[2]<<' '<<tab[3]<<"fiiin\n";
    return CheckRanges(tab);
    return 1;
}

void ParsingInputFile(std::string input)
{
    std::string line;
    std::ifstream myfile (input.c_str());
    if (myfile.is_open())
    {
        getline (myfile,line);
        if (line != "date | value")
        {
            std::cout <<"an error has been found\n";
            return ;
        }
        while (getline (myfile,line))
        {
            if (!CheckLine(line))
            {
                std::cout <<"an error has been found\n";
                return ;
            }
        }
        myfile.close();
        std::cout <<"everyting workin clean\n";
    }
    else
        std::cout << "Unable to open file\n";
}

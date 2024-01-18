/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:37:38 by aatki             #+#    #+#             */
/*   Updated: 2024/01/18 14:22:12 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int printError(std::string errormessage)
{
    std::cout<<errormessage<<std::endl;
    return 0;

}

long double toDouble(std::string numStr)
{
    std::stringstream ss;
    long double num;

    ss << numStr;
    ss >> num;
    return num;
}

std::map<std::string, double>    ParsingData()
{
    std::map <std::string, double> mapy;
    std::string line;
    std::ifstream data("data.csv");
    if (data.is_open())
    {
        getline(data,line);
        while (getline(data,line))
            mapy[line.substr(0,10)] = toDouble(line.substr(11,line.size() - 10));
    }
    else
        printError("Unable to open file");
    return mapy;
}

int CheckRanges(long double *tab)
{
    if (tab [0] < 2009 || tab[0] > 2022)
        return printError("year is out of rang");
    if (tab [1] < 1|| tab[1] > 12)
        return printError("month is out of rang");
    if (tab [2] < 1 || tab[2] > 31)
        return printError("day is out of rang");
    if (tab [3] < 0 || tab[3] > 1000)
        return printError("value is out of rang");
    if (tab[1] == 2 && tab[2] > 29)
        return printError("it's february b****");
    if ((int)(tab[0] - 2008) % 4 != 0 && tab[1] == 2 && tab[2] == 29)
        return printError("guess what it's a leap year");
    if (tab[2] > 30 && (tab[1] != 1 && tab[1] != 3 && tab[1] != 5 &&tab[1] != 7 &&tab[1] != 8 && tab[1] != 10 && tab[1] != 12) )
        return printError("not in this month");
    return 1;
}

int CheckLine(std::string line)
{
    long double tab[4];
    unsigned int i=0;

    if (line.size() < 13)
        return printError("bad format");
    if (line[4] != '-' || line[7] != '-' || line[10] != ' ' || line[11] != '|' || line[12] != ' ')
        return printError("bad format");
    line[4] = '1';
    line[7] = '1';
    line[10] = '1';
    line[11] = '1';
    line[12] = '1';
    while(!line.empty() && i < 13)
    {
        if(!isdigit(line[i]))
            return printError("it should be a digit");
        i++;
    }
    while(i < line.size())
    {
        if(!isdigit(line[i]) && line[i] != '.' && line[i] != '-' && line[i] != '+')
            return printError("it should be a digit");
        i++;
    }
    tab[0] = toDouble(line.substr(0,4));
    tab[1] = toDouble(line.substr(5,2));
    tab[2] = toDouble(line.substr(8,2));
    tab[3] = toDouble(line.substr(13,line.size() - 12));
    return CheckRanges(tab);
    return 1;
}

void ParsingInputFile(std::string input)
{
    std::map<std::string, double> mapy = ParsingData();
    std::string line;
    double value;
    std::ifstream myfile (input.c_str());
    if (myfile.is_open())
    {
        getline (myfile,line);
        if (line != "date | value")
        {
            std::cout <<"an error has been occurend\n";
            return ;
        }
        while (getline (myfile,line))
        {
            if (!CheckLine(line))
                continue ;
            std::map<std::string, double>::iterator UP = mapy.upper_bound(line.substr(0,10));
            UP--;
            value =  UP->second * toDouble(line.substr(13,line.size() - 12));
            std::cout<<line.substr(0,10)<<" => "<<line.substr(13,line.size() - 12)<<" = "<<value<<std::endl;
        }
        myfile.close();
    }
    else
        std::cout << "Unable to open file\n";
}

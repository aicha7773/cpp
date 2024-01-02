/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 00:33:07 by aatki             #+#    #+#             */
/*   Updated: 2024/01/02 04:05:33 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout<<"the ScalarConverter Default constructor\n";
}

ScalarConverter::~ScalarConverter()
{
    std::cout<<"the ScalarConverter Destructor\n";
}

ScalarConverter::ScalarConverter(ScalarConverter &other)
{
    std::cout<<"the ScalarConverter copy constructor\n";
    if (this != &other)
    {
        
    }
}  

ScalarConverter & ScalarConverter::operator=(ScalarConverter & other)
{
    std::cout<<"the ScalarConverter assiment operator\n";
    if (this != &other)
    {
        
    }
    return *this;
}

void ScalarConverter::convert(std::string str)
{
    std::cout<<"char: "<<std::endl;
    std::cout<<"int: "<<stoi(str)<<std::endl;
    std::cout<<"float: "<<stof(str)<<"f"<<std::endl;
    std::cout<<"double: "<<stod(str)<<std::endl;
}

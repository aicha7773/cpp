/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 00:30:53 by aatki             #+#    #+#             */
/*   Updated: 2024/01/02 03:59:55 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ScalarConverter
{
    public:
    ScalarConverter();
    ~ScalarConverter();
    ScalarConverter(ScalarConverter &other);  
    ScalarConverter & operator=(ScalarConverter & other);
    void convert(std::string str);
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:33:13 by aatki             #+#    #+#             */
/*   Updated: 2024/01/18 19:56:30 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

long double toDouble(std::string numStr)
{
    std::stringstream ss;
    long double num;

    ss << numStr;
    ss >> num;
    return num;
}

int ErrorChecker(std::string input)
{
    unsigned int i=0;

    while(i < input.size())
    {
        if (!isdigit(input[i]) && input[i] != '+' && input[i] != '-' && input[i] != '*' && input[i] != '/' && input[i] != ' ')
        {
            std::cerr<<"Error"<<std::endl;
            return 1;
        }
        i++;
    }
    return 0;
}

long double generateNum(std::string part, int *i)
{
    std::string tmp = "";

    while (isdigit(partt[*i]) || partt[*i] == ' ')
    {
        if (isdigit(partt[*i]))
            tmp += partt[*i];
        *i++;
    }
    return toDouble(tmp);
    
}

void calculator(std::string input)
{
    long double result = 0;
    unsigned int i = 0;
    long double tmpNum;
    long double tmpNum2;
    int j=0;
    std::stack<long double> stk;

    if (ErrorChecker(input))
        return ;
    while(i < input.size() && (i == '+' || i == '*' || i == '/' || i == '-'))
        i++;
    while(i < input.size())
    {
        tmpNum = generate(input , &i);
        if (input[i] == '*' || input[i] == '/')
        {
            if (input[i - 1] == '*')
                stk[j] *= tmpNum;
            else
                stk[j] /= tmpNum;
            j--;
        }
        else
            stk.push(tmp);
        j++;
        i++;
    }
    // for(std::stack<long double>::iterator it = stk.begin(); it != stk.end() ; it++)
    // {
    //     std::cout<<*it<<std::endl;
    // }
    std::cout<<"result = "<<result<<std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:33:13 by aatki             #+#    #+#             */
/*   Updated: 2024/01/20 16:06:00 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

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

int  toInt(std::string numStr)
{
    std::stringstream ss(numStr);
    int  num=0;

    if (!(ss >> num))
        return 8888888;
    return num;
}

void  generateNum(std::stack<int> &stk, std::string part, unsigned int &i)
{
    if (i >= part.size())
        return ;
    std::string tmp = "";
    int k=0;
    while (i < part.size() && part[i] == ' ')
            i++;
    while (i < part.size() && isdigit(part[i]))
    {
        if (isdigit(part[i]))
            tmp += part[i];
        i++;
        k++;
    }
    if (k)
        stk.push(toInt(tmp));
}

void operators(std::stack<int> &stk, std::string input,unsigned int &i)
{
    int  popHere;
    int  popHere2;
    if (i < input.size() && stk.size() >= 2 && (input[i] == '+' || input[i] == '/' || input[i] == '*' || input[i] == '-'))
    {
        popHere = stk.top();
        stk.pop();
        popHere2 = stk.top();
        stk.pop();
        if (input[i] == '+')
            stk.push(popHere + popHere2);
        if (input[i] == '*')
            stk.push(popHere * popHere2);
        if (input[i] == '-')
            stk.push(popHere2 - popHere);
        if (input[i] == '/')
        {
            if(popHere != 0)
                stk.push(popHere / popHere2);
            else
            {
                std::cerr<<"Error"<<std::endl;
                return ;
            }
        }
        i++;
        std::cout<<"stk size = "<<stk.size()<<"    stk value"<<stk.top()<<std::endl;
    }
}

void calculator(std::string input)
{
    std::stack<int > stk;
    int  result = 0;
    unsigned int i = 0;

    if (ErrorChecker(input))
        return ;
    while(i < input.size())
    {
        while (i < input.size() && input[i] == ' ')
            i++;
        operators(stk,input,i);
        generateNum(stk, input , i);
        while (i < input.size() && input[i] == ' ')
            i++;
        operators(stk,input,i);
    }
    if (stk.size() != 1)
    {
        std::cerr<<"Error heeere"<<std::endl;
        return ;
    }
    result = stk.top();
    std::cout<<"result = "<<result<<std::endl;
}

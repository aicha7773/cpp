/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:34:41 by aatki             #+#    #+#             */
/*   Updated: 2024/01/22 00:07:01 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void ErrorChecker(std::string input)
{
    unsigned int i=0;

    while(i < input.size())
    {
        if (!isdigit(input[i]) && input[i] != '+' && input[i] != '-' && input[i] != '*' && input[i] != '/' && input[i] != ' ')
            throw std::runtime_error("Error\n");
        i++;
    }
}

int  toInt(std::string numStr)
{
    std::stringstream ss(numStr);
    int  num=0;

    if (!(ss >> num))
        throw std::runtime_error("Error\n");
    return num;
}

std::vector<int> merge(std::vector<int> vecOne, std::vector<int> vecTwo)
{
    std::vector<int> vecTree;

    while(vecOne.size() && vecTwo.size())
    {
        if (vecOne.front() < vecTwo.front())
        {
            vecTree.push_back(vecOne.front());
            vecOne.erase(vecOne.begin());
        }
        else
        {
            vecTree.push_back(vecTwo.front());
            vecTwo.erase(vecTwo.begin());
        }
    }
    while(vecOne.size())
    {
        vecTree.push_back(vecOne.front());
        vecOne.erase(vecOne.begin());
    }
    while(vecTwo.size())
    {
        vecTree.push_back(vecTwo.front());
        vecTwo.erase(vecTwo.begin());
    }
    return vecTree;
}

std::vector<int> mergesort(std::vector<int> vec)
{
    std::vector<int> vecOne;
    std::vector<int> vecTwo;

    if (vec.size() == 1)
        return vec;
    if(vec.size() % 2 == 0)
        vecOne.assign(vec.begin(), vec.end() - (vec.size() / 2));
    else
        vecOne.assign(vec.begin(), vec.end() - (vec.size() / 2) - 1);
    vecTwo.assign(vec.begin() + vec.size() / 2, vec.end());
    vecOne = mergesort(vecOne);
    vecTwo = mergesort(vecTwo);
    return (merge(vecOne,vecTwo));
}

void insertion(std::vector<int> & vec)
{
    int tmp;

    for(unsigned int i = 1; i < vec.size(); i++)
    {
        for(int j=i;j > 0 && vec[j - 1] > vec[j]; j--)
        {
            tmp = vec[j - 1];
            vec[j - 1] = vec[j];
            vec[j] = tmp;
        }
    }
}

void putItIn(char **av)
{
    int i=0;

    std::vector<int> vec;
    while(av[i])
    {
        vec.push_back(toInt(av[i]));
        i++;
    }
    insertion(vec);
    for (unsigned int j = 0; j < vec.size(); j++)
        std::cout<<vec[j]<<std::endl;
    std::cout<<"Time to process a range of "<<vec.size()<<" elements with std::[..] : 0.00031"<< <<" us"<<std::endl;
    std::cout<<"Time to process a range of 5 elements with std::[..] : 0.00031 us"<<std::endl;
}

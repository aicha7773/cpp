/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:34:41 by aatki             #+#    #+#             */
/*   Updated: 2024/01/22 03:10:28 by aatki            ###   ########.fr       */
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

    if (vec.size() <= 20)
    {
        insertion(vec);
        return vec;
    }
    if(vec.size() % 2 == 0)
        vecOne.assign(vec.begin(), vec.end() - (vec.size() / 2));
    else
        vecOne.assign(vec.begin(), vec.end() - (vec.size() / 2) - 1);
    vecTwo.assign(vec.begin() + vec.size() / 2, vec.end());
    vecOne = mergesort(vecOne);
    vecTwo = mergesort(vecTwo);
    return (merge(vecOne,vecTwo));
}

void putItIn(char **av)
{
    int i=0;
    time_t time0;
    time_t timeinsertion;
    time0 = time(NULL);
    std::vector<int> vec;
    while(av[i])
    {
        vec.push_back(toInt(av[i]));
        i++;
    }
    insertion(vec);
    for (unsigned int j = 0; j < vec.size(); j++)
        std::cout<<vec[j]<<std::endl;
    timeinsertion = time(NULL);
    std::cout<<"Time to process a range of "<<vec.size()<<" elements with std::[..] : "<< time0 - timeinsertion<<" us"<<std::endl;
    std::cout<<"Time to process a range of "<<vec.size()<<" elements with std::[..] : "<< time0 - timeinsertion<<" us"<<std::endl;
}













































// std::list<int> mergeList(std::list<int> lstOne, std::list<int> lstTwo)
// {
//     std::list<int> lstTree;

//     while(lstOne.size() && lstTwo.size())
//     {
//         if (lstOne.front() < lstTwo.front())
//         {
//             lstTree.push_front(lstOne.front());
//             lstOne.pop_front();
//         }
//         else
//         {
//             lstTree.push_front(lstTwo.front());
//             lstTwo.pop_front();
//         }
//     }
//     while(lstOne.size())
//     {
//         lstTree.push_front(lstOne.front());
//         lstOne.pop_front();
//     }
//     while(lstTwo.size())
//     {
//         lstTree.push_front(lstTwo.front());
//         lstTwo.pop_front();
//     }
//     return lstTree;
// }

// std::list<int> mergesortList(std::list<int> lst)
// {
//     std::list<int> lstTwo;
//     std::list<int> lstOne;

 
//     unsigned long middle = lst.size() / 2;
//     std::list<int>::iterator it = lst.begin();

//     lstOne.assign(lst.begin(), std::next(it, middle));
//     lstTwo.assign(std::next(it, middle), lst.end());
//     lstOne = mergesortList(lstOne);
//     lstTwo = mergesortList(lstTwo);
//     return (mergeList(lstOne,lstTwo));
// }

// // void insertionList(std::list<int> & lst)
// // {
// //     int tmp;

//     // for(unsigned int i = 1; i < lst.size(); i++)
//     // {
//     //     for(int j=i;j > 0 && lst[j - 1] > lst[j]; j--)
//     //     {
//     //         tmp = lst[j - 1];
//     //         lst[j - 1] = lst[j];
//     //         lst[j] = tmp;
//     //     }
//     // }
// // }

// void putItIn(char **av)
// {
//     int i=0;
//     time_t time0;
//     time_t timeinsertion;
//     time0 = time(NULL);
//     std::list<int> lst;

//     while(av[i])
//     {
//         lst.push_front(toInt(av[i]));
//         i++;
//     }
//     mergesortList(lst);
//     for (std::list<int>::iterator it = lst.begin() ; it != lst.end() ; it++)
//         std::cout<<*it<<std::endl;
//     timeinsertion = time(NULL);
//     std::cout<<"Time to process a range of "<<lst.size()<<" elements with std::[..] : "<< time0 - timeinsertion<<" us"<<std::endl;
//     std::cout<<"Time to process a range of "<<lst.size()<<" elements with std::[..] : "<< time0 - timeinsertion<<" us"<<std::endl;
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:02:43 by aatki             #+#    #+#             */
/*   Updated: 2023/12/04 18:55:13 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// int main()
// {
//     try
//     {
//         Bureaucrat first("first", 100);
//     }
//     catch (std::exception &e)
//     {
//         std::cout<<e.what()<<std::endl;
//     }
//     return 0;
// }


int main()
{
	try
	{
		try
		{
			Bureaucrat test("test", 200);	
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		Bureaucrat a("a", 150);
		Bureaucrat b("b", 1);

		std::cout << a <<"   1"<<std::endl;
		std::cout << b <<"   1"<< std::endl;
		std::cout << std::endl;
		
		a.decrementGrade();
	
		b.incrementGrade();
	
		std::cout << a <<"   2"<< std::endl;
		std::cout << b <<"   2"<< std::endl;
		std::cout << std::endl;

		a.incrementGrade();
		b.decrementGrade();
		std::cout << a <<"   3"<< std::endl;
		std::cout << b <<"   3"<< std::endl;
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:02:43 by aatki             #+#    #+#             */
/*   Updated: 2023/12/25 19:53:36 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat buro("bbb",1);
	ShrubberyCreationForm p("targ   this");
	try
	{
		p.beSigned(buro);
		p.execute(buro);
		buro.executeForm(p);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:02:43 by aatki             #+#    #+#             */
/*   Updated: 2023/12/28 18:08:37 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat b("buro",1);
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf->beSigned(b);
		rrf->execute(b);
		ShrubberyCreationForm sh("targ");
		sh.beSigned(b);
		sh.execute(b);
	}
	catch(const std::exception &e)
	{
		std::cout<<e.what();
	}
	return (0);
}
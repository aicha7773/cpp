/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:02:43 by aatki             #+#    #+#             */
/*   Updated: 2023/12/30 21:58:13 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat b("buro",1);
		Intern someRandomIntern;
		AForm* rrf=NULL;
		rrf = someRandomIntern.makeForm("prejbjsidghkjbential pardon", "Bender");
		rrf->beSigned(b);
		rrf->execute(b);
	}
	catch(const std::exception &e)
	{
		std::cout<<e.what();
	}
	return (0);
}

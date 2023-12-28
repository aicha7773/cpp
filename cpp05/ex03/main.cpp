/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:02:43 by aatki             #+#    #+#             */
/*   Updated: 2023/12/28 18:48:02 by aatki            ###   ########.fr       */
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
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		rrf->beSigned(b);
		rrf->execute(b);
	}
	catch(const std::exception &e)
	{
		std::cout<<e.what();
	}
	return (0);
}

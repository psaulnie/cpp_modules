/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:14:40 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/23 15:21:14 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(Intern &copy)
{
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern	&Intern::operator=(Intern &copy)
{
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Form*	makeForm(std::string name, std::string target)
{
	switch ()
	{
	case /* constant-expression */:
		/* code */
		break;
	
	default:
		break;
	}
	try
	{
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

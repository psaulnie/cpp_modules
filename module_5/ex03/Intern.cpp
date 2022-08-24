/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:14:40 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/24 08:52:38 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(Intern &copy)
{
	(void)copy;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern	&Intern::operator=(Intern &copy)
{
	(void)copy;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}


// void	(Harl::*array[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
Form*	Intern::makeForm(std::string name, std::string target)
{
	try
	{
		std::string	array[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
		Form*		(Intern::*form[])(std::string name, std::string target) = {&Intern::createRobotomy, &Intern::createPresidential, &Intern::createShrubbery};
		for (int i = 0; i < 2; i++)
			if (array[i] == name)
				return ((this->*form[i])(name, target));
		throw	std::exception();
	}
	catch(const std::exception& e)
	{
		std::cerr << "This form does not exist !" << std::endl;
		return (NULL);
	}
	
}

Form	*Intern::createRobotomy(std::string name, std::string target)
{
	return (new RobotomyRequestForm(name, target));
}

Form	*Intern::createPresidential(std::string name, std::string target)
{
	return (new PresidentialPardonForm(name, target));
}

Form	*Intern::createShrubbery(std::string name, std::string target)
{
	return (new ShrubberyCreationForm(name, target));
}

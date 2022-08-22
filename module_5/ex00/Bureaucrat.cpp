/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:03:17 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/22 12:11:20 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Minion")
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	this->grade = 150;
	return ;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	try
	{
		if (grade > 150)
			throw BureaucratException::tooHigh();
	}
	catch(const BureaucratException& e)
	{
		std::cerr << e.tooHigh() << '\n';
	}
	
	this->grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat &copy) : name(copy.name)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	this->grade = copy.grade;
	return ;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &copy)
{
	this->grade = copy.grade;
	return (*this);
}
	

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
	return ;
}

std::string	Bureaucrat::getName()
{
	return (this->name);
}

int	Bureaucrat::getGrade()
{
	return (this->grade);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:03:51 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/06 14:39:10 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signGrade, int executeGrade)
try : name(name), signGrade(signGrade), executeGrade(executeGrade)
{
	std::cout << "Form default constructor called" << std::endl;
	this->isSigned = false;
	if (signGrade > 150 || executeGrade > 150)
		throw	GradeTooLowException();
	else if (signGrade < 1 || executeGrade < 1)
		throw	GradeTooHighException();
}
catch(const std::exception& e)
{
	std::cerr << e.what() << std::endl;
}

Form::Form(Form &copy) : name(copy.name), signGrade(copy.signGrade), executeGrade(copy.executeGrade)
{
	std::cout << "Form copy constructor called" << std::endl;
	this->isSigned = copy.isSigned;
	return ;
}

Form	&Form::operator=(Form &copy)
{
	this->isSigned = copy.isSigned;
	return (*this);
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
	return ;
}

std::string	Form::getName() const
{
	return (this->name);
}

bool		Form::getIsSigned() const
{
	return (this->isSigned);
}

int			Form::getSignGrade() const
{
	return (this->signGrade);
}

int			Form::getExecuteGrade() const
{
	return (this->executeGrade);
}

void	Form::beSigned(Bureaucrat *person)
{
	try
	{
		if (this->isSigned == true)
			throw	Form::AlreadySigned();
		else if (person->getGrade() > this->signGrade)
			throw	Form::GradeTooLowException();
		this->isSigned = true;
		std::cout << this->getName() << " get signed by " << person->getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

void	Form::setBeSigned()
{
	if (this->isSigned == true)
		this->isSigned = false;
	else
		this->isSigned = true;
}

bool	Form::canBeExecuted(Bureaucrat const *person) const
{
	try
	{
		if (this->getIsSigned() == false)
			throw	NotSignedFormException();
		else if (this->getExecuteGrade() < person->getGrade())
			throw	GradeTooLowException();
		else
			return true;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (false);
	}
}

std::ostream	&operator<<(std::ostream& os, Form const &curr)
{
	os << "Form " << curr.getName() << std::endl;
	return (os);
}
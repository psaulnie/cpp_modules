/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:03:17 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/06 14:37:26 by psaulnie         ###   ########.fr       */
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
			throw	Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw	Bureaucrat::GradeTooHighException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return ;
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

std::string	Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void		Bureaucrat::gradeUp()
{
	try
	{
		if (this->grade - 1 < 1)
			throw	Bureaucrat::GradeTooHighException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
	this->grade -= 1;
}

void		Bureaucrat::gradeDown()
{
	try
	{
		if (this->grade + 1 > 150)
			throw	Bureaucrat::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
	this->grade += 1;
}

void		Bureaucrat::signForm(Form *form)
{
	try
	{
		if (form->getIsSigned() == true)
			throw	Form::AlreadySigned();
		else if (form->getSignGrade() < this->getGrade())
			throw	Bureaucrat::GradeTooLowException();
		else
		{
			form->setBeSigned();
			std::cout << this->getName() << " signed " << form->getName() << std::endl;
		}
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const &form)
{
	form.execute(*this);
}

std::ostream	&operator<<(std::ostream& os, Bureaucrat const &curr)
{
	os << curr.getName() << ", bureaucrat grade " << curr.getGrade() << ".";
	return (os);
}
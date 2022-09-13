/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:10:40 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/23 13:52:49 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy request form", 145, 137)
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy) : Form(copy.getName(), copy.getSignGrade(), copy.getExecuteGrade())
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	this->target = copy.target;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm &copy)
{
	this->target = copy.target;
	if (this->getIsSigned() != copy.getIsSigned())
		this->setBeSigned();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
		if (this->canBeExecuted(&executor) == false)
			return ;
		std::cout << "*DRILL NOISES*" << std::endl;
		std::srand(std::time(nullptr));
		if (std::rand() % 2 == 0)
			std::cout << "Target " << this->target << " has been succesfully robotomized !" << std::endl;
		else
			std::cout << "Target " << this->target << " couldn't be robotomized..." << std::endl;
		return ;
}
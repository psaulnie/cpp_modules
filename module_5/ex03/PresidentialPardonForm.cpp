/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:10:40 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/23 13:52:49 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("presidential pardon form", 25, 5)
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy) : Form(copy.getName(), copy.getSignGrade(), copy.getExecuteGrade())
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	this->target = copy.target;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm &copy)
{
	this->target = copy.target;
	if (this->getIsSigned() != copy.getIsSigned())
		this->setBeSigned();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
		if (this->canBeExecuted(&executor) == false)
			return ;
		std::cout << "Target " << this->target << " has been forgiven by Zaphod Beeblerox" << std::endl;
		return ;
}
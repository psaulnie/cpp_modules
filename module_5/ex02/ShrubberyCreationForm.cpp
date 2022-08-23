/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:10:40 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/23 12:18:13 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target) : Form(name, 145, 137)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy) : Form(copy.getName(), copy.getSignGrade(), copy.getExecuteGrade())
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	this->target = copy.target;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm &copy)
{
	this->target = copy.target;
	if (this->getIsSigned() != copy.getIsSigned())
		this->setBeSigned();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	(void)executor;
	std::string	filename = this->target + "_shrubbery";
	try
	{
		std::ifstream	file;
		if (!file)
			throw	std::exception();
		file << "     ccee88oo" << std::endl <<
"  C8O8O8Q8PoOb o8oo" << std::endl <<
" dOB69QO8PdUOpugoO9bD" << std::endl <<
"CgggbU8OU qOp qOdoUOdcb" << std::endl <<
"    6OuU  /p u gcoUodpP" << std::endl <<
"      \\\\\\//  /douUP" << std::endl <<
"        \\\\\\////" << std::endl <<
"         |||/\\" << std::endl <<
"         |||\\/" << std::endl <<
"         |||||" << std::endl <<
"   .....//||||\\...." << std::endl;
		file.close();
	}
	catch(const std::exception& e)
	{
		std::cerr << "File failed to be opened" << std::endl;
		return ;
	}
	
}
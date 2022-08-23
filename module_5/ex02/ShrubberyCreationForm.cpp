/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:10:40 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/23 14:57:09 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target) : Form(name, 72, 45)
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

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string	filename = this->target + "_shrubbery";
	try
	{
		if (this->canBeExecuted(&executor) == false)
			return ;
		std::ofstream	file(filename);
		if (!file)
			throw	std::exception();
		std::string	tree = "    &&&\n   &&&/&\n &\\/&|&&&&\n&&&\\&|&/&&&\n &&&\\|/&&&\n  & }}{ &\n    }{{    ";
		file << tree;
		file.close();
		std::cout << "File " << filename << " created !" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << "File failed to be opened" << std::endl;
		return ;
	}
}
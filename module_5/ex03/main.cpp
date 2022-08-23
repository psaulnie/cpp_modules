/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:02:34 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/23 14:58:26 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat	Bob("Bob", 151);
	Bureaucrat	Georges("Georges", 2);

	Bureaucrat	Timothee(Georges);

	Form	*paper = new ShrubberyCreationForm("paper", "garden");
	Form	*paper2 = new RobotomyRequestForm("paper2", "Roger");
	Form	*paper3 = new PresidentialPardonForm("paper3", "Robert");

	std::cout << "---------------------" << std::endl;

	Timothee.gradeUp();
	std::cout << Timothee << std::endl;
	Timothee.gradeUp();	
	std::cout << Timothee << std::endl;

	Bureaucrat Frederic("Frederic", 150);
	Frederic.gradeDown();

	std::cout << "---------------------" << std::endl;

	paper->execute(Frederic);
	Timothee.signForm(paper);
	paper->execute(Frederic);
	paper->execute(Timothee);
	
	paper2->execute(Frederic);
	Timothee.signForm(paper2);
	paper2->execute(Timothee);

	paper3->execute(Frederic);
	Timothee.executeForm(*paper3);
	Timothee.signForm(paper3);
	Timothee.executeForm(*paper3);

	std::cout << "---------------------" << std::endl;

	delete	paper;
	delete	paper2;
	delete	paper3;
}
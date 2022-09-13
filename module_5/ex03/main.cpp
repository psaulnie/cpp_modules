/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:02:34 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/13 14:04:18 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	try
	{
		// Bureaucrat	Bob("Bob", 151);
		Bureaucrat	Georges("Georges", 2);

		Bureaucrat	Timothee(Georges);

		Form	*paper = new ShrubberyCreationForm("garden");
		Form	*paper2 = new RobotomyRequestForm("Roger");
		Form	*paper3 = new PresidentialPardonForm("Robert");

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
		
		Intern	Titouan;

		Form	*paper4 = Titouan.makeForm("robotomy request", "Robert");
		Form	*paper5 = Titouan.makeForm("presidential pardon", "Timothee");
		
		paper5->beSigned(&Georges);
		paper5->execute(Georges);

		(void)paper4;

		std::cout << "---------------------" << std::endl;

		delete	paper;
		delete	paper2;
		delete	paper3;
		delete	paper5;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
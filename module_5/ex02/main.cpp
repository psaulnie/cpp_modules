/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:02:34 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/23 12:03:22 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	Bureaucrat	Bob("Bob", 151);
	Bureaucrat	Georges("Georges", 2);

	Bureaucrat	Timothee(Georges);

	Form	*paper = new ShrubberyCreationForm("paper", "garden");

	std::cout << "---------------------" << std::endl;

	Timothee.gradeUp();
	std::cout << Timothee << std::endl;
	Timothee.gradeUp();	
	std::cout << Timothee << std::endl;

	Bureaucrat Frederic("Frederic", 150);
	Frederic.gradeDown();


	std::cout << "---------------------" << std::endl;

	// Frederic.signForm(&randomPaper);
	// randomPaper.beSigned(&Georges);

	// randomPaper.beSigned(&Georges);

	paper->execute(Frederic);
	
	std::cout << "---------------------" << std::endl;
}
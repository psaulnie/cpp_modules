/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:02:34 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/06 14:53:35 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main()
{
	try
	{
		// Bureaucrat	Bob("Bob", 151);

		Bureaucrat	Georges("Georges", 2);

		Bureaucrat	Timothee(Georges);

		Form		randomPaper("random", 5, 10);

		std::cout << "---------------------" << std::endl;

		Timothee.gradeUp();
		std::cout << Timothee << std::endl;
		Timothee.gradeUp();	
		std::cout << Timothee << std::endl;

		Bureaucrat Frederic("Frederic", 150);
		Frederic.gradeDown();


		std::cout << "---------------------" << std::endl;

		Frederic.signForm(&randomPaper);
		randomPaper.beSigned(&Georges);

		randomPaper.beSigned(&Georges);
		
		std::cout << "---------------------" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
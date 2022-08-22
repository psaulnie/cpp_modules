/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:02:34 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/22 14:36:15 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	Bob("Bob", 151);
	Bureaucrat	Georges("Georges", 2);

	Bureaucrat	Timothee(Georges);

	std::cout << "---------------------" << std::endl;

	Timothee.gradeUp();
	std::cout << Timothee << std::endl;
	Timothee.gradeUp();	
	std::cout << Timothee << std::endl;

	Bureaucrat Frederic("Frederic", 150);
	Frederic.gradeDown();

	std::cout << "---------------------" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:42:30 by psaulnie          #+#    #+#             */
/*   Updated: 2022/05/26 14:48:26 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	command;

	while (1)
	{
		command = "";
		std::cout << "PhoneBook> ";
		std::cin >> command;
		if (command.empty())
		{
			std::cout << std::endl << "EOF Signal received: end of program" << std::endl;
			break ;
		}
		if (command == "EXIT\0")
			break ;
		else if (command == "ADD\0")
			phoneBook.add();
		else if (command == "SEARCH\0")
			phoneBook.search();
		else
			std::cout << "Wrong input" << std::endl;
	}
}

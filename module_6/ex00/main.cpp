/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 09:58:44 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/25 15:21:39 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Literal.hpp"

int	main(int argc, char *argv[])
{
	if (argc < 2)
		return (1);
	std::string	val = argv[1];
	Literal	value(val);

	char	char_val = static_cast<char>(value);
	if (char_val == -1)
		std::cout << "Char : impossible" << std::endl;
	else if (char_val == -2)
		std::cout << "Char : Non displayable" << std::endl;
	else
		std::cout << "Char : '" << static_cast<char>(value) << "'" << std::endl;
	std::cout << "Int : " << static_cast<int>(value) << std::endl;
	std::cout << "Float : " << static_cast<float>(value) << "f"<< std::endl;
	std::cout << "Double : " << static_cast<double>(value) << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:18:15 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/07 14:45:31 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int	main()
{
	std::vector<int> v(42, 100);
	std::list<int>	l(42, 100);
	
	l.push_back(76);
	l.push_back(45);
	l.push_back(76);
	l.push_back(8);
	l.push_back(67);
	l.push_back(87);
	v.push_back(8);
	try
	{
		int n = easyfind(l, 8);
		std::cout << n << std::endl;
		easyfind(l, 5656);
	}
	catch(std::exception& e)
	{
		std::cout << "Not found" << std::endl;
	}
}
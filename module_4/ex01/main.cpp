/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:06:24 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/18 15:37:29 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Animal*	animals[6];
	int		i = 0;

	while (i < 3)
	{
		animals[i] = new Dog();
		i++;
	}
	while (i < 6)
	{
		animals[i] = new Cat();
		i++;
	}
	std::cout << "---------------------------------------" << std::endl;
	i = 0;
	while (i < 6)
	{
		delete	animals[i];
		i++;
	}

	std::cout << "Constructor---------------------------------------" << std::endl;
	Cat* test = new Cat;
	Cat* copy = new Cat(*test);
	std::cout << "Destructor---------------------------------------" << std::endl;
	delete	test;
	delete	copy;
}

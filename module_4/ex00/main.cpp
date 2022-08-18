/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:06:24 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/18 12:37:25 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int	main(void)
{
	const	Animal*	meta = new Animal();
	const	Animal*	j = new	Dog();
	const	Animal*	i = new Cat();

	std::cout << "----------------------------" << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << "----------------------------" << std::endl;
	delete meta;
	delete i;
	delete j;
	std::cout << "----------------------------" << std::endl;

	const	WrongAnimal*	meta2 = new WrongAnimal();
	const	WrongAnimal*	j2 = new	WrongDog();
	const	WrongAnimal*	i2 = new WrongCat();

	std::cout << "----------------------------" << std::endl;

	std::cout << j2->getType() << " " << std::endl;
	std::cout << i2->getType() << " " << std::endl;
	i2->makeSound();
	j2->makeSound();
	meta2->makeSound();

	std::cout << "----------------------------" << std::endl;
	delete meta2;
	delete i2;
	delete j2;
	std::cout << "----------------------------" << std::endl;
}

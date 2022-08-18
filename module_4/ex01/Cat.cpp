/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:52:46 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/18 15:36:18 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const &copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
}

Cat &Cat::operator=(Cat const &copy)
{
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete	this->brain;
}

void	Cat::makeSound() const
{
	std::cout << "miaou" << std::endl;
}

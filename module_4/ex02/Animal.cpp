/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:13:53 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/18 16:01:27 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(Animal &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = copy.getType();
}

Animal	&Animal::operator=(Animal &copy)
{
	this->type = copy.getType();
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

const std::string & Animal::getType() const {
	return type;
}

void	Animal::makeSound() const
{
	std::cout << "*weird noises*" << std::endl;
}

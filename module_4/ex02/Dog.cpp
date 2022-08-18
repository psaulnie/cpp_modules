/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:52:39 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/18 15:59:24 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const &copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = copy.type;
}

Dog &Dog::operator=(Dog const &copy)
{
	this->type = copy.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "wouf" << std::endl;
}

const std::string &Dog::getType() const {
	return Animal::getType();
}
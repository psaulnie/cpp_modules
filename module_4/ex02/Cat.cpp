/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:52:46 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/18 15:59:17 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat const &copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = copy.type;
}

Cat &Cat::operator=(Cat const &copy)
{
	this->type = copy.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "miaou" << std::endl;
}

const std::string &Cat::getType() const {
	return Animal::getType();
}
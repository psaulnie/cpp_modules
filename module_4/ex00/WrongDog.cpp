/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:52:39 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/18 12:14:02 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog()
{
	std::cout << "WrongDog default constructor called" << std::endl;
	this->type = "WrongDog";
}

WrongDog::WrongDog(WrongDog &copy)
{
	std::cout << "WrongDog copy constructor called" << std::endl;
	this->type = copy.type;
}

WrongDog &WrongDog::operator=(WrongDog const &copy)
{
	this->type = copy.type;
	return (*this);
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog destructor called" << std::endl;
}

void	WrongDog::makeSound() const
{
	std::cout << "wrong wouf" << std::endl;
}
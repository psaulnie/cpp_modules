/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:27:24 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/19 10:47:15 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice &copy) : AMateria("ice")
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice	&Ice::operator=(Ice &copy)
{
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

AMateria*	AMateria::clone() const
{
	return (new Ice());
}

void		use(ICharacter&	target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

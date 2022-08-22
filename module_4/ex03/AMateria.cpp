/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMAteria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 09:54:51 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/22 09:55:59 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	this->type = "unknown";
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type)
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(AMateria &copy) : type(copy.getType())
{
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria	&AMateria::operator=(AMateria &copy)
{
	this->type = copy.getType();
	return (*this);
}
		
AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

std::string	const	&AMateria::getType() const
{
	return (this->type);
}

void		AMateria::use(ICharacter&	target)
{
	std::cout << "You use some magic to " << target.getName() << ". It's useless." << std::endl;
}
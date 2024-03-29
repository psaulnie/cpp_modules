/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:41:52 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/22 09:38:55 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure &copy) : AMateria("cure")
{
	(void)copy;
	std::cout << "Cure copy constructor called" << std::endl;	
}

Cure	&Cure::operator=(Cure &copy)
{
	this->type = copy.getType();
	return (*this);
}
		
Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

AMateria*	Cure::clone() const
{
	return (new Cure());
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

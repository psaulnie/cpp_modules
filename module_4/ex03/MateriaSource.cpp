/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:43:52 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/19 13:28:26 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	this->inventory[0] = NULL;
	this->inventory[1] = NULL;
	this->inventory[2] = NULL;
	this->inventory[3] = NULL;
}

MateriaSource::MateriaSource(MateriaSource &copy)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	int	i = 0;
	while (i < 4)
	{
		if (copy.inventory[i] != NULL)
			this->inventory[i] = copy.inventory[i]->clone();
		i++;
	}
}

MateriaSource	&MateriaSource::operator=(MateriaSource &copy)
{
	int	i = 0;
	while (i < 4)
	{
		if (copy.inventory[i] != NULL)
			this->inventory[i] = copy.inventory[i]->clone();
		i++;
	}
	return (*this);
}
		
MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
{
	int	i = 0;
	while (i < 4)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			return ;
		}
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int	i = 0;
	while (this->inventory[i] != NULL || i < 4)
		i++;
	if (this->inventory[3] != NULL)
		return (this->inventory[3]);
	else
		return (this->inventory[i]);
}

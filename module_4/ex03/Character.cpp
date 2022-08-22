/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:56:02 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/22 10:37:18 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
	std::cout << "Character default constructor called" << std::endl;
	this->name = name;
	this->inventory[0] = NULL;
	this->inventory[1] = NULL;
	this->inventory[2] = NULL;
	this->inventory[3] = NULL;
	this->garbage = NULL;
}

Character::Character(Character &copy)
{
	std::cout << "Character copy constructor called" << std::endl;
	this->name = copy.getName();
	int	i = 0;
	while (i < 4)
	{
		if (copy.inventory[i] != NULL)
			this->inventory[i] = copy.inventory[i]->clone();
		i++;
	}
}

Character	&Character::operator=(Character &copy)
{
	this->name = copy.getName();
	int	i = 0;
	while (i < 4)
	{
		if (copy.inventory[i] != NULL)
			this->inventory[i] = copy.inventory[i]->clone();
		i++;
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	int	i = 0;
	while (i < 4)
	{
		if (this->inventory[i] != NULL)
			delete	this->inventory[i];
		i++;
	}
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
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
	std::cout << "No more space left in " << this->getName() << " inventory !" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << "Index out of range" << std::endl;
	else if (this->inventory[idx] == NULL)
		std::cout << "Nothing is equipped here" << std::endl;
	else
	{
		std::cout << "You've unequipped the " << this->inventory[idx]->getType()
		<< " materia" << std::endl;
		this->inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		std::cout << "Index out of range" << std::endl;
	else if (this->inventory[idx] == NULL)
		std::cout << "Nothing is equipped here" << std::endl;
	else
		this->inventory[idx]->use(target);
}
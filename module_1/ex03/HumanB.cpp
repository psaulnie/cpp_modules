/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 16:18:31 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/01 14:54:31 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
	std::cout << name << " is born !" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->name << " is dead !" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
	return;
}

void	HumanB::attack()
{
	std::string	const&	type = this->weapon->getType();

	if (!this->weapon || type == "")
		std::cout << this->name << " is unarmed !" << std::endl;
	else
		std::cout << this->name << " attacks with their " << type << std::endl;
	return;
}
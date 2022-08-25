/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 16:18:31 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/25 09:40:54 by psaulnie         ###   ########.fr       */
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
	if (!this->weapon || this->weapon->getType() == "")
		std::cout << this->name << " is unarmed !" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	return;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 16:18:31 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/01 14:39:12 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	std::cout << name << " is born !" << std::endl;
	this->name = name;
	this->weapon = weapon;
	return;
}

HumanA::~HumanA()
{
	std::cout << this->name << " is dead !" << std::endl;
}

void	HumanA::attack()
{
	std::string	const &weap = this->weapon.getType();
	std::cout << this->name << " attacks with their " << weap << std::endl;
	return;
}
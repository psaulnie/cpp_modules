/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 15:08:58 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/01 14:37:26 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	std::cout << "A weapon is forged !" << std::endl;
	this->type = name;
	return;
}

Weapon::~Weapon()
{
	std::cout << "A weapon is destroyed !" << std::endl;
	return;
}

const std::string&	Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
	return;
}
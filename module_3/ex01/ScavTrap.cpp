/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:18:35 by psaulnie          #+#    #+#             */
/*   Updated: 2022/07/31 15:39:39 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->name = name;
}

ScavTrap::ScavTrap(ScavTrap &copy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->hp = copy.getHp();
	this->attack_point = copy.getAttack();
	this->energy = copy.getEnergy();
}

ScavTrap &ScavTrap::operator=(ScavTrap const &copy)
{
	std::cout << "ScavTrap assignation constructor called" << std::endl;
	this->hp = copy.getHp();
	this->attack_point = copy.getAttack();
	this->energy = copy.getEnergy();
	return (*this);
}
		
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void    guardGate()
{
	std::cout << "ScavTrap enters Gate Keeper mode" << std::endl;
}

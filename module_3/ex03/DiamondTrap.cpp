/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:22:46 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/01 10:25:02 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->name = name;
	this->hp = 100;
	this->energy = 100;
	this->attack_point = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap &copy) : ClapTrap(copy)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	this->hp = copy.getHp();
	this->attack_point = copy.getAttack();
	this->energy = copy.getEnergy();
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &copy)
{
	std::cout << "DiamondTrap assignation constructor called" << std::endl;
	this->hp = copy.getHp();
	this->attack_point = copy.getAttack();
	this->energy = copy.getEnergy();
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void    DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap whoAmI de base a modifier" << std::endl;
}
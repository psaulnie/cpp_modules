/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:22:46 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/18 09:58:05 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->name = name;
	this->hp = 100;
	this->attack_point = 30;
	this->energy = 50;
}

DiamondTrap::DiamondTrap(DiamondTrap &copy) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	this->name = copy.name;
	this->attack_point = copy.getAttack();
	this->hp = copy.getHp();
	this->energy = copy.getEnergy();
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &copy)
{
	std::cout << "DiamondTrap assignation constructor called" << std::endl;
	this->name = copy.name;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void    DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name: " << DiamondTrap::name << std::endl 
				<< "ClapTrap name: " << ClapTrap::name << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:22:46 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/17 12:11:07 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->name = name;
}

DiamondTrap::DiamondTrap(DiamondTrap &copy) : ClapTrap(copy)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	this->name = copy.name;
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
	std::cout << "Attack " << target << std::endl;
}

void    DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap : " << DiamondTrap::name << std::endl 
				<< "ClapTrap : " << ClapTrap::name << std::endl;
}
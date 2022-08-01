/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:18:35 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/01 09:47:09 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->name = name;
	this->hp = 100;
	this->energy = 50;
	this->attack_point = 20;
}

ScavTrap::ScavTrap(ScavTrap &copy) : ClapTrap(copy)
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

void	ScavTrap::attack(const std::string& target)
{
    if (this->hp == 0)
    {
        std::cout << "How could ScavTrap " << this->name << " attack if he has no more HP!" << std::endl;
        return ;
    }
    else if (this->energy <= 0)
    {
        std::cout << "ScavTrap " << this->name << " has no more energy left!" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " 
                << this->attack_point << " points of damage!" << std::endl;
    this->energy -= 1;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void    ScavTrap::guardGate()
{
	std::cout << "ScavTrap enters Gate Keeper mode" << std::endl;
}

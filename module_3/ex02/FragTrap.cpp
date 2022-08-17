/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:02:35 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/04 10:28:14 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->name = name;
	this->hp = 100;
	this->energy = 100;
	this->attack_point = 30;
}

FragTrap::FragTrap(FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	this->hp = copy.getHp();
	this->attack_point = copy.getAttack();
	this->energy = copy.getEnergy();
}

FragTrap &FragTrap::operator=(FragTrap const &copy)
{
	std::cout << "FragTrap assignation constructor called" << std::endl;
	this->hp = copy.getHp();
	this->attack_point = copy.getAttack();
	this->energy = copy.getEnergy();
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}


void	FragTrap::attack(const std::string& target)
{
    if (this->hp == 0)
    {
        std::cout << "How could FragTrap " << this->name << " attack if he has no more HP!" << std::endl;
        return ;
    }
    else if (this->energy <= 0)
    {
        std::cout << "FragTrap " << this->name << " has no more energy left!" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " 
                << this->attack_point << " points of damage!" << std::endl;
    this->energy -= 1;
}

void    FragTrap::highFiveGuys()
{
	std::cout << "FragTrap want an high five!" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 11:05:28 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/01 08:56:52 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Default constructor called" << std::endl;
    this->name = name;
    this->energy = 50;
    this->hp = 100;
    this->attack_point = 20;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->name = copy.getName();
    this->hp = copy.getHp();
    this->energy = copy.getEnergy();
    this->attack_point = copy.getAttack();
}

ClapTrap &ClapTrap::operator=(ClapTrap const &copy)
{
    std::cout << "Assignation constructor called" << std::endl;
    this->name = copy.getName();
    this->hp = copy.getHp();
    this->energy = copy.getEnergy();
    this->attack_point = copy.getAttack();
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
    if (this->hp == 0)
    {
        std::cout << "How could ClapTrap " << this->name << " attack if he has no more HP!" << std::endl;
        return ;
    }
    else if (this->energy <= 0)
    {
        std::cout << "ClapTrap " << this->name << " has no more energy left!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " 
                << this->attack_point << " points of damage!" << std::endl;
    this->energy -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hp == 0)
        std::cout << "ClapTrap " << this->name << " has no more HP left! It'll be cruel to continue no?" << std::endl;
    else if ((int)(this->hp - amount) <= 0)
    {
        this->hp = 0;
        std::cout << "ClapTrap " << this->name << " took " << amount
                    << " damages. He has no more HP left!" << std::endl;
    }
    else
    {
        this->hp -= amount;
        std::cout << "ClapTrap " << this->name << " took " << amount
                    << " damages. He has " << this->hp << " HP left!" << std::endl;
    }
}

void	ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hp == 0)
    {
        std::cout << "How could ClapTrap " << this->name << " do anything if he has no more HP!" << std::endl;
        return ;
    }
    else if (this->energy <= 0)
    {
        std::cout << "ClapTrap " << this->name << " has no more energy left!" << std::endl;
        return ;
    }
    if (amount + this->energy >= 2147483647)
        this->energy = 2147483647;
    else
        this->energy += amount;
    std::cout << "ClapTrap " << this->name << " regenerates " << amount
                << " energy points! He has now " << this->energy
                << " energy points left!" << std::endl;
}

std::string ClapTrap::getName(void) const
{
    return (this->name);
}

int	ClapTrap::getHp(void) const
{
    return (this->hp);
}

int	ClapTrap::getEnergy(void) const
{
    return (this->energy);
}

int	ClapTrap::getAttack(void) const
{
    return (this->attack_point);
}
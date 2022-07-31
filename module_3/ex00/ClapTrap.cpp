/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 11:05:28 by psaulnie          #+#    #+#             */
/*   Updated: 2022/07/31 10:41:32 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Default constructor called" << std::endl;
    this->name = name;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->name = copy.getName();
    this->energy = copy.getEnergy();
    this->attack = copy.getAttack();
}

ClapTrap::ClapTrap &operator=(ClapTrap const &copy)
{
    std::cout << "Assignation constructor called" << std::endl;
    this->name = copy.getName();
    this->energy = copy.getEnergy();
    this->attack = copy.getAttack();
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
                << this->attack << " points of damage!" << std::endl;
    this->energy -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hp == 0)
        std::cout << "ClapTrap " << this->name << " has no more HP left! It'll be cruel to continue no?" << std::endl;
    else if (this->hp - amount < 0)
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

std::string ClapTrap::getName(void)
{
    return (this->name);
}

int	ClapTrap::getHp(void)
{
    return (this->hp);
}

int	ClapTrap::getEnergy(void)
{
    return (this->energy);
}

int	ClapTrap::getAttack(void)
{
    return (this->attack);
}
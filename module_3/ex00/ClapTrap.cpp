/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 11:05:28 by psaulnie          #+#    #+#             */
/*   Updated: 2022/07/30 11:18:21 by psaulnie         ###   ########.fr       */
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
}

ClapTrap::ClapTrap &operator=(ClapTrap const &copy)
{
    std::cout << "Assignation constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
    
}

void	ClapTrap::takeDamage(unsigned int amount)
{
    
}

void	ClapTrap::beRepaired(unsigned int amount)
{
    
}
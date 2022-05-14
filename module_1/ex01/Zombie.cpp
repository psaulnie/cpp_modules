/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 09:43:44 by psaulnie          #+#    #+#             */
/*   Updated: 2022/05/14 14:45:49 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "A zombie has returned from the lambs" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " die a second time" << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
	std::cout << "His name is " << name << " !" << std::endl;
	return;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:12:53 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/18 15:29:35 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	this->setIdeas();
}

Brain::Brain(Brain &copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	int	i = 0;
	while (i < 99)
	{
		this->ideas[i] = copy.ideas[i];
		i++;
	}
}

Brain	&Brain::operator=(Brain const &copy)
{
	int	i = 0;
	while (i < 99)
	{
		this->ideas[i] = copy.ideas[i];
		i++;
	}
	return (*this);
}

void	Brain::setIdeas()
{
	std::srand(std::time(nullptr));
	int	random;
	int	i = 0;
	std::string	presets[8] = {"Food", "Sleep", "Eat", "Nap", "Bones", "Fishes", "Mouses", "Play"};
	
	random = std::rand() % 8;
	while (i < 99)
	{
		std::srand(std::time(nullptr));
		this->ideas[i] = presets[random];
		random = std::rand() % 8;
		i++;
	}
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

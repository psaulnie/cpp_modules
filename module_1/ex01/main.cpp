/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 09:43:13 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/01 14:33:13 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*bobs = zombieHorde(5, "bob");
	Zombie	*robert = zombieHorde(10, "robert");
	

	for (size_t i = 0; i < 5; i++)
	{
		(bobs[i]).announce();
	}
	for (size_t i = 0; i < 5; i++)
	{
		(robert[i]).announce();
	}
	
	delete []	bobs;
	delete []	robert;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 09:43:13 by psaulnie          #+#    #+#             */
/*   Updated: 2022/05/14 14:47:38 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*bobs = zombieHorde(5, "bob");
	

	for (size_t i = 0; i < 5; i++)
	{
		(bobs[i]).announce();
	}
	
	
	delete []	bobs;
}
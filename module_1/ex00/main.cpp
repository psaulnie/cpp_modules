/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 09:43:13 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/01 14:19:27 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*bob = newZombie("bob");
	Zombie	*joel = newZombie("jojo");
	
	// Zombie	jojo = newZombie("unknown"); // Not working
	randomChump("joseph");

	bob->announce();
	joel->announce();
	
	delete	bob;
	delete	joel;
}
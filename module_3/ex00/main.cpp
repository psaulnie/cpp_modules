/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 11:05:43 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/06 10:05:54 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap Bob("Bob");
    ClapTrap Roger(Bob);
    ClapTrap Denis("Denis");

    Bob.takeDamage(5);
    Denis = Bob;
    
    std::cout << "Denis : " << Denis.getHp() << " - Bob : " << Bob.getHp() << std::endl;
    Bob.takeDamage(4);
    Bob.beRepaired(50);
    Bob.attack("Joseph");

    
    Bob.takeDamage(51);
    Bob.beRepaired(50);
    Bob.attack("Joseph");

    std::cout << "Bob hp : " << Bob.getHp() << std::endl; 
}
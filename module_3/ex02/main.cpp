/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 11:05:43 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/01 10:13:30 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ScavTrap Bob("Bob");
    ScavTrap Roger(Bob);
    FragTrap Denis("Denis");

    Bob.takeDamage(5);
    Bob.guardGate();
    
    std::cout << "Denis : " << Denis.getHp() << " - Bob : " << Bob.getHp() << std::endl;
    Bob.takeDamage(10);
    Denis.highFiveGuys();
    Denis.attack("Dylan");
}
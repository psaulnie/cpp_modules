/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 11:05:43 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/01 09:35:02 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap Bob("Bob");
    ScavTrap Roger(Bob);
    ScavTrap Denis("Denis");

    Bob.takeDamage(5);
    Bob.guardGate();
    Denis = Bob;
    
    std::cout << "Denis : " << Denis.getHp() << " - Bob : " << Bob.getHp() << std::endl;
    Bob.takeDamage(10);
    Denis.attack("Bob");
}
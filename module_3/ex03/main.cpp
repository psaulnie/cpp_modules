/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 11:05:43 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/06 11:57:25 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    ScavTrap Bob("Bob");
    std::cout << "----------------------------------" << std::endl;
    ScavTrap Roger(Bob);
    std::cout << "----------------------------------" << std::endl;
    FragTrap Denis("Denis");
    std::cout << "----------------------------------" << std::endl;
    DiamondTrap Fabrice("Fabrice"); 
    std::cout << "----------------------------------" << std::endl;

    Bob.takeDamage(5);
    Bob.guardGate();
    
    std::cout << "Denis : " << Denis.getHp() << " - Bob : " << Bob.getHp() << std::endl;
    Bob.takeDamage(10);
    Denis.highFiveGuys();
    Denis.attack("Dylan");
    Fabrice.attack("Denis");

    DiamondTrap Robert("Robert");
    std::cout << "----------------------------------" << std::endl;
    Robert.attack("Maxime");
    Robert.whoAmI();
    std::cout << Robert.getAttack() << " ; " << Robert.getEnergy() << " ; " << Robert.getHp()
            << " ;" << std::endl;
    Robert.guardGate();
    Robert.highFiveGuys();

    std::cout << "----------------------------------" << std::endl;

}
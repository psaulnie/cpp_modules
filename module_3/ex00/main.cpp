/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 11:05:43 by psaulnie          #+#    #+#             */
/*   Updated: 2022/07/31 15:09:05 by psaulnie         ###   ########.fr       */
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
    Bob.takeDamage(10);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:19:31 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/01 10:24:19 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string name;
    public:
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap &copy);
		DiamondTrap &operator=(DiamondTrap const &copy);
        virtual ~DiamondTrap();
};

DiamondTrap::DiamondTrap(nam)
{
}

DiamondTrap::~DiamondTrap()
{
}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:19:31 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/06 11:59:35 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
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
		virtual ~DiamondTrap(); // the virtual keyword solve the diamond problem : there will be only 1instance of the class ClapTrap and not 2 (FragTrap::ClapTrap == ScavTrap::Claptrap)

		void    attack(const std::string &target);
		void    whoAmI(void);
};

#endif
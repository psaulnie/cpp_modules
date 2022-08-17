/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 11:05:53 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/17 11:24:56 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
		std::string	name;
		int			hp;
		int			energy;
		int			attack_point;
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &copy);
		ClapTrap &operator=(ClapTrap const &copy);
		~ClapTrap();

		void		attack(const std::string& target);
		void		takeDamage(unsigned int	amount);
		void		beRepaired(unsigned int	amount);

		std::string	getName(void) const;
		int			getHp(void) const;
		int			getEnergy(void) const;
		int			getAttack(void) const;
};

#endif
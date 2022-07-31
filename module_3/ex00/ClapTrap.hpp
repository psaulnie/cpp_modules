/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 11:05:53 by psaulnie          #+#    #+#             */
/*   Updated: 2022/07/31 10:42:16 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string	name;
		int			hp = 10;
		int			energy = 10;
		int			attack = 0;
	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &copy);
		ClapTrap &operator=(ClapTrap const &copy);
		~ClapTrap();

		void		attack(const std::string& target);
		void		takeDamage(unsigned int	amount);
		void		beRepaired(unsigned int	amount);

		std::string	getName(void);
		int			getHp(void);
		int			getEnergy(void);
		int			getAttack(void);
};

#endif
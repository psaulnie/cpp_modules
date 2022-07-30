/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 11:05:53 by psaulnie          #+#    #+#             */
/*   Updated: 2022/07/30 11:17:14 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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

		void	attack(const std::string& target);
		void	takeDamage(unsigned int	amount);
		void	beRepaired(unsigned int	amount);
};

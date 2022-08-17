/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:18:33 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/17 11:55:38 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap(std::string name);
		ScavTrap(ScavTrap &copy);
		ScavTrap &operator=(ScavTrap const &copy);
        virtual ~ScavTrap();

        void    attack(const std::string& target);
        void    guardGate();
};

#endif
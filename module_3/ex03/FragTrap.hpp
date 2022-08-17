/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:02:38 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/17 10:09:50 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string name);
		FragTrap(FragTrap &copy);
		FragTrap &operator=(FragTrap const &copy);
        virtual ~FragTrap();

        void    highFiveGuys(void);
};

#endif
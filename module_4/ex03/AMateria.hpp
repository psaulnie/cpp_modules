/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 09:36:51 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/19 11:13:18 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria &copy);
		AMateria	&operator=(AMateria &copy);
		virtual ~AMateria();
		
		std::string	const	&getType() const;

		virtual	AMateria*	clone() const = 0;
		virtual void		use(ICharacter&	target);
};

#endif
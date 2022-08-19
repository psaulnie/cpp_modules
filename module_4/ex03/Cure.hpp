/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:41:57 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/19 10:45:40 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
 
class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure &copy);
		Cure	&operator=(Cure &copy);
		~Cure();

		AMateria*	clone() const;
		void		use(ICharacter&	target);
};




#endif
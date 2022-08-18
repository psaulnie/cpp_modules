/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:09:02 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/18 12:35:58 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(Animal &copy);
		Animal	&operator=(Animal &copy);
		virtual	~Animal();

		std::string	getType(void) const;
		virtual void	makeSound() const;
};



#endif
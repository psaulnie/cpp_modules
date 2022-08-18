/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:09:02 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/18 16:02:06 by psaulnie         ###   ########.fr       */
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

		virtual const std::string	&getType() const = 0;
		virtual void				makeSound() const = 0;
};



#endif
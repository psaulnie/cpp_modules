/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:11:15 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/06 12:12:42 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
	std::string	ideas[100];
public:
	Brain();
	Brain(Brain &copy);
	Brain	&operator=(Brain const &copy);
	~Brain();

	void	setIdeas();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:13:54 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/23 15:23:06 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern &copy);
		Intern	&operator=(Intern &copy);
		~Intern();

		Form*	makeForm(std::string name, std::string target);
};


#endif
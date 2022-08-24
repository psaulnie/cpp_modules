/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:13:54 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/24 08:51:40 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"

class Intern
{
	private:
		Form	*createRobotomy(std::string name, std::string target);
		Form	*createPresidential(std::string name, std::string target);
		Form	*createShrubbery(std::string name, std::string target);
	public:
		Intern();
		Intern(Intern &copy);
		Intern	&operator=(Intern &copy);
		~Intern();

		Form*	makeForm(std::string name, std::string target);
};


#endif
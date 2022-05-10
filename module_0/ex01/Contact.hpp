/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:50:16 by psaulnie          #+#    #+#             */
/*   Updated: 2022/05/10 19:02:17 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>

class	Contact
{
	private:
		int			index;
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public:
		Contact(void);
		~Contact(void);
		
		int			isEmpty;

		int			getIndex();
		std::string getFirstName(int action);
		std::string getLastName(int action);
		std::string getNickname(int action);
		std::string getPhoneNumber(int action);
		std::string getDarkestSecret(int action);

		void		set(int action, std::string content);
};

#endif
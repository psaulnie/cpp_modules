/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:49:50 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/24 13:33:28 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact array[9];
		int		oldest;
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	search(void);
		void	add(void);
};

#endif
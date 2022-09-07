/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:10:52 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/07 11:10:34 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LITERAL_HPP
# define	LITERAL_HPP

#include <iostream>

class Literal
{
	private:
		std::string	value;
	public:
		Literal(std::string value);
		Literal(Literal &copy);
		Literal	&operator=(Literal &copy);
		~Literal();

		bool	isChar();
		bool	isInt();
		bool	isFloat();
		bool	isDouble();

		void	print();
};

#endif
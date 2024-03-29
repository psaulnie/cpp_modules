/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:05:26 by psaulnie          #+#    #+#             */
/*   Updated: 2022/07/30 11:02:28 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define	FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					value;
		static const int	bitsNbr = 8;
	public:
		Fixed(void); // default constructor
		Fixed(const Fixed &f); // copy constructor
		Fixed	&operator=(Fixed const &copy); // copy assignement constructor
		~Fixed(void); // destructor

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:05:26 by psaulnie          #+#    #+#             */
/*   Updated: 2022/07/30 11:02:24 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define	FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					value;
		static const int	bitsNbr = 8;
	public:
		Fixed(void); // default constructor
		Fixed(int const nbr); // int constructor
		Fixed(float const nbr); // float constructor
		Fixed(const Fixed &f); // copy constructor
		Fixed	&operator=(Fixed const &copy); // copy assignement constructor
		~Fixed(void); // destructor

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream& os, Fixed const &curr);

#endif
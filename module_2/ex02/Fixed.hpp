/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:05:26 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/01 16:23:25 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define	FIXED_HPP

# include <iostream>
# include <cmath>
# include <cstring>

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

		static Fixed	&min(Fixed& first, Fixed& second);
		static const Fixed	&min(Fixed const& first, Fixed const& second);
		static Fixed	&max(Fixed& first, Fixed& second);
		static const Fixed	&max(Fixed const& first, Fixed const& second);
		
		bool	operator>(Fixed const &sec) const;
		bool	operator<(Fixed const &sec) const;
		bool	operator>=(Fixed const &sec) const;
		bool	operator<=(Fixed const &sec) const;

		bool	operator==(Fixed const &sec) const;
		bool	operator!=(Fixed const &sec) const;

		Fixed	operator++();
		Fixed	operator++(int);

		Fixed	operator--();
		Fixed	operator--(int);

		Fixed	operator+(Fixed const &sec) const;
		Fixed	operator-(Fixed const &sec) const;
		Fixed	operator*(Fixed const &sec) const;
		Fixed	operator/(Fixed const &sec) const;
		
};

std::ostream	&operator<<(std::ostream& os, Fixed const &curr);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:05:26 by psaulnie          #+#    #+#             */
/*   Updated: 2022/05/26 15:15:18 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	private:
		int					value;
		static const int	bitsNbr;
	public:
		Fixed(void); // default constructor
		~Fixed(void); // destructor

		Fixed(const Fixed &f); // copy constructor
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

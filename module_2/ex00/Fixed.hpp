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
		Fixed(void);
		~Fixed(void);

		Fixed(const Fixed &f);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

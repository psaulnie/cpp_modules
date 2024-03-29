/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:04:46 by psaulnie          #+#    #+#             */
/*   Updated: 2022/07/30 11:02:22 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const nbr)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = (nbr << this->bitsNbr);
}

Fixed::Fixed(float const nbr)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(nbr * (1 << this->bitsNbr));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &copy)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->value = copy.getRawBits();
	return(*this);
}


Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = f.getRawBits();
}

int		Fixed::getRawBits(void) const
{
	return(this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	return((float)this->value / (float)(1  << Fixed::bitsNbr));
}

int		Fixed::toInt(void) const
{
	return (this->value >> this->bitsNbr);
}

std::ostream	&operator<<(std::ostream& os, Fixed const &curr)
{
	os << curr.toFloat();
	return (os);
}

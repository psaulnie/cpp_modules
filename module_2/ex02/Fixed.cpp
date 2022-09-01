/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:04:46 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/01 16:24:11 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->value = 0;
}

Fixed::Fixed(int const nbr)
{
	this->value = (nbr << this->bitsNbr);
}

Fixed::Fixed(float const nbr)
{
	this->value = roundf(nbr * (1 << this->bitsNbr));
}

Fixed::~Fixed(void)
{ }

Fixed	&Fixed::operator=(Fixed const &copy)
{
	this->value = copy.getRawBits();
	return(*this);
}


Fixed::Fixed(const Fixed &f)
{
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

bool	Fixed::operator>(Fixed const &sec) const
{
	return (toFloat() > sec.toFloat());
}

bool	Fixed::operator<(Fixed const &sec) const
{
	return (toFloat() < sec.toFloat());
}

bool	Fixed::operator>=(Fixed const &sec) const
{
	return (toFloat() >= sec.toFloat());
}

bool	Fixed::operator<=(Fixed const &sec) const
{
	return (toFloat() <= sec.toFloat());
}

bool	Fixed::operator==(Fixed const &sec) const
{
	return (toFloat() == sec.toFloat());
}

bool	Fixed::operator!=(Fixed const &sec) const
{
	return (toFloat() != sec.toFloat());
}

Fixed	Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	const Fixed	tmp(*this);
	this->operator++();
	return (tmp);
}

Fixed	Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	const Fixed	tmp(*this);
	this->operator--();
	return (tmp);
}

Fixed	Fixed::operator+(Fixed const &sec) const
{
	return (Fixed(toFloat() + sec.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &sec) const
{
	return (Fixed(toFloat() - sec.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &sec) const
{
	return (Fixed(toFloat() * sec.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &sec) const
{
	return (Fixed(toFloat() / sec.toFloat()));
}

Fixed	&Fixed::min(Fixed& first, Fixed& second)
{
	if (first <= second)
		return (first);
	else
		return (second);
}
const Fixed	&Fixed::min(const Fixed& first, const Fixed& second)
{
	if (first <= second)
		return (first);
	else
		return (second);
}
Fixed	&Fixed::max(Fixed& first, Fixed& second)
{
	if (first >= second)
		return (first);
	else
		return (second);
}
const Fixed	&Fixed::max(const Fixed& first, const Fixed& second)
{
	if (first >= second)
		return (first);
	else
		return (second);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:37:52 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/29 11:13:05 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Literal.hpp"

Literal::Literal(std::string value)
{
	this->value = value;
}

Literal::Literal(Literal &copy)
{
	this->value = copy.value;
}

Literal	&Literal::operator=(Literal &copy)
{
	this->value = copy.value;
	return (*this);
}


Literal::operator	int()
{
	char	char_val;
	int		val;
	if (this->value.size() == 1 && (this->value.c_str()[0] > 57 || this->value.c_str()[0] < 48))
	{
		char_val = this->value.c_str()[0];
		val = char_val;
	}
	else
		val = std::atoi(this->value.c_str());
	return (val);
}

Literal::operator	float()
{
	return (static_cast<float>(std::atof(this->value.c_str())));
}

Literal::operator	double()
{
	return (std::atof(this->value.c_str()));
}

Literal::operator	char()
{
	int	val;
	if (this->value.size() == 1 && (this->value.c_str()[0] > 57 || this->value.c_str()[0] < 48))
		val = this->value.c_str()[0];
	else
		val = std::atoi(this->value.c_str());
	if (val < 0 || val > 127)
		return (-1);
	else if (val < 32)
		return (-2);
	return (val);
}

Literal::~Literal()
{
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:37:52 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/15 16:07:18 by psaulnie         ###   ########.fr       */
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

bool	Literal::isChar()
{
	const char	*val = this->value.c_str();

	if (this->value.size() == 1 && (val[0] > 57 || val[0] < 48))
		return true;
	return false;
}

bool	Literal::isInt()
{
	int	i = 0;
	const char	*val = this->value.c_str();

	if (val[0] == '-')
		i++;
	while (val[i])
	{
		if (!(val[i] > 47 && val[i] < 58))
			return	false;
		i++;
	}
	return	true;
	
}

bool	Literal::isFloat()
{
	int	i = 0;
	const char	*val = this->value.c_str();

	if (val[0] == '-')
		i++;
	if (this->value == "")
		return	false;

	if (this->value == "nanf")
		return	true;
	else if (this->value == "-inff")
		return	true;
	else if (this->value == "+inff")
		return	true;

	while (val[i + 1])
	{
		if (!(val[i] > 47 && val[i] < 58) && val[i] != '.' && val[i + 1] && !(val[i] > 47 && val[i] < 58)) // if it's not a number or a point and if the point is the last char
			return	false;
		i++;
	}
	if (val[i] == 'f')
		return	true;
	return	false;
}

bool	Literal::isDouble()
{
	int	i = 0;
	const char	*val = this->value.c_str();

	if (val[0] == '-')
		i++;
	if (this->value == "")
		return	false;

	if (this->value == "nan")
		return	true;
	else if (this->value == "-inf")
		return	true;
	else if (this->value == "+inf")
		return	true;

	while (val[i + 1])
	{
		if (!(val[i] > 47 && val[i] < 58) && val[i] != '.' && val[i + 1] && !(val[i] > 47 && val[i] < 58)) // if it's not a number or a point and if the point is the last char
			return	false;
		i++;
	}
	if (val[i] != 'f')
		return	true;
	return	false;
}

void	Literal::print()
{
	char			cval;
	int				ival;
	float			fval;
	double			dval;

	std::string		cstr;
	std::string		istr;
	std::string		fstr;
	std::string		dstr;

	unsigned int	special = 0;

	if (this->isChar())
	{
		cval = this->value.c_str()[0];
		if (cval < 32)
		{
			cstr = "Non displayable";
			special = 1;
		}
		else
			cstr = cval;
		ival = static_cast<int>(cval);
		fval = static_cast<float>(cval);
		dval = static_cast<double>(cval);
	}
	else if (this->isInt())
	{
		istr = this->value;
		ival = std::atoi(this->value.c_str());
		if (this->value == "0" || ival == 127)
		{
			cstr = "Non displayable";
			special = 3;
		}
		else if (ival > 127)
		{
			cstr = "impossible";
			special = 3;
		}
		cval = static_cast<char>(ival);
		fval = static_cast<float>(ival);
		dval = static_cast<double>(ival);
	}
	else if (this->isDouble())
	{
		if (this->value == "nan")
		{
			cstr = "impossible";
			istr = "impossible";
			fstr = "nanf";
			special = 2;
		}
		else if (this->value == "-inf")
		{
			cstr = "impossible";
			istr = "impossible";
			fstr = "-inff";
			special = 2;
		}
		else if (this->value == "+inf")
		{
			cstr = "impossible";
			istr = "impossible";
			fstr = "+inff";
			special = 2;
		}
		else
		{
			dval = std::atof(this->value.c_str());
			cval = static_cast<char>(dval);
			ival = static_cast<int>(dval);
			fval = static_cast<float>(dval);
		}
		
		dstr = this->value;
	}
	else if (this->isFloat())
	{
		if (this->value == "nanf")
		{
			cstr = "impossible";
			istr = "impossible";
			dstr = "nan";
			special = 2;
		}
		else if (this->value == "-inff")
		{
			cstr = "impossible";
			istr = "impossible";
			dstr = "-inf";
			special = 2;
		}
		else if (this->value == "+inff")
		{
			cstr = "impossible";
			istr = "impossible";
			dstr = "+inf";
			special = 2;
		}
		else
		{
			fval = std::stof(this->value);
			cval = static_cast<char>(fval);
			ival = static_cast<int>(fval);
			dval = static_cast<double>(fval);
		}
		fstr = this->value;
	}
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return ;
	}
	switch (special)
	{
		case	1:
			std::cout << "char: " << cstr << std::endl;
			std::cout << "int: " << ival << std::endl;
			std::cout << "float: " << fval << std::endl;
			std::cout << "double: " << dval << std::endl;
			break ;
		case	2:
			std::cout << "char: " << cstr << std::endl;
			std::cout << "int: " << istr << std::endl;
			std::cout << "float: " << fstr << std::endl;
			std::cout << "double: " << dstr << std::endl;
			break ;
		case	3:
			std::cout << "char: " << cstr << std::endl;
			std::cout << "int: " << ival << std::endl;
			std::cout << "float: " << fval << ".0f" << std::endl;
			std::cout << "double: " << dval << "f" <<std::endl;
			break ;
		default:
			if (cval >= 32)
				std::cout << "char: '" << cval << "'" << std::endl;
			else if (cval > 0)
				std::cout << "char: Non displayable" << std::endl;
			else
				std::cout << "char: impossible" << std::endl;
			std::cout << "int: " << ival << std::endl;
			if (fval == (int)fval)
				std::cout << "float: " << fval << ".0f" << std::endl;
			else
				std::cout << "float: " << fval << "f" << std::endl;
			if (dval == (int)dval)
				std::cout << "double: " << dval << ".0" << std::endl;
			else
				std::cout << "double: " << dval << std::endl;
			break ;
	}
}

Literal::~Literal() { }
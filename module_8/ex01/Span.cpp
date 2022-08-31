/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:29:45 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/31 11:48:35 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n)
{
	this->array = new std::vector<int>[n];
}

Span::Span(Span &copy)
{
	*this = copy;
}

Span	&Span::operator=(Span &copy)
{
	unsigned int	size = copy.array.max_size();
	this->array = new std::vector<int>(size);
	
	for (int i = 0; i < size; i++)
		this->array[i] = copy.array[i];
	return (*this);
}

~Span::Span()
{
	delete[] this->array;
}

void	Span::addNumber(int n)
{
	if (this->array.size() == this->array.max_size())
		throw	std::exception();
	else
		this->array.push_back(n);
}

int		Span::shortestSpan()
{

}

int		Span::longestSpan()
{
	
}
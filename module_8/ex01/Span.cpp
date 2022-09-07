/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:29:45 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/06 16:26:19 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <random>

Span::Span(unsigned int n) : size(n), remaining(n) { }

Span::Span(Span const &copy)
{
	*this = copy;
}

Span	&Span::operator=(Span const &copy)
{
	this->array = copy.array;
	this->size = copy.size;
	return (*this);
}

Span::~Span() { }

void	Span::addNumber(int n)
{
	if (remaining == 0)
		throw	std::exception();
	this->array.push_back(n);
	remaining -= 1;
}

void	Span::addRange(int number, int min, int max)
{
	std::srand(std::time(nullptr));
	int	rand = std::rand() % (max - min + 1) + min;
	for (int i = 0; i < number && this->remaining != 0; i++)
	{
		rand = std::rand() % (max - min + 1) + min;
		// std::cout << rand << std::endl;
		this->array.push_back(rand);
		this->remaining -= 1;
	}
}

int		Span::shortestSpan()
{
	int	min = INT_MAX;
	int	second_min = INT_MAX;
	int size = this->array.size();

	for (int i = 0; i < size; i++)
	{
		if (this->array[i] < min)
			min = this->array[i];
	}
	for (int i = 0; i < size; i++)
	{
		if (this->array[i] < second_min && this->array[i] != min)
			second_min = this->array[i];
	}
	if (second_min == INT_MAX)
		second_min = min;
	return (second_min - min - 1);
}

int		Span::longestSpan()
{
	int	min = INT_MAX;
	int	max = INT_MIN;
	int size = this->array.size();

	for (int i = 0; i < size; i++)
	{
		if (this->array[i] < min)
			min = this->array[i];
		if (this->array[i] > max)
			max = this->array[i];
	}
	return (max - min);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:29:45 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/07 16:24:25 by psaulnie         ###   ########.fr       */
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

static bool abs_compare(int a, int b)
{
    return (std::abs(a) < std::abs(b));
}

int		Span::shortestSpan()
{
	int	span = 2147483647;
	int	min = 2147483647;
	int	max = 2147483647;
	
	for (int i = 0; this->array[i]; i++)
	{
		for (int j = i + 1; this->array[j]; j++)
		{
			if (this->array[i] > this->array[j])
			{
				max = this->array[i];
				min = this->array[j];
			}
			else
			{
				max = this->array[j];
				min = this->array[i];	
			}
			if (span > max - min)
				span = max - min;
		}
	}
	return span;
}


int		Span::longestSpan()
{	
	std::vector<int>::iterator	min = std::min_element(this->array.begin(), this->array.end());
	std::vector<int>::iterator	max = std::max_element(this->array.begin(), this->array.end(), abs_compare);
	return (*max - *min);
}
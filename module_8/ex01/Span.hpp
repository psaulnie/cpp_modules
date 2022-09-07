/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:27:32 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/06 16:23:01 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <stdexcept>
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

class Span
{
	private:
		std::vector<int>	array;
		unsigned int		size;
		unsigned int		remaining;
	public:
		Span(unsigned int n);
		Span(Span const &copy);
		Span	&operator=(Span const &copy);
		~Span();

		void	addNumber(int n);
		void	addRange(int number, int min, int max);
		int		shortestSpan();
		int		longestSpan();
};

#endif
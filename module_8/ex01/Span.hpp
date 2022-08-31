/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:27:32 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/31 11:47:38 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <stdexcept>
#include <iostream>
#include <vector>

class Span
{
	private:
		std::vector<int>	array;
	public:
		Span(unsigned int n);
		Span(Span &copy);
		Span	&operator=(Span &copy);
		~Span();

		void	addNumber(int n);
		int		shortestSpan();
		int		longestSpan();
};

#endif
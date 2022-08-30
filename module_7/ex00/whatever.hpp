/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 10:24:56 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/30 11:03:10 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template<typename T>
T const&    min(T const &a, T const &b)
{
	return (a <= b ? a : b);
}

template<typename T>
T const&    max(T const &a, T const &b)
{
	return (a >= b ? a : b);
}

template<typename T>
void        swap(T& a, T&b)
{
   T    c;
   
   c = a;
   a = b;
   b = c;
}

#endif
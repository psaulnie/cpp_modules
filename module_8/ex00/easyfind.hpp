/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:08:25 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/31 11:23:54 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>
#include <iostream>

template<typename T>
int	easyfind(T container, int n)
{
	typename T::iterator	i = std::find(container.begin(), container.end(), n);
	if (i == container.end())
		throw std::exception();
	return (*i);
}

#endif
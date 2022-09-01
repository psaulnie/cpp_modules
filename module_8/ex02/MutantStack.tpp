/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:23:39 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/01 11:10:42 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>() { }

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &copy) : std::stack<T>(copy) { }

template<typename T>
MutantStack<T>	&MutantStack<T>::operator=(MutantStack<T> const &copy)
{
	*this = copy;
	return (*this);
}
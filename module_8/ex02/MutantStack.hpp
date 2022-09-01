/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:22:40 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/01 11:10:15 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename	std::stack<T>::container_type::const_iterator	iterator;
		MutantStack();
		MutantStack(MutantStack<T> const &copy);
		MutantStack	&operator=(MutantStack<T> const &copy);
		~MutantStack() {};

		iterator	begin() const { return (std::stack<T>::c.begin()); };
		iterator	end() const { return (std::stack<T>::c.end()); };

};

#endif
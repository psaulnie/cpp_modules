/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:22:40 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/31 16:06:46 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(MutantStack const &copy);
		MutantStack	&operator=(MutantStack const &copy);
		virtual ~MutantStack();

	// class iterator
	// {
	// 	private:
	// 		/* data */
	// 	public:
	// 		MutantStack(/* args */);
	// 		~MutantStack();
	// };
	
};

#endif
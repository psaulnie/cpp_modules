/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:17:26 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/30 11:47:21 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void    print(T& element)
{
    std::cout << element << " ";
}

template<typename T>
void    iter(T *array, unsigned int size, void (*f)(T& element))
{
    unsigned int    i = 0;

    while (i < size)
    {
        f(array[i]);
        i++;
    }
}

#endif
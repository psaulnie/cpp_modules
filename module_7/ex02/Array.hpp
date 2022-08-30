/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:06:18 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/30 14:38:22 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array
{
    private:
        T               *array;
        unsigned int    array_size;
    public:
        Array();
        Array(unsigned int n); 
        Array(Array& copy);
        Array   &operator=(Array<T>& copy);
        ~Array();

        unsigned int    size();
        T               getElement(unsigned int index);

        T   &operator[](int index);
};

#endif
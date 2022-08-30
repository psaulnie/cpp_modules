/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:17:05 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/30 15:00:19 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() : array(), array_size(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : array_size(n) 
{
    this->array = new T[n];
}

template<typename T>
Array<T>::Array(Array &copy)
{
    *this = copy;
}

template<typename T>
Array<T>   &Array<T>::operator=(Array<T> &copy)
{
    
    unsigned int i = 0;
    // delete[] this->array;
    this->array_size = copy.size();
    this->array = new T[copy.size()];
    while (i < this->array_size)
    {
        this->array[i] = copy.getElement(i);
        i++;
    }
    return (*this);
}

template<typename T>
Array<T>::~Array()
{
    delete[]  this->array;
}

template<typename T>
unsigned int    Array<T>::size()
{
    return (this->array_size);
}

template<typename T>
T   Array<T>::getElement(unsigned int index)
{
    if (index >= this->array_size)
        throw std::exception();
    return (this->array[index]);
}

template<typename T>
T   &Array<T>::operator[](int index)
{
    if ((unsigned int)index >= this->array_size)
        throw std::exception();
    return (this->array[index]);
}
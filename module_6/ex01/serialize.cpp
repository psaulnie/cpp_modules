/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:51:51 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/26 15:18:09 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

uintptr_t   serialize(Data *ptr)
{
    uintptr_t   serialized = reinterpret_cast<uintptr_t>(ptr);
    return (serialized);
}

Data*       deserialize(uintptr_t raw)
{
    Data    *deserialized = reinterpret_cast<Data *>(raw);
    return (deserialized);
}
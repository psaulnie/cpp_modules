/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:54:11 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/26 15:08:01 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <stdint.h>

struct Data
{
    int         a;
    int         b;
    std::string c;
};

uintptr_t   serialize(Data *ptr);
Data*       deserialize(uintptr_t raw);

#endif
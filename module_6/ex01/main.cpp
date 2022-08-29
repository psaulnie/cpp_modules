/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:50:48 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/26 15:17:11 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

int main()
{
    Data  ptr;

    ptr.a = 2;
    ptr.b = 435;
    ptr.c = "salut";
    uintptr_t   raw = serialize(&ptr);
    (void)raw;
    Data*   ptr2 = deserialize(raw);

    std::cout << ptr2->a << " - " << ptr2->b << " - " << ptr2->c << std::endl;
}
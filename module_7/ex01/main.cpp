/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:17:06 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/30 11:49:35 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};

    iter(array, 6, print);

    std::cout << std::endl;

    float array2[] = {42.0f, 435.56f, 32.0f};
    iter(array2, 3, print);

    std::cout << std::endl;
    
    std::string array3[] = {"salut", "les", "amis"};
    iter(array3, 3, print);
}
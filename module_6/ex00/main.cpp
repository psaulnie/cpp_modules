/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 09:58:44 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/07 10:09:04 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Literal.hpp"

int	main(int argc, char *argv[])
{
	if (argc < 2)
		return (1);
	Literal	value(argv[1]);

	value.print();
}

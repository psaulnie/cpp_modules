/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 09:44:33 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/22 10:38:47 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int	main()
{
	IMateriaSource*	src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter*	me = new Character("me");
	
	AMateria*	tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	AMateria*	garbage = tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter*	bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	me->unequip(0);
	me->unequip(4);
	me->unequip(3);
	
	delete	garbage;
	delete	bob;
	delete	me;
	delete	src;

	return (0);
}

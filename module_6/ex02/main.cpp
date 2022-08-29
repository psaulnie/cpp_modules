/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:34:28 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/26 15:45:00 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base    *generate(void)
{
    Base    *newBase;
    std::srand(time(0));
    switch ((std::rand() % 3) + 1)
    {
        case 1:
            newBase = new A();
            break;
        case 2:
            newBase = new B();
        default:
            newBase = new C();
            break;
    }
    return (newBase);
}

void    identify(Base *p)
{

}

void    identify(Base &p)
{
    
}

int main()
{
    Base*   base = generate();
    
}

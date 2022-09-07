/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:34:28 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/06 16:17:23 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <random>

Base    *generate(void)
{
    std::srand(std::time(nullptr));
    switch (std::rand() % 3)
    {
        case 1:
            return (new A);
        case 2:
            return (new B);
        default:
            return (new C);
    }
}

void    identify(Base *p)
{
    A    *test1 = dynamic_cast<A *>(p);
    if (test1 != NULL)
    {
        std::cout << "A" << std::endl;
        return ;
    }
    B    *test2 = dynamic_cast<B *>(p);
    if (test2 != NULL)
    {
        std::cout << "B" << std::endl;
        return ;
    }
    C    *test3 = dynamic_cast<C *>(p);
    if (test3 != NULL)
    {
        std::cout << "C" << std::endl;
        return ;
    }
}

void    identify(Base &p)
{
    try
    {
        A   &a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        (void)a;
    }
    catch(const std::exception& e) {}
    try
    {
        B   &b = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        (void)b;
    }
    catch(const std::exception& e) {}
    try
    {
        C   &c = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        (void)c;
    }
    catch(const std::exception& e) {}
    
}

int main()
{
    Base*   base = generate();
    Base&   refBase = *base;
    identify(refBase);
    identify(base);
}

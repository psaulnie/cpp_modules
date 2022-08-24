/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:48:50 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/24 13:48:44 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->array[0].set(5, "0");
	this->array[1].set(5, "1");
	this->array[2].set(5, "2");
	this->array[3].set(5, "3");
	this->array[4].set(5, "4");
	this->array[5].set(5, "5");
	this->array[6].set(5, "6");
	this->array[7].set(5, "7");
	this->array[8].set(5, "-1");
	this->oldest = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	PhoneBook::search(void)
{
	std::string	index;
	int			i;
	
	if (this->array[0].getIndex() == -1)
	{
		std::cout << "There is nobody registered on your PhoneBook ;(";
		return;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << std::right << std::setw(10) << "Index" << std::setfill(' ');
	std::cout << "|" << std::right << std::setw(10) << "First Name" << std::setfill(' ');
	std::cout << "|" << std::right << std::setw(10) << "Last Name" << std::setfill(' ');
	std::cout << "|" << std::right << std::setw(10) << "Nickname" << std::setfill(' ') << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	i = 0;
	while (i < 8 && this->array[i].getIndex() != -1)
	{
		std::cout << "|" << std::right << std::setw(10) << this->array[i].getIndex() << std::setfill(' ');
		std::cout << "|" << std::right << std::setw(10) << this->array[i].getFirstName(1) << std::setfill(' ');
		std::cout << "|" << std::right << std::setw(10) << this->array[i].getLastName(1) << std::setfill(' ');
		std::cout << "|" << std::right << std::setw(10) << this->array[i].getNickname(1) << std::setfill(' ') << "|" << std::endl;
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
	while (1)
	{
		std::cout << "Index (0-7)> ";
		std::getline(std::cin, index);
		if (index.empty())
			return ;
		if (index.length() != 1 || !(index[0] >= '0' && index[0] <= '7'))
		{
			std::cout << "Invalid index, try again" << std::endl;
			continue ;
		}
		break ;
	}
	i = std::atoi(index.c_str());
	if (this->array[i].isEmpty == 1)
	{
		std::cout << "This index is empty !" << std::endl;
		return;
	}
	std::cout << "Here you go =>" << std::endl;
	std::cout << "First Name : " << this->array[i].getFirstName(0) << std::endl;
	std::cout << "Last Name : " << this->array[i].getLastName(0) << std::endl;
	std::cout << "Nickname : " << this->array[i].getNickname(0) << std::endl;
	std::cout << "Phone Number : " << this->array[i].getPhoneNumber(0) << std::endl;
	std::cout << "Darkest Secret : " << this->array[i].getDarkestSecret(0) << std::endl;
	return;
}

void	PhoneBook::add(void)
{
	std::string	fname;
	std::string	lname;
	std::string	nname;
	std::string	pnumber;
	std::string	dsecret;
	int			i;
	int			replacedIndex;

	i = 0;
	replacedIndex = 0;
	while (this->array[i].getIndex() != -1)
	{
		if (this->array[i].isEmpty == 1)
			break ;
		i++;
	}
	if (i == 8)
	{
		if (this->oldest == 7)
		{
			this->oldest = 1;
			i = 0;
		}
		else
		{
			i = this->oldest;
			this->oldest += 1;
		}
	}
	std::cout << "First Name : ";
	std::getline(std::cin, fname);
	if (fname.empty())
		return ;
	std::cout << "Last Name : ";
	std::getline(std::cin, lname);
	if (lname.empty())
		return ;
	std::cout << "Nickname : ";
	std::getline(std::cin, nname);
	if (nname.empty())
		return ;
	std::cout << "Phone Number : ";
	std::getline(std::cin, pnumber);
	if (pnumber.empty())
		return ;
	std::cout << "Darkest Secret : ";
	std::getline(std::cin, dsecret);
	if (dsecret.empty())
		return ;
	this->array[i].isEmpty = 0;
	this->array[i].set(0, fname);
	this->array[i].set(1, lname);
	this->array[i].set(2, nname);
	this->array[i].set(3, pnumber);
	this->array[i].set(4, dsecret);
	return;
}
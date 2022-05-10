/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:48:52 by psaulnie          #+#    #+#             */
/*   Updated: 2022/05/10 19:09:25 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
	this->isEmpty = 1;
	return;
}

Contact::~Contact(void)
{
	return;
}

int			Contact::getIndex(void)
{
	return(this->index);
}

std::string	Contact::getFirstName(int action)
{
	std::string	newStr;

	if (this->firstName.length() > 10 && action == 1)
	{
		newStr = this->firstName.substr(0, 9);
		newStr.append(".");
		return (newStr);
	}
	return (this->firstName);
}

std::string Contact::getLastName(int action)
{
	std::string	newStr;

	if (this->lastName.length() > 10 && action == 1)
	{
		newStr = this->lastName.substr(0, 9);
		newStr.append(".");
		return (newStr);
	}
	return (this->lastName);
}

std::string Contact::getNickname(int action)
{
	std::string	newStr;

	if (this->nickname.length() > 10 && action == 1)
	{
		newStr = this->nickname.substr(0, 9);
		newStr.append(".");
		return (newStr);
	}
	return (this->nickname);
}

std::string Contact::getPhoneNumber(int action)
{
	std::string	newStr;

	if (this->phoneNumber.length() > 10 && action == 1)
	{
		newStr = this->phoneNumber.substr(0, 9);
		newStr.append(".");
		return (newStr);
	}
	return (this->phoneNumber);
}

std::string Contact::getDarkestSecret(int action)
{
	std::string	newStr;

	if (this->darkestSecret.length() > 10 && action == 1)
	{
		newStr = this->darkestSecret.substr(0, 9);
		newStr.append(".");
		return (newStr);
	}
	return (this->darkestSecret);
}

void	Contact::set(int action, std::string content)
{
	if (action == 0)
		this->firstName = content;
	if (action == 1)
		this->lastName = content;
	if (action == 2)
		this->nickname = content;
	if (action == 3)
		this->phoneNumber = content;
	if (action == 4)
		this->darkestSecret = content;
	if (action == 5)
		this->index = std::atoi(content.c_str());
	return;
}
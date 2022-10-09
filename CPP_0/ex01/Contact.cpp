/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:06:38 by aartiges          #+#    #+#             */
/*   Updated: 2022/03/14 17:03:11 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) : _firstName("")
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::showContact(void) const
{
	std::cout << "\tFIRST NAME :     " << this->getFirstName() << std::endl;
	std::cout << "\tLAST NAME :      " << this->_lastName << std::endl;
	std::cout << "\tNICKNAME :       " << this->_nickname << std::endl;
	std::cout << "\tPHONE NUMBER :   " << this->_phone << std::endl;
	std::cout << "\tDARKEST SECRET : " << this->_darkestSecret << std::endl;
}

void	writeCol(std::string str)
{
	std::cout << std::setfill(' ') << std::setw(10);
	if (str.length() > LEN_COL)
		std::cout << str.substr(0,9) + ".";
	else
		std::cout << str;
}

void	Contact::printContact(void) const
{
	writeCol(this->_firstName);
	std::cout << '|';
	writeCol(this->_lastName);
	std::cout << '|';
	writeCol(this->_nickname);
}

void	Contact::setContact(std::string firstname, std::string lastName,
	std::string nickname, std::string phone, std::string darkestSecret)
{
	this->_firstName = firstname;
	this->_lastName = lastName;
	this->_nickname = nickname;
	this->_phone = phone;
	this->_darkestSecret = darkestSecret;
}

std::string	Contact::getFirstName(void) const
{
	return (std::string(this->_firstName));
}

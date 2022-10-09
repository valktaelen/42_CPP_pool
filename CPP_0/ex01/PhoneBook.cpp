/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:44:12 by aartiges          #+#    #+#             */
/*   Updated: 2022/03/25 14:25:34 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Creation of the phone book" << std::endl;
	this->_pos = -1;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

bool isNumber(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

bool	PhoneBook::search(void) const
{
	int i;
	std::cout << "  index   | fst name | lst name | nickname " << std::endl;
	for (i = 0; i < NB_CONTACT; i++)
	{
		if (!this->_contacts[i].getFirstName().empty())
		{
			std::cout << std::setfill(' ') << std::setw(10);
			std::cout << i;
			std::cout << '|';
			this->_contacts[i].printContact();
			std::cout << std::endl;
		}
	}
	if (this->_pos == -1)
	{
		std::cout << "No contact in phonebook" << std::endl;
		return (0);
	}
	std::string	input;
	do
	{
		std::cout << "Which contact? ";
		std::getline(std::cin, input);
		if (!(std::cin.eof()) && isNumber(input))
			i = std::stoi(input);
	} while ((i < 0 || i >= NB_CONTACT || i > this->_pos)
		&& !(std::cin.eof()));
	if (std::cin.eof())
		return (1);
	this->search(i);
	return (0);
}

void	PhoneBook::search(int index) const
{
	this->_contacts[index].showContact();
}

bool	PhoneBook::add(void)
{
	std::string firstname;
	std::string lastName;
	std::string nickname;
	std::string phone;
	std::string darkestSecret;

	++(this->_pos);
	while (firstname.compare("") == 0 && !(std::cin.eof()))
	{
		std::cout << "\tFIRST NAME :     ";
		std::getline(std::cin, firstname);
	}
	while (lastName.compare("") == 0 && !(std::cin.eof()))
	{
		std::cout << "\tLAST NAME :      ";
		std::getline(std::cin, lastName);
	}
	while (nickname.compare("") == 0 && !(std::cin.eof()))
	{
		std::cout << "\tNICKNAME :       ";
		std::getline(std::cin, nickname);
	}
	while (phone.compare("") == 0 && !(std::cin.eof()))
	{
		std::cout << "\tPHONE NUMBER :   ";
		std::getline(std::cin, phone);
	}
	while (darkestSecret.compare("") == 0 && !(std::cin.eof()))
	{
		std::cout << "\tDARKEST SECRET : ";
		std::getline(std::cin, darkestSecret);
	}
	if (std::cin.eof())
		return (1);
	this->_contacts[this->_pos % NB_CONTACT].setContact(firstname, lastName,
		nickname, phone, darkestSecret);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:04:10 by aartiges          #+#    #+#             */
/*   Updated: 2022/03/23 15:54:17 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 1)
		std::cerr << argv[0] << " : Too many arguments" << std::endl;
	else
	{
		PhoneBook	phoneBook;
		std::string	cmd;
		do
		{
			std::cout << "> ";
			std::getline(std::cin, cmd);
			if (cmd.compare("ADD") == 0)
				phoneBook.add();
			else if (cmd.compare("SEARCH") == 0)
				phoneBook.search();
			else if (cmd.compare("EXIT") != 0 && !std::cin.eof())
				std::cerr << "Error : command not found" << std::endl;
			if (std::cin.eof())
			{
				std::cout << "End by ctl - D" << std::endl;
				return (EXIT_FAILURE);
			}
		} while (cmd.compare("EXIT") != 0);
		
	}
	return (EXIT_SUCCESS);
}

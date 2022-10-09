/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 04:59:30 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/21 05:33:44 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	std::string	levels[LEVEL] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*levelsFct[LEVEL])(void) = {
		&Harl::debug, &Harl::info, &Harl::warning, &Harl::error
	};
	size_t	i = 0;
	while (i < LEVEL)
	{
		if (level.compare(levels[i]) == 0)
		{
			(this->*levelsFct[i])();
			return ;
		}
		i++;
	}
	std::wcout << "Error: level not found" << std::endl;
}

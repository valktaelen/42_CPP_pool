/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 08:08:19 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/22 08:10:57 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Constructor FragTrap [Default] of " 
		<< ((this->getName().empty()) ? "noName" : this->getName()) << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDommage(30);
}
FragTrap::FragTrap(std::string& name): ClapTrap(name)
{
	std::cout << "Constructor FragTrap [param] of "
		<< ((this->getName().empty()) ? "noName" : this->getName()) << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDommage(30);
}
FragTrap::FragTrap(const FragTrap& ref): ClapTrap(ref)
{
	std::cout << "Constructor FragTrap [copy] of "
		<< ((this->getName().empty()) ? "noName" : this->getName()) << std::endl;
}
FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap of "
		<< ((this->getName().empty()) ? "noName" : this->getName()) << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " 
		<< ((this->getName().empty()) ? "noName" : this->getName())
		<< " high Fives Guys capacity" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& ref)
{
	ClapTrap::operator=(ref);
	return (*this);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 07:08:42 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/22 08:05:31 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Constructor ScavTrap [Default] of " 
		<< ((this->getName().empty()) ? "noName" : this->getName()) << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDommage(20);
}
ScavTrap::ScavTrap(std::string& name): ClapTrap(name)
{
	std::cout << "Constructor ScavTrap [param] of "
		<< ((this->getName().empty()) ? "noName" : this->getName()) << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDommage(20);
}
ScavTrap::ScavTrap(const ScavTrap& ref): ClapTrap(ref)
{
	std::cout << "Constructor ScavTrap [copy] of "
		<< ((this->getName().empty()) ? "noName" : this->getName()) << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap of "
		<< ((this->getName().empty()) ? "noName" : this->getName()) << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " 
		<< ((this->getName().empty()) ? "noName" : this->getName())
		<< " pass in Gate keeper mode" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& ref)
{
	ClapTrap::operator=(ref);
	return (*this);
}

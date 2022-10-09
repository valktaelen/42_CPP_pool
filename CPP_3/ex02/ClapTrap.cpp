/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 05:39:11 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/22 08:03:28 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	:_name(""), _hitPoints(10), _energyPoints(10), _attackDommage(0)
{
	std::cout << "Constructor [Default] of " 
		<< ((this->_name.empty()) ? "noName" : this->_name) << std::endl;
}

ClapTrap::ClapTrap(std::string& name)
	:_name(name), _hitPoints(10), _energyPoints(10), _attackDommage(0)
{
	std::cout << "Constructor [param] of "
		<< ((this->_name.empty()) ? "noName" : this->_name) << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ref)
{
	std::cout << "Constructor [copy] of "
		<< ((this->_name.empty()) ? "noName" : this->_name) << std::endl;
	*this = ref;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor of "
		<< ((this->_name.empty()) ? "noName" : this->_name) << std::endl;
}


std::string		ClapTrap::getName() const
{
	return (this->_name);
}
unsigned int	ClapTrap::getHitPoints() const
{
	return (this->_hitPoints);
}
unsigned int	ClapTrap::getEnergyPoints() const
{
	return (this->_energyPoints);
}
unsigned int	ClapTrap::getAttackDommage() const
{
	return (this->_attackDommage);
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}
void	ClapTrap::setHitPoints(unsigned int hitPoints)
{
	this->_hitPoints = hitPoints;
}
void	ClapTrap::setEnergyPoints(unsigned int energyPoints)
{
	this->_energyPoints = energyPoints;
}
void	ClapTrap::setAttackDommage(unsigned int attackDommage)
{
	this->_attackDommage = attackDommage;
}


void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " 
			<< ((this->_name.empty()) ? "noName" : this->_name) << " is dead! "
			<< "Can't attack"
			<< std::endl;
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " 
			<< ((this->_name.empty()) ? "noName" : this->_name) << " hasn't any energy! "
			<< "Can't attack"
			<< std::endl;
		return ;
	}
	std::cout << "ClapTrap " 
		<< ((this->_name.empty()) ? "noName" : this->_name) << " attacks "
		<< ((target.empty()) ? "noName" : target) << ", causing "
		<< this->_attackDommage << " points of damage! E("
		<< (this->_energyPoints - 1) << ")" << std::endl;
	--(this->_energyPoints);
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " 
			<< ((this->_name.empty()) ? "noName" : this->_name) << " is dead! "
			<< "Can't take dommage"
			<< std::endl;
		return ;
	}
	std::cout << "ClapTrap " 
		<< ((this->_name.empty()) ? "noName" : this->_name) << " be attack "
		<< ", lose "
		<< amount << " hit points! Have " << ((this->_hitPoints < amount)?0:this->_hitPoints - amount)
		<< " hit points" << std::endl;
	if (this->_hitPoints < amount)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " 
			<< ((this->_name.empty()) ? "noName" : this->_name) << " is dead! "
			<< "Can't be repaired"
			<< std::endl;
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " 
			<< ((this->_name.empty()) ? "noName" : this->_name) << " hasn't any energy! "
			<< "Can't be repaired"
			<< std::endl;
		return ;
	}
	std::cout << "ClapTrap " 
		<< ((this->_name.empty()) ? "noName" : this->_name) << " be repare "
		<< ", win "
		<< amount << " hit points! Have " << (this->_hitPoints + amount)
		<< " hit points" << std::endl;
	this->_hitPoints += amount;
	--(this->_energyPoints);
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& ref)
{
	this->_name = ref._name;
	this->_hitPoints = ref._hitPoints;
	this->_energyPoints = ref._energyPoints;
	this->_attackDommage = ref._attackDommage;
	return (*this);
}

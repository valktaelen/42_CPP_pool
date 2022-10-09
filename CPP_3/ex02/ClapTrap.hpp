/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 05:39:19 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/22 09:22:06 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>

class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDommage;
public:
	ClapTrap();
	ClapTrap(std::string& name);
	ClapTrap(const ClapTrap& ref);
	~ClapTrap();

	std::string		getName() const;
	unsigned int	getHitPoints() const;
	unsigned int	getEnergyPoints() const;
	unsigned int	getAttackDommage() const;

	void	setName(std::string name);
	void	setHitPoints(unsigned int hitPoints);
	void	setEnergyPoints(unsigned int energyPoints);
	void	setAttackDommage(unsigned int attackDommage);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap&	operator=(const ClapTrap& ref);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 06:18:49 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/22 06:57:42 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	attack(ClapTrap& v1, ClapTrap& v2)
{
	v1.attack(v2.getName());
	v2.takeDamage(v1.getAttackDommage());
}

int main()
{
	std::string	n2 = "T2";
	std::string	n4 = "T4";
	ClapTrap	t1;
	ClapTrap	t2(n2);
	ClapTrap	t3 = t2;
	ClapTrap	t4(n4);

	attack(t1, t2);
	attack(t3, t2);
	attack(t4, t2);
	attack(t1, t2);
	t1.setAttackDommage(5);
	attack(t1, t2);
	t2.beRepaired(5);
	attack(t1, t2);
	attack(t1, t2);
	attack(t1, t2);
	attack(t1, t2);

	return 0;
}

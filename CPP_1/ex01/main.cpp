/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 00:49:32 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/19 01:21:44 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int n = 20;
	Zombie *t = zombieHorde(n, "aie");
	while (n != 0)
		t[--n].announce();
	delete []t;
	return 0;
}

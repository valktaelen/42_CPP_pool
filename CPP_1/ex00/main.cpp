/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 00:49:32 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/19 00:57:45 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *t = new Zombie("lol");
	t->announce();
	delete t;
	t = newZombie("zolo");
	t->announce();
	delete t;
	randomChump("zoulou");
	return 0;
}

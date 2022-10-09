/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 00:39:27 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/21 00:42:02 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie(void);
	Zombie(std::string name);
	void	setName(std::string name);
	~Zombie();
	void announce(void) const;
};

Zombie* zombieHorde( int N, std::string name );

#endif

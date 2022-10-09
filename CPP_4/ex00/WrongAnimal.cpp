/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:54:07 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/27 17:13:44 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Constructor of WrongAnimal" << std::endl;
	this->type = "None";
}
WrongAnimal::WrongAnimal(const WrongAnimal& ref)
{
	std::cout << "Constructor copy of WrongAnimal" << std::endl;
	*this = ref;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor of WrongAnimal" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& ref)
{
	this->type = ref.getType();
	return (*this);
}

void		WrongAnimal::makeSound() const
{
	std::cout << "I'm not concrete, so no sound" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:54:07 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/28 02:13:34 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Constructor of Animal" << std::endl;
	this->_type = "None";
}
Animal::Animal(Animal& ref)
{
	std::cout << "Constructor copy of Animal" << std::endl;
	*this = ref;
}
Animal::~Animal()
{
	std::cout << "Destructor of Animal" << std::endl;
}

Brain*	Animal::getBrain() const
{
	return (NULL);
}

std::string	Animal::getType() const
{
	return (this->_type);
}

Animal&	Animal::operator=(const Animal& ref)
{
	std::cout << "Animal =" << std::endl;
	this->_type = ref.getType();
	return (*this);
}

void		Animal::makeSound() const
{
	std::cout << "I'm not concrete, so no sound" << std::endl;
}

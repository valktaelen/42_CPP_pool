/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:54:19 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/27 22:55:02 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Constructor of Dog" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog& ref)
{
	std::cout << "Constructor copy of Dog" << std::endl;
	*this = ref;
}

Dog::~Dog()
{
	std::cout << "Destructor of Dog" << std::endl;
}


std::string	Dog::getType() const
{
	return (Animal::getType());
}

void		Dog::makeSound() const
{
	std::cout << "Ouaf" << std::endl;
}


Dog&	Dog::operator=(const Dog& ref)
{
	Animal::operator=(ref);
	return (*this);
}


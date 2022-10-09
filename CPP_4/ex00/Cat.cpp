/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:54:14 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/27 22:54:52 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Constructor of Cat" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat& ref)
{
	std::cout << "Constructor copy of Cat" << std::endl;
	*this = ref;
}

Cat::~Cat()
{
	std::cout << "Destructor of Cat" << std::endl;
}


std::string	Cat::getType() const
{
	return (Animal::getType());
}

void		Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}


Cat&	Cat::operator=(const Cat& ref)
{
	Animal::operator=(ref);
	return (*this);
}


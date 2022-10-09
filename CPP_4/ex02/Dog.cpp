/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:54:19 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/02 14:29:12 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Constructor of Dog" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog& ref)
{
	std::cout << "Constructor copy of Dog" << std::endl;
	*this = ref;
}

Dog::~Dog()
{
	std::cout << "Destructor of Dog" << std::endl;
	if (this->_brain)
		delete this->_brain;
}

Brain*		Dog::getBrain() const
{
	return (this->_brain);
}

std::string	Dog::getType() const
{
	return (AAnimal::getType());
}

void		Dog::makeSound() const
{
	std::cout << "Ouaf" << std::endl;
}


Dog&	Dog::operator=(const Dog& ref)
{
	AAnimal::operator=(ref);
	if (ref._brain)
	{
		this->_brain = new Brain();
		for (int i = 0; i < BRAIN_LEN; i++)
			this->_brain->setIdeaI(i, ref._brain->getIdeaI(i));
	}
	return (*this);
}


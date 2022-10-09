/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:54:14 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/28 02:05:45 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Constructor of Cat" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat& ref)
{
	std::cout << "Constructor copy of Cat" << std::endl;
	*this = ref;
}

Cat::~Cat()
{
	std::cout << "Destructor of Cat" << std::endl;
	if (this->_brain)
		delete this->_brain;
}

Brain*		Cat::getBrain() const
{
	return (this->_brain);
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
	std::cout << "Cat =" << std::endl;
	Animal::operator=(ref);
	if (this->_brain)
	{
		delete this->_brain;
		this->_brain = NULL;
	}
	if (ref._brain)
	{
		this->_brain = new Brain();
		for (int i = 0; i < BRAIN_LEN; i++)
			this->_brain->setIdeaI(i, ref._brain->getIdeaI(i));
	}
	return (*this);
}


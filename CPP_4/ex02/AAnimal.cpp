/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:54:07 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/27 17:54:25 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Constructor of AAnimal" << std::endl;
	this->_type = "None";
}
AAnimal::AAnimal(const AAnimal& ref)
{
	std::cout << "Constructor copy of AAnimal" << std::endl;
	*this = ref;
}
AAnimal::~AAnimal()
{
	std::cout << "Destructor of AAnimal" << std::endl;
}

std::string	AAnimal::getType() const
{
	return (this->_type);
}

AAnimal&	AAnimal::operator=(const AAnimal& ref)
{
	this->_type = ref.getType();
	return (*this);
}

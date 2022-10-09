/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:54:14 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/27 17:12:50 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Constructor of WrongCat" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& ref)
{
	std::cout << "Constructor copy of WrongCat" << std::endl;
	*this = ref;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor of WrongCat" << std::endl;
}


std::string	WrongCat::getType() const
{
	return (WrongAnimal::getType());
}

void		WrongCat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}


WrongCat&	WrongCat::operator=(const WrongCat& ref)
{
	WrongAnimal::operator=(ref);
	return (*this);
}


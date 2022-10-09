/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:08:01 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/27 17:27:42 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Constructor of Brain" << std::endl;
}
Brain::Brain(const Brain& ref)
{
	std::cout << "Constructor copy of Brain" << std::endl;
	*this = ref;
}
Brain::~Brain()
{
	std::cout << "Destructor of Brain" << std::endl;
}

std::string	Brain::getIdeaI(int i) const
{
	return (this->_ideas[i]);
}
void		Brain::setIdeaI(int i, std::string idea)
{
	this->_ideas[i] = idea;
}

Brain&	Brain::operator=(const Brain& ref)
{
	for (int i = 0; i < BRAIN_LEN; i++)
		this->_ideas[i] = ref._ideas[i];
	return (*this);
}

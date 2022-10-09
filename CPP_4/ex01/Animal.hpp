/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:54:12 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/02 14:56:37 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include "Brain.hpp"

class Animal
{
protected:
	std::string	_type;
public:
	Animal();
	Animal(Animal& ref);
	virtual ~Animal();

	virtual std::string	getType() const;
	virtual void		makeSound() const;
	virtual	Brain*		getBrain() const;

	virtual Animal&	operator=(const Animal& ref);
};

#endif

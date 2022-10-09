/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:54:22 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/03 17:23:57 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain	*_brain;
public:
	Dog();
	Dog(const Dog& ref);
	virtual ~Dog();

	Brain*		getBrain() const;
	std::string	getType() const;
	void		makeSound() const;

	Dog&	operator=(const Dog& ref);
};

#endif

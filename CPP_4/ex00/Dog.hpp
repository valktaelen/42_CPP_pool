/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:54:22 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/27 16:23:02 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
private:
	
public:
	Dog();
	Dog(const Dog& ref);
	~Dog();

	std::string	getType() const;
	void		makeSound() const;

	Dog&	operator=(const Dog& ref);
};

#endif

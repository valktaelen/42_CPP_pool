/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:54:12 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/03 17:26:22 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>
# include "Brain.hpp"

class AAnimal
{
protected:
	std::string	_type;
	AAnimal();
	AAnimal(const AAnimal& ref);
public:
	virtual ~AAnimal();

	virtual std::string	getType() const;
	virtual void		makeSound() const = 0;
	virtual	Brain*		getBrain() const = 0;

	virtual AAnimal&	operator=(const AAnimal& ref);
};

#endif

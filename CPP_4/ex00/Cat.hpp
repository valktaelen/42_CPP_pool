/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:54:17 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/27 16:17:03 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
private:
	
public:
	Cat();
	Cat(const Cat& ref);
	~Cat();

	std::string	getType() const;
	void		makeSound() const;

	Cat&	operator=(const Cat& ref);
};

#endif

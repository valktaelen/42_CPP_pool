/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:54:49 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/02 17:11:01 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

# define BRAIN_LEN 100

class Brain
{
private:
	std::string	_ideas[BRAIN_LEN];
public:
	Brain();
	Brain(const Brain& ref);
	virtual ~Brain();

	std::string	getIdeaI(int i) const;
	void		setIdeaI(int i, std::string idea);

	Brain&	operator=(const Brain& ref);
};

#endif

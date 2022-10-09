/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 20:23:58 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/08 17:40:07 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>
# include <iterator>

template<typename T>
class MutantStack: public std::stack<T>
{
public:
	MutantStack() : std::stack<T>() {};
	MutantStack(const MutantStack& copy) : std::stack<T>(copy){};
	~MutantStack() {};

	MutantStack<T>& operator=(const MutantStack<T>& ref)
	{
		if (*this == ref)
			return (*this);
		std::stack<T>::operator=(ref);
		return (*this);
	};

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() { return (std::stack<T>::c.begin()); };
	iterator end() { return (std::stack<T>::c.end()); };

	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	reverse_iterator rbegin() { return (std::stack<T>::c.rbegin()); };
	reverse_iterator rend() { return (std::stack<T>::c.rend()); };
};

#endif

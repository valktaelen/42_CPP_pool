/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 04:31:44 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/07 16:33:48 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename T>
void iter(T* array, size_t len, void (*f)(T&))
{
	for (size_t i = 0; i < len; i++)
		(*f)(array[i]);
}

template<typename T>
void iter(const T* array, size_t len, void (*f)(const T&))
{
	for (size_t i = 0; i < len; i++)
		(*f)(array[i]);
}

template<typename T>
void	print_array(const T* array, const size_t len)
{
	for (size_t i = 0; i < len; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}

template<typename T>
void	acc(T& elem)
{
	++elem;
}

#endif

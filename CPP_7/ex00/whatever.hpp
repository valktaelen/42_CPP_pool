/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges jmilhas rcuminal <x@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 03:58:03 by aartiges          #+#    #+#             */
/*   Updated: 2022/10/09 21:56:43 by aartiges jm      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T& a, T& b)
{
	T	tmp = b;
	b = a;
	a = tmp;
}

template<typename T>
const T&	min(const T& a, const T& b)
{
	if (a < b)
		return (a);
	return (b);
}

template<typename T>
const T&	max(const T& a, const T& b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif

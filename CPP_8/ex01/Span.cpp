/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 20:22:33 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/08 17:53:36 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _lenMax(0), _data(0) {}
Span::Span(const unsigned int n): _lenMax(n), _data(0) {}
Span::Span(const Span& ref)
{
	*this = ref;
}
Span::~Span() {}

Span&	Span::operator=(const Span& ref)
{
	this->_data = ref._data;
	this->_lenMax = ref._lenMax;
	return (*this);
}

void			Span::addNumber(const int n)
{
	if (this->_data.size() == this->_lenMax)
		throw SpanFullException();
	this->_data.push_back(n);
	std::sort(this->_data.begin(), this->_data.end());
}
unsigned int	Span::shortestSpan() const
{
	if (this->_data.size() <= 1)
		throw SpanEmptySetException();
	return (static_cast<unsigned int>(this->_data.back() - this->_data.front()));
}
unsigned int	Span::longestSpan() const
{
	if (this->_data.size() <= 1)
		throw SpanEmptySetException();
	unsigned int	min = this->_data[1] - this->_data[0];
	size_t			i = 2;
	while (i < this->_data.size())
	{
		if (static_cast<unsigned int>(this->_data[i] - this->_data[i - 1]) < min)
			min = static_cast<unsigned int>(this->_data[i] - this->_data[i - 1]);
		++i;
	}
	return (min);
}

unsigned int	Span::size() const
{
	return (this->_data.size());
}

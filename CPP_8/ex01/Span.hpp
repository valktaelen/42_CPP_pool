/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 20:23:39 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/08 15:45:49 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <iterator>

class Span
{
private:
	size_t				_lenMax;
	std::vector<int>	_data;
public:
	Span();
	Span(const Span& ref);
	Span(const unsigned int n);
	~Span();
	Span&	operator=(const Span& ref);

	void			addNumber(int n);
	unsigned int	shortestSpan() const;
	unsigned int	longestSpan() const;

	unsigned int	size() const;

	template<class It>
	void	addNumber(It begin, It end)
	{
		if ((end - begin) + this->_data.size() <= this->_lenMax)
		{
			std::copy(begin, end, std::back_inserter(this->_data));
			std::sort(this->_data.begin(), this->_data.end());
			return ;
		}
		else if (this->_data.size() <= this->_lenMax)
		{
			std::copy(begin, begin + (this->_lenMax - this->_data.size()), std::back_inserter(this->_data));
			std::sort(this->_data.begin(), this->_data.end()); 
		}
		throw SpanFullException();
	};

	class SpanFullException: public std::exception
	{
		const char*	what() const throw()
		{
			return ("SpanFullException");
		}
	};
	class SpanEmptySetException: public std::exception
	{
		const char*	what() const throw()
		{
			return ("SpanEmptySetException");
		}
	};
};


#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 04:51:13 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/06 21:15:14 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
private:
	T*				_array;
	unsigned int	_size;
public:
	Array(const unsigned int n): _array(new T[n]()), _size(n) {};
	Array(): _array(new T[0]()), _size(0) {};
	Array(const Array& ref): _array(new T[ref._size]()), _size(ref._size)
	{
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = ref._array[i];
	};
	~Array()
	{
		delete [] this->_array;
	};

	Array&	operator=(const Array& ref)
	{
		if (this == &ref)
			return (*this);
		this->_array = new T[ref._size]();
		this->size = ref._size;
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = ref._array[i];
		return (*this);
	};
	T&	operator[](const unsigned int pos)
	{
		if (pos >= this->_size)
			throw ArrayException();
		return (this->_array[pos]);
	};

	const T&	operator[](const unsigned int pos) const
	{
		if (pos >= this->_size)
			throw ArrayException();
		return (this->_array[pos]);
	};

	unsigned int	size() const
	{
		return (this->_size);
	};

	class ArrayException: public std::exception
	{
		public:
		const char*	what() const throw()
		{
			return ("ArrayException: Overflow on Array");
		}
	};
};

#endif

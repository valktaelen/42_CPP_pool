/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 05:54:32 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/21 13:26:18 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_val);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_val = raw;
}

Fixed&	Fixed::operator=(Fixed const & fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_val = fixed._val;
	return (*this);
}

Fixed::Fixed(int const raw):_val(raw << Fixed::_nbBit)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const raw):_val((int)(raw * (1 << Fixed::_nbBit)))
{
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
	return ((float)this->_val / (float)(1 << Fixed::_nbBit));
}

int Fixed::toInt( void ) const
{
	return (this->_val >> Fixed::_nbBit);
}

std::ostream&	operator<<(std::ostream& o, Fixed const & fixed)
{
	o << fixed.toFloat();
	return (o);
}

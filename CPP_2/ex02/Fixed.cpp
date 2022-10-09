/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 05:54:32 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/21 13:36:46 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _val(0)
{
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed::~Fixed()
{
}

int		Fixed::getRawBits( void ) const
{
	return (this->_val);
}

void	Fixed::setRawBits( int const raw )
{
	this->_val = raw;
}

Fixed&	Fixed::operator=(Fixed const & fixed)
{
	this->_val = fixed._val;
	return (*this);
}

Fixed::Fixed(int const raw):_val(raw << Fixed::_nbBit)
{
}

Fixed::Fixed(float const raw):_val((int)(raw * (1 << Fixed::_nbBit)))
{
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

Fixed	Fixed::operator+(Fixed const & fixed)
{
	Fixed	ret(*this);
	ret.setRawBits(this->getRawBits() + fixed.getRawBits());
	return (ret);
}

Fixed	Fixed::operator-(Fixed const & fixed)
{
	Fixed	ret(*this);
	ret.setRawBits(this->getRawBits() - fixed.getRawBits());
	return (ret);
}

Fixed	Fixed::operator*(Fixed const & fixed)
{
	return (this->toFloat() * fixed.toFloat());
}

Fixed	Fixed::operator/(Fixed const & fixed)
{
	return (this->toFloat() / fixed.toFloat());
}


bool	Fixed::operator<(Fixed const & fixed)
{
	return (this->toFloat() < fixed.toFloat());
}

bool	Fixed::operator>(Fixed const & fixed)
{
	return (this->toFloat() > fixed.toFloat());
}

bool	Fixed::operator>=(Fixed const & fixed)
{
	return (this->toFloat() >= fixed.toFloat());
}

bool	Fixed::operator<=(Fixed const & fixed)
{
	return (this->toFloat() <= fixed.toFloat());
}

bool	Fixed::operator==(Fixed const & fixed)
{
	return (this->toFloat() == fixed.toFloat());
}

bool	Fixed::operator!=(Fixed const & fixed)
{
	return (this->toFloat() != fixed.toFloat());
}


Fixed	Fixed::operator++()
{
	this->setRawBits(this->getRawBits() + (1 << this->_nbBit));
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->setRawBits(this->getRawBits() - (1 << this->_nbBit));
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed ret(*this);
	operator++();
	return (ret);
}

Fixed	Fixed::operator--(int)
{
	Fixed	ret(*this);
	operator--();
	return (ret);
}


Fixed &Fixed::min(Fixed & f1, Fixed & f2)
{
	if (f1.toFloat() < f2.toFloat())
		return (f1);
	return (f2);
}

Fixed &Fixed::max(Fixed & f1, Fixed & f2)
{
	if (f1.toFloat() < f2.toFloat())
		return (f2);
	return (f1);
}

Fixed const &Fixed::min(Fixed const & f1, Fixed const & f2)
{
	if (f1.toFloat() < f2.toFloat())
		return (f1);
	return (f2);
}

Fixed const &Fixed::max(Fixed const & f1, Fixed const & f2)
{
	if (f1.toFloat() < f2.toFloat())
		return (f2);
	return (f1);
}


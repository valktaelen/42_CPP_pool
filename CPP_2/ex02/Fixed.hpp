/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 05:54:35 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/21 07:59:32 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_val;
	static const int	_nbBit = 8;
public:
	Fixed();
	Fixed(const Fixed &fixed);
	~Fixed();

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	Fixed&	operator=(Fixed const & fixed);

	Fixed(int const raw);
	Fixed(float const raw);

	float toFloat( void ) const;
	int toInt( void ) const;

	Fixed	operator+(Fixed const & fixed);
	Fixed	operator-(Fixed const & fixed);
	Fixed	operator*(Fixed const & fixed);
	Fixed	operator/(Fixed const & fixed);

	bool	operator<(Fixed const & fixed);
	bool	operator>(Fixed const & fixed);
	bool	operator>=(Fixed const & fixed);
	bool	operator<=(Fixed const & fixed);
	bool	operator==(Fixed const & fixed);
	bool	operator!=(Fixed const & fixed);

	Fixed	operator++();
	Fixed	operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);

	static Fixed &min(Fixed & f1, Fixed & f2);
	static Fixed &max(Fixed & f1, Fixed & f2);
	static Fixed const &min(Fixed const & f1, Fixed const & f2);
	static Fixed const &max(Fixed const & f1, Fixed const & f2);
};

std::ostream&	operator<<(std::ostream& o, Fixed const & fixed);

#endif

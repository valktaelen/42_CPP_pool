/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 05:54:35 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/21 07:25:48 by aartiges         ###   ########lyon.fr   */
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

};

std::ostream&	operator<<(std::ostream& o, Fixed const & fixed);

#endif

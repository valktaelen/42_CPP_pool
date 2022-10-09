/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 23:07:09 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/06 00:13:25 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONV_H
# define CONV_H
# include <iostream>

typedef enum e_type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	INF,
	NAN
}	t_type;

class Conv
{
private:
	t_type	_type;
	bool	_sign;
	double	_num;
	Conv(const Conv& ref);
	Conv&	operator=(const Conv& ref);
public:
	Conv(std::string num);
	~Conv();
	t_type	getType() const;
	bool	getSign() const;
	double	getNum() const;
};

std::ostream& operator<<(std::ostream& os, const Conv& ref);

#endif

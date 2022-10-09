/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 23:07:03 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/06 03:23:58 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Conv.hpp"

static bool	sIsNumber(const std::string& s)
{
	bool p = false;
	std::string::const_iterator it = s.begin();
	if (it != s.end() && *it == '-')
		++it;
    while (it != s.end() && (std::isdigit(*it) || *it == '.' || *it == '-'))
	{
		if (*it == '.' && p)
			return (false);
		if (*it == '.')
			p = true;
		++it;
	}
    return !s.empty() && it == s.end();
}

Conv::Conv(const Conv& ref)
{
	*this = ref;
}
Conv::Conv(std::string num)
{
	if (num.length() == 3 && num.at(0) == '\'' && num.at(2) == '\'')
	{
		this->_num = static_cast<double>(num.at(1));
		this->_type = CHAR;
	}
	else if (num.at(num.length() - 1) == 'f' && sIsNumber(num.substr(0, num.length() - 1)))
	{
		this->_num = static_cast<double>(std::stof(num.substr(0, num.length() - 1)));
		this->_type = CHAR;
	}
	else if (num.compare("-inff") == 0 || num.compare("-inf") == 0)
	{
		this->_type = INF;
		this->_sign = 1;
	}
	else if (num.compare("+inff") == 0 || num.compare("+inf") == 0)
	{
		this->_type = INF;
		this->_sign = 0;
	}
	else if (num.compare("nanf") == 0 || num.compare("nan") == 0)
		this->_type = NAN;
	else if (num.find('.') != std::string::npos && sIsNumber(num))
	{
		this->_num = std::stod(num);
		this->_type = DOUBLE;
	}
	else if (sIsNumber(num))
	{
		this->_num = static_cast<double>(std::stoi(num));
		this->_type = INT;
	}
	else
	{
		std::cerr << "Error: param not good: " << num << std::endl;
		throw std::exception();
	}
}
Conv::~Conv()
{

}

Conv&	Conv::operator=(const Conv& ref)
{
	this->_type = ref._type;
	this->_sign = ref._sign;
	this->_num = ref._num;
	return (*this);
}

t_type	Conv::getType() const
{
	return (this->_type);
}
bool	Conv::getSign() const
{
	return (this->_sign);
}
double	Conv::getNum() const
{
	return (this->_num);
}

std::ostream& operator<<(std::ostream& os, const Conv& ref)
{
	os << "char: ";
	if (ref.getType() == NAN || ref.getType() == INF)
		os << "impossible";
	else if (std::isprint(static_cast<unsigned char>(ref.getNum())))
		os << static_cast<unsigned char>(ref.getNum());
	else
		os << "Non displayable";
	os << std::endl << "int: ";
	if (ref.getType() == NAN)
		os << "impossible";
	else if (ref.getType() == INF)
		os << (ref.getSign()?"-":"+") << "inf";
	else
		os << static_cast<int>(ref.getNum());
	os << std::endl << "float: ";
	if (ref.getType() == NAN)
		os << "nan";
	else if (ref.getType() == INF)
		os << (ref.getSign()?"-":"+") << "inf";
	else
		os << static_cast<float>(ref.getNum());
	os << "f" << std::endl << "double: ";
	if (ref.getType() == NAN)
		os << "nan";
	else if (ref.getType() == INF)
		os << (ref.getSign()?"-":"+") << "inf";
	else
		os << (ref.getNum());
	os << std::endl;
	return (os);
}
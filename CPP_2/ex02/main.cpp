/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 05:54:38 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/21 13:36:15 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"


#define RED "\e[1;31m"
#define GREEN "\e[1;32m"
#define END "\033[0m"

static void	printTest(bool condition, std::string str)
{
	if (condition == true)
		std::cout << str << "\t==\t" << GREEN << "TRUE" << END << std::endl;
	else
		std::cout << str << "\t==\t" << RED << "FALSE" << END << std::endl;
		
}

int main(void) {
	Fixed a (10);
	Fixed b(2);
	Fixed const c(42.42f);
	Fixed const d(b);
	
	std::cout << std::endl << "a\t=\t" << GREEN << a << END << std::endl;
	std::cout << "b\t=\t" << GREEN << b << END << std::endl;
	printTest(a > b, "a > b");
	printTest(a < b, "a < b");
		
	std::cout << std::endl;
	a = b = 12;
	std::cout << "a\t=\t" << GREEN << a << END << std::endl;
	std::cout << "b\t=\t" << GREEN << b << END << std::endl;
	printTest(a >= b, "a >= b");	
	printTest(a <= b, "a <= b");	
	printTest(a == b, "a == b");	
	printTest(a != b, "a != b");	

	std::cout << std::endl;
	a = 10;
	b = 2;
	
	std::cout << "a\t=\t" << GREEN << a << END << std::endl;
	std::cout << "b\t=\t" << GREEN << b << END << std::endl;
	std::cout << "a + b\t==\t" << GREEN << a + b << END << std::endl;
	std::cout << "a - b\t==\t" << GREEN << a - b << END << std::endl;
	std::cout << "a * b\t==\t" << GREEN << a * b << END << std::endl;
	std::cout << "a / b\t==\t" << GREEN << a / b << END << std::endl << std::endl;
	
	a = 0;
	std::cout << "a\t==\t" << GREEN << a << END << std::endl;
	std::cout << "++a\t==\t" << GREEN << ++a << END << std::endl;
	std::cout << "a\t==\t" << GREEN << a << END << std::endl;
	std::cout << "a++\t==\t" << GREEN << a++ << END << std::endl;
	std::cout << "a\t==\t" << GREEN << a << END << std::endl << std::endl;

	std::cout << "a\t==\t" << GREEN << a << END << std::endl;
	std::cout << "--a\t==\t" << GREEN << --a << END << std::endl;
	std::cout << "a\t==\t" << GREEN << a << END << std::endl;
	std::cout << "a--\t==\t" << GREEN << a-- << END << std::endl;
	std::cout << "a\t==\t" << GREEN << a << END << std::endl << std::endl;

	a = -10;
	std::cout << "a\t==\t" << GREEN << a << END << std::endl;
	std::cout << "--a\t==\t" << GREEN << --a << END << std::endl;
	std::cout << "a\t==\t" << GREEN << a << END << std::endl;
	std::cout << "a--\t==\t" << GREEN << a-- << END << std::endl;
	std::cout << "a\t==\t" << GREEN << a << END << std::endl << std::endl;

	std::cout << "a\t=\t" << GREEN << a << END << std::endl;
	std::cout << "b\t=\t" << GREEN << b << END << std::endl;
	std::cout << "a + b\t==\t" << GREEN << a + b << END << std::endl;
	std::cout << "a - b\t==\t" << GREEN << a - b << END << std::endl;
	std::cout << "a * b\t==\t" << GREEN << a * b << END << std::endl;
	std::cout << "a / b\t==\t" << GREEN << a / b << END << std::endl << std::endl;

	std::cout << "a\t\t=\t" << GREEN << a << END << std::endl;
	std::cout << "b\t\t=\t" << GREEN << b << END << std::endl;
	std::cout << "min(a, b)\t==\t" << GREEN << Fixed::min( a, b ) << END << std::endl;
	std::cout << "max(a, b)\t==\t" << GREEN << Fixed::max( a, b ) << END << std::endl << std::endl;
	
	std::cout << "const c\t\t=\t" << GREEN << c << END << std::endl;
	std::cout << "const d\t\t=\t" << GREEN << d << END << std::endl;
	std::cout << "min(c, d)\t==\t" << GREEN << Fixed::min(c, d) << END << std::endl;
	std::cout << "max(c, d)\t==\t" << GREEN << Fixed::max(c, d) << END << std::endl;
	return 0;
}
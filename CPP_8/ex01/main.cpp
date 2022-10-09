/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 20:22:30 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/08 16:02:47 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#define TEST 50000

int main()
{
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(-111);
		//sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		Span	span2(TEST);
		/* Span	span2(500); */
		for (size_t i = 0; i < TEST; i++)
		{
			span2.addNumber(3);
		}
		try
		{
			span2.addNumber(3);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		Span	span3;
		try
		{
			span3.addNumber(3);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "addNumber 5x add -- add (5000) == 5000 add" << std::endl;
		Span span = Span(50000);
		std::vector<int> range(5000, 10);
		range[48] = 40;
		span.addNumber(5);
		span.addNumber(2);
		span.addNumber(5);
		span.addNumber(5);
		span.addNumber(2);
		try
		{
			span.addNumber(range.begin(), range.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
		std::cout << span.size() << std::endl << std::endl;
	}
	{
		std::cout << "addNumber 5x add -- add (50) == Exception 0 add" << std::endl;
		Span span = Span(5);
		std::vector<int> range(50, 10);
		range[48] = 40;
		span.addNumber(5);
		span.addNumber(2);
		span.addNumber(5);
		span.addNumber(5);
		span.addNumber(2);
		try
		{
			span.addNumber(range.begin(), range.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
		std::cout << span.size() << std::endl << std::endl;
	}
	{
		std::cout << "addNumber 2x add -- add (50) == Exception 48 add" << std::endl;
		Span span = Span(50);
		std::vector<int> range(50, 10);
		range[48] = 40;
		span.addNumber(5);
		span.addNumber(2);
		try
		{
			span.addNumber(range.begin(), range.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
		std::cout << span.size() << std::endl << std::endl;
	}
	return 0;
}

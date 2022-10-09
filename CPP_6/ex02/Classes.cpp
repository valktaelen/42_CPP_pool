/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 02:36:42 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/06 03:14:00 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "Classes.hpp"

Base::~Base() {}

//A::A() {}
A::~A() {}

//B::B() {}
B::~B() {}

//C::C() {}
C::~C() {}

Base * generate(void)
{
	int8_t	rand = std::rand() % 3;
	if (rand == 0)
	{
		std::cout << "generate A class" << std::endl;
		return (new A);
	}
	else if (rand == 1)
	{
		std::cout << "generate B class" << std::endl;
		return (new B);
	}
	std::cout << "generate C class" << std::endl;
	return (new C);
}
void identify(Base* p)
{
	//Base	*base;
	try
	{
		if (dynamic_cast<A*>(p))
		{
			std::cout << "identify : Class A" << std::endl;
			return ;
		}
	}
	catch(const std::exception& e) {}
	try
	{
		if (dynamic_cast<B*>(p))
		{
			std::cout << "identify : Class B" << std::endl;
			return ;
		}
	}
	catch(const std::exception& e) {}
	try
	{
		if (dynamic_cast<C*>(p))
		{
			std::cout << "identify : Class C" << std::endl;
			return ;
		}
	}
	catch(const std::exception& e) {}
}
void identify(Base& p)
{
	identify(&p);
}
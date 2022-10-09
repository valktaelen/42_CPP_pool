/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 02:33:15 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/06 03:05:41 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES_HPP
# define CLASSES_HPP
# include <iostream>

class Base
{
public:
	//Base();
	virtual ~Base();
};

class A: public Base
{
public:
	//A();
	virtual ~A();
};

class B: public Base
{
public:
	//B();
	virtual ~B();
};

class C: public Base
{
public:
	//C();
	virtual ~C();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif

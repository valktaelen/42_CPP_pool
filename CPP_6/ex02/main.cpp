/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 02:37:46 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/06 03:00:27 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"

void	test()
{
	Base*	ptr = generate();
	Base&	ref = *ptr;
	std::cout << "identification by pointer" << std::endl;
	identify(ptr);
	std::cout << "identification by reference" << std::endl;
	identify(ref);
	std::cout << std::endl;
	delete ptr;
}

int main()
{
	for (size_t i = 0; i < 15; i++)
		test();
	return 0;
}

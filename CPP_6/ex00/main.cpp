/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 22:38:30 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/06 00:57:39 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Conv.hpp"

int main(int argc, char const *argv[])
{
	if (argc == 2)
	{
		try
		{
			Conv a(argv[1]);
			std::cout << a;
		}
		catch(const std::exception& e)
		{
			//std::cerr << e.what() << '\n';
		}
	}
	else
	{
		std::cerr << "Error: Usage: ./exec number" << std::endl;
	}
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:52:58 by aartiges          #+#    #+#             */
/*   Updated: 2022/01/24 20:26:38 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char const *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		std::string::iterator iter;
		for (int i = 1; i < argc; i++)
		{
			std::string	tmp(argv[i]);
			for(iter = tmp.begin(); iter != tmp.end(); iter++)
				std::cout << (char)std::toupper(*iter);
		}
		std::cout << std::endl;
	}
	return (EXIT_SUCCESS);
}

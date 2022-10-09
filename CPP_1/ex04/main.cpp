/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 02:43:28 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/21 02:46:23 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 4)
	{
		std::wcout << "Usage: ./exec fileToRead strToReplace newStr" << std::endl;
		return (1);
	}
	Sed s(argv[1], argv[2], argv[3]);
	return 0;
}

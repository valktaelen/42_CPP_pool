/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 04:31:04 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/06 04:49:22 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

#define TEST_LEN 22

int main()
{
	int	integer[TEST_LEN] = {0};
	::print_array(integer, TEST_LEN);
	::iter(integer, TEST_LEN, &(::acc));
	::print_array(integer, TEST_LEN);

	char	string[TEST_LEN] = "je pense donc je suis";
	::print_array(string, TEST_LEN);
	::iter(string, TEST_LEN, &(::acc));
	::print_array(string, TEST_LEN);
	return 0;
}

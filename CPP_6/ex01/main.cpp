/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 01:07:55 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/06 01:27:25 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}
Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data		data = {10, true, '1'};
	uintptr_t	ptr;
	ptr = serialize(&data);
	Data* tmp = deserialize(ptr);
	std::cout << "valeur uint_ptr_t" << std::endl;
	std::cout << std::hex << ptr << std::endl;
	std::cout << "valeur pointeur sur data" << std::endl;
	std::cout << std::hex << tmp << std::endl;
	std::cout << "valeur de Data" << std::endl;
	std::cout << tmp->a << std::endl;
	std::cout << tmp->b << std::endl;
	std::cout << tmp->c << std::endl;
	return 0;
}


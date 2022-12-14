/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 20:22:26 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/07 17:21:51 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include "easyfind.hpp"

int main()
{
	{
		std::vector<int> vec(5, 5);
		for (int i = 0; i < 5; i++)
			vec[i] = i;
		std::vector<int>::iterator found = easyfind(vec, 2);
		if (found == vec.end())
			std::cout << "cannot find 2 in vector" << std::endl;
		else
			std::cout << "found 2 in vector " << *found << std::endl;
		if (easyfind(vec, 99) == vec.end())
			std::cout << "99 not found in vector" << std::endl;
	}

	{
		std::deque<int> deque;
		for (int i = 0; i < 5; i++)
			deque.push_back(i);
		std::deque<int>::iterator found = easyfind(deque, 3);
		if (found == deque.end())
			std::cout << "cannot find 3 in deque" << std::endl;
		else
			std::cout << "found 3 in deque " << *found << std::endl;
		if (easyfind(deque, 99) == deque.end())
			std::cout << "99 not found in deque" << std::endl;
	}

	{
		std::list<int> lst;
		for (int i = 0; i < 5; i++)
			lst.push_back(i + 42);
		std::list<int>::iterator found = easyfind(lst, 42);
		if (found == lst.end())
			std::cout << "cannot find 42 in list" << std::endl;
		else
			std::cout << "found 42 in list " << *found << std::endl;
		if (easyfind(lst, 99) == lst.end())
			std::cout << "99 not found in list" << std::endl;
	}

	{	std::set<int> set;
		for (int i = 0; i < 5; i++)
			if (!set.insert(42 + i).second)
				std::cout << "failed to insert " << 42 + i << " in set !" << std::endl;
		std::set<int>::iterator found = easyfind(set, 42);
		if (found == set.end())
			std::cout << "cannot find 42 in set" << std::endl;
		else
			std::cout << "found 42 in set " << *found << std::endl;
		if (easyfind(set, 99) == set.end())
			std::cout << "99 not found in set" << std::endl;
	}

	{
		std::multiset<int> multiset;
		for (int i = 0; i < 5; i++)
			multiset.insert(42 + i);
		std::multiset<int>::iterator found = easyfind(multiset, 42);
		if (found == multiset.end())
			std::cout << "cannot find 42 in multiset" << std::endl;
		else
			std::cout << "found 42 in multiset " << *found << std::endl;
		if (easyfind(multiset, 99) == multiset.end())
			std::cout << "99 not found in multiset" << std::endl;
	}
	return 0;
}


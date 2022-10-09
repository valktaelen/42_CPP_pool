/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 20:24:20 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/08 17:56:21 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
# include <list>

int main()
{
	{
		std::cout << "With MutantStack<int>" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
		std::stack<int> tmp = mstack;
	}
	std::cout << std::endl;
	{
		std::cout << "With std::list<int>" << std::endl;
		std::list<int> mList;
		mList.push_back(5);
		mList.push_back(17);
		std::cout << mList.back() << std::endl;
		mList.pop_back();
		std::cout << mList.size() << std::endl;
		mList.push_back(3);
		mList.push_back(5);
		mList.push_back(737);
		//[...]
		mList.push_back(0);
		std::list<int>::iterator it = mList.begin();
		std::list<int>::iterator ite = mList.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::list<int> lst(mList);
		std::list<int> tmp = mList;
	}
	return 0;
}

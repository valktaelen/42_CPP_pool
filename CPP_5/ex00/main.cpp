/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:25:51 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/03 14:40:26 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::string	p1 = "Jean";
	std::string	p2 = "Robert";
	std::string	p3 = "Chirstine";
	std::string	p4 = "Claire";
	Bureaucrat b1;
	Bureaucrat b2(p1, 5);
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << "\nNew try:" << std::endl;
	try{
		std::cout << b1 << std::endl;
		std::cout << "decremente" << std::endl;
		b1.decGrade();
		std::cout << b1 << std::endl;
	}catch(std::exception const &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\nNew try:" << std::endl;
	try{
		std::cout << b2 << std::endl;
		std::cout << "incremente" << std::endl;
		b2.accGrade();
		std::cout << b2 << std::endl;
	}catch(std::exception const &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\nNew try:" << std::endl;
	try {
		std::cout << "Try creation Bureaucrat avec une grade de -1" << std::endl;
		Bureaucrat b3(p2, -1);
		std::cout << b3 << std::endl;
	}catch(std::exception const &e){
		std::cerr << p2 << " " << e.what() << std::endl;
	}
	std::cout << "\nNew try:" << std::endl;
	try {
		std::cout << "Try creation Bureaucrat avec une grade de 151" << std::endl;
		Bureaucrat b4("Exception", 151);
		std::cout << b4 << std::endl;
	}catch(std::exception const &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\nNew try:" << std::endl;
	try{
		std::cout << "Try creation Bureaucrat avec grade 150 et update" << std::endl;
		Bureaucrat b5("smith", 150);
		std::cout << b5 << std::endl;
		b5.decGrade();
		std::cout << b5 << std::endl;
	}catch(std::exception const &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\nNew try:" << std::endl;
	try{
		std::cout << "Try creation Bureaucrat avec grade 150 et update" << std::endl;
		Bureaucrat b5("main", 0);
		std::cout << b5 << std::endl;
		b5.accGrade();
		std::cout << b5 << std::endl;
	}catch(std::exception const &e){
		std::cerr << e.what() << std::endl;
	}
	return 0;
}

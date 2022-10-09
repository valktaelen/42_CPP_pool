/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 20:22:24 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/04 13:32:20 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	
}
Intern::Intern(const Intern& ref)
{
	*this = ref;
}
Intern::~Intern()
{
	
}
Form*	Intern::makeRobotomyRequestForm(std::string formTarget)
{
	return (new RobotomyRequestForm(formTarget));
}
Form*	Intern::makePresidentialPardonForm(std::string formTarget)
{
	return (new PresidentialPardonForm(formTarget));
}
Form*	Intern::makeShrubberyCreationForm(std::string formTarget)
{
	return (new ShrubberyCreationForm(formTarget));
}
Form*	Intern::makeForm(std::string formName, std::string formTarget)
{
	std::string	levels[TYPE]
		= {"robotomy request", "presidential pardon", "shrubbery creation"};
	Form*	(Intern::*levelsFct[TYPE])(std::string) = {
		&Intern::makeRobotomyRequestForm,
		&Intern::makePresidentialPardonForm,
		&Intern::makeShrubberyCreationForm
	};
	for (size_t i = 0; i < TYPE; i++)
	{
		if (levels[i].compare(formName) == 0)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return ((this->*levelsFct[i])(formTarget));
		}
	}
	std::cout << "Nom du formulaire invalide" << std::endl;
	return (NULL);
}
Intern&	Intern::operator=(const Intern& ref)
{
	(void)ref;
	return *this;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 20:17:46 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/03 23:54:11 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

# define TYPE 3

class Intern
{
private:
	Form*	makeRobotomyRequestForm(std::string formTarget);
	Form*	makePresidentialPardonForm(std::string formTarget);
	Form*	makeShrubberyCreationForm(std::string formTarget);
public:
	Intern();
	Intern(const Intern& ref);
	~Intern();

	Form*	makeForm(std::string formName, std::string formTarget);
	Intern&	operator=(const Intern& ref);
};

#endif

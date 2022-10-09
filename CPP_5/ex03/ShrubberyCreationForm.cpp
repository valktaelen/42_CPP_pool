/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:35:17 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/03 19:35:27 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
	Form("ShrubberyCreationForm", 145, 137), _target("noTarget")
{

}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form("ShrubberyCreationForm", 145, 137), _target(target)
{

}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ref):
	Form(ref), _target(ref._target)
{

}
ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& ref)
{
	Form::operator=(ref);
	this->_target = ref._target;
	return (*this);
}
void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getLevelExec() || !(this->getSign()))
		throw Form::ExecuteException();
	std::ofstream ofs (this->_target + "_shrubbery", std::ofstream::out);
	if (ofs.fail())
		throw ShrubberyCreationForm::FileException();
	ofs <<	"   k   " << std::endl;
	ofs <<	"  kkk  " << std::endl;
	ofs <<	" llkll " << std::endl;
	ofs <<	"pllkllp" << std::endl;
	ofs <<	"    ok    " << std::endl;
	ofs <<	"  okokok  " << std::endl;
	ofs <<	" lsloklsl " << std::endl;
	ofs <<	"_pllokllp_" << std::endl;
	ofs.close();
}

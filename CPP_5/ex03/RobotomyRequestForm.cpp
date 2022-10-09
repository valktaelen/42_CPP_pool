/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:35:11 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/03 20:11:14 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
	Form("RobotomyRequestForm", 72, 45), _target("noTarget")
{

}
RobotomyRequestForm::RobotomyRequestForm(std::string target):
	Form("RobotomyRequestForm", 72, 45), _target(target)
{

}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& ref):
	Form(ref), _target(ref._target)
{

}
RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& ref)
{
	Form::operator=(ref);
	this->_target = ref._target;
	return (*this);
}
void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getLevelExec() || !(this->getSign()))
		throw Form::ExecuteException();
	std::cout << "bzzzz bbbzzzzzz [bruit de perceuse]" << std::endl;
	if (std::rand() % 2)
		std::cout << this->_target << " a été robotomisée avec succès" << std::endl;
	else
		std::cout << this->_target << " n'a pas été robotomisée [echec de l'operation]" << std::endl;
}

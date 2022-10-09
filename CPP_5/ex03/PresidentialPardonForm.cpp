/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:35:05 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/03 19:22:01 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
	Form("PresidentialPardonForm", 25, 5), _target("noTarget")
{

}
PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form("PresidentialPardonForm", 25, 5), _target(target)
{

}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ref):
	Form(ref), _target(ref._target)
{

}
PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& ref)
{
	Form::operator=(ref);
	this->_target = ref._target;
	return (*this);
}
void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getLevelExec() || !(this->getSign()))
		throw Form::ExecuteException();
	std::cout << this->_target << " a été pardonnée  par Zaphod Beeblebrox" << std::endl;
}

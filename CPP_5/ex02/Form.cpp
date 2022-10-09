/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:42:50 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/03 17:08:18 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("noName"), _sign(false), _levelSign(std::rand() % B_SUP + 1),
	_levelExec(std::rand() % B_SUP + 1)
{

}
Form::Form(const Form& ref): _name(ref.getName()),
	_levelSign(ref.getLevelSign()), _levelExec(ref.getLevelExec())
{
	*this = ref;
}
Form::~Form()
{

}
Form&	Form::operator=(const Form& ref)
{
	this->_sign = ref.getSign();
	return (*this);
}

std::string	Form::getName() const
{
	return (this->_name);
}
bool				Form::getSign() const
{
	return (this->_sign);
}
short			Form::getLevelSign() const
{
	return (this->_levelSign);
}
short			Form::getLevelExec() const
{
	return (this->_levelExec);
}

void	Form::beSigned(const Bureaucrat& ref)
{
	if (this->getLevelSign() < ref.getGrade())
		throw Form::GradeTooLowException();
	if (this->getSign())
		return ;
	this->_sign = true;
}
Form::Form(std::string name, bool sign, short levelSign, short levelExec):
	_name(name), _sign(sign), _levelSign(levelSign), _levelExec(levelExec)
{
	if (this->getLevelSign() > B_SUP || this->getLevelExec() > B_SUP)
		throw Form::GradeTooLowException();
	if (this->getLevelSign() < B_INF || this->getLevelExec() < B_INF)
		throw Form::GradeTooHighException();
}
Form::Form(std::string name, short levelSign, short levelExec):
	_name(name), _sign(false), _levelSign(levelSign), _levelExec(levelExec)
{
	if (this->getLevelSign() > B_SUP || this->getLevelExec() > B_SUP)
		throw Form::GradeTooLowException();
	if (this->getLevelSign() < B_INF || this->getLevelExec() < B_INF)
		throw Form::GradeTooHighException();
}
std::ostream&	operator<<(std::ostream& os, const Form& ref)
{
	os << "Form " << ref.getName() << (ref.getSign()? " is signed ": " is NOT signed ")
	<< "grade sign: " << ref.getLevelSign() << " grade exec: " << ref.getLevelExec();
	return (os);
}

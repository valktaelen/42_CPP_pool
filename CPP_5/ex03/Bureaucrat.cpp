/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:26:44 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/03 20:06:22 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("noName"), _grade(1)
{

}
Bureaucrat::Bureaucrat(const std::string name, const short grade): _name(name)
{
	if (grade < B_INF)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > B_SUP)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat& ref): _name(ref.getName()), _grade(ref.getGrade())
{

}
Bureaucrat::~Bureaucrat()
{

}
const std::string	Bureaucrat::getName() const
{
	return (this->_name);
}
short	Bureaucrat::getGrade() const
{
	return (this->_grade);
}
void	Bureaucrat::accGrade()
{
	short	test = this->_grade - 1;
	if (test < B_INF)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = test;
}
void	Bureaucrat::decGrade()
{
	short	test = this->_grade + 1;
	if (test > B_SUP)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = test;
}
Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& ref)
{
	this->_grade = ref.getGrade();
	return (*this);
}
void	Bureaucrat::signForm(Form& ref) const
{
	if (ref.getSign())
	{
		std::cout << this->getName() << " couldn't sign " << ref.getName()
			<< " beacause alreadySign" << std::endl;
		return ;
	}
	ref.beSigned(*this);
	if (ref.getSign())
		std::cout << this->getName() << " signed " << ref.getName() << std::endl;
	else
		std::cout << this->getName() << " couldn't sign " << ref.getName()
			<< " beacause bad grade" << std::endl;
}
std::ostream&	operator<<(std::ostream& os, const Bureaucrat& ref)
{
	os << ref.getName() << ", bureaucrat grade " << ref.getGrade();
	return (os);
}
void	Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " execute " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
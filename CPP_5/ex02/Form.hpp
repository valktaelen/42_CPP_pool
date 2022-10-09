/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:42:53 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/03 19:18:05 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>

class Form;
# include "Bureaucrat.hpp"

class Form
{
private:
	const std::string	_name;
	bool				_sign;
	const short			_levelSign;
	const short			_levelExec;
protected:
	Form();
	Form(std::string _name, bool _sign, short _levelSign, short _levelExec);
	Form(std::string _name, short _levelSign, short _levelExec);
	Form(const Form& ref);
public:
	virtual ~Form();
	virtual Form&	operator=(const Form& ref);

	std::string	getName() const;
	bool		getSign() const;
	short		getLevelSign() const;
	short		getLevelExec() const;

	void	beSigned(const Bureaucrat& ref);
	class GradeTooHighException: public std::exception
	{
		public:
		const char*	what() const throw()
		{
			return ("GradeTooHighException");
		}
	};
	class GradeTooLowException: public std::exception
	{
		public:
		const char*	what() const throw()
		{
			return ("GradeTooLowException");
		}
	};
	class ExecuteException: public std::exception
	{
		public:
		const char*	what() const throw()
		{
			return ("ExecuteException: Form not signed or grade not good");
		}
	};
	virtual void	execute(Bureaucrat const & executor) const = 0;
};

std::ostream&	operator<<(std::ostream& os, const Form& ref);

#endif

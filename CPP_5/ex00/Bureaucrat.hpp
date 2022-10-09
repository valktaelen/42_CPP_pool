/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:10:06 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/03 14:33:53 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

# define B_INF 1
# define B_SUP 150

class Bureaucrat
{
private:
	const std::string	_name;
	short				_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, short grade);
	Bureaucrat(const Bureaucrat& ref);
	~Bureaucrat();
	const std::string	getName() const;
	short				getGrade() const;
	void	accGrade();
	void	decGrade();
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
	Bureaucrat&	operator=(const Bureaucrat& ref);
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& ref);

#endif

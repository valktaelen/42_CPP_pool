/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:35:14 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/03 19:03:00 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP
# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:
	std::string	_target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& ref);
	~RobotomyRequestForm();

	RobotomyRequestForm& operator=(const RobotomyRequestForm& ref);
	virtual void	execute(Bureaucrat const & executor) const;
};

#endif

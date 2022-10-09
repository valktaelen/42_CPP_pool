/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:35:20 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/03 19:30:58 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERY_CREATION_FORM_HPP
# define SHRUBERY_CREATION_FORM_HPP
# include <iostream>
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm: public Form
{
private:
	std::string	_target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& ref);
	~ShrubberyCreationForm();

	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& ref);
	virtual void	execute(Bureaucrat const & executor) const;
	class FileException: public std::exception
	{
		public:
		const char*	what() const throw()
		{
			return ("FileException: can't open file");
		}
	};
};

#endif

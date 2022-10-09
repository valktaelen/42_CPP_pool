/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:06:55 by aartiges          #+#    #+#             */
/*   Updated: 2022/03/14 16:58:09 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP

# define LEN_COL 10

# include <iostream>
# include <string>
# include <iomanip>

class	Contact {
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phone;
	std::string	_darkestSecret;
public:
	Contact(void);
	~Contact(void);

	void		printContact(void) const;
	void		showContact(void) const;
	std::string	getFirstName(void) const;
	void		setContact(	std::string firstname, std::string lastName,
						std::string nickname, std::string phone,
						std::string darkestSecret);
};

#endif
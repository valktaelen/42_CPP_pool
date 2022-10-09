/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:09:13 by aartiges          #+#    #+#             */
/*   Updated: 2022/03/21 15:26:37 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# define NB_CONTACT 8

# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"

class	PhoneBook {
private:
	Contact	_contacts[NB_CONTACT];
	int		_pos;
public:
	PhoneBook(void);
	~PhoneBook(void);

	bool	search(void) const;
	void	search(int	index) const;
	bool	add(void);
};

#endif

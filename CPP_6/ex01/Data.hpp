/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 01:03:49 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/06 01:07:37 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

typedef struct s_Data
{
	int		a;
	bool	b;
	char	c;
}	Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif

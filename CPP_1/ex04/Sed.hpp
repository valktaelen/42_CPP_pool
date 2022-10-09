/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 00:53:28 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/21 04:38:03 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP
# include <iostream>
# include <fstream>

# define EXT_OUT ".replace"
# define SIZE_BUF 256

class Sed
{
private:
	std::string		_fileOrigin;
	std::ifstream	_input;
	std::string		_fileDest;
	std::ofstream	_output;
	std::string		_s1;
	std::string		_s2;
	bool			checkFile();
	int				replace();
	void			copy();
public:
	Sed(std::string fileOrigin, std::string s1, std::string s2);
	Sed();
	void	applySed(std::string fileOrigin, std::string s1, std::string s2);
	~Sed();
};

#endif
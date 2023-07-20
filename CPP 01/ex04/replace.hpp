/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 10:20:17 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/20 18:05:30 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
 #define REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>

class replace
{
private:
	std::ifstream	in_FILE;
	std::ofstream	out_FILE;
	std::string		s1;
	std::string		s2;
	void			replace_str ( std::string &str );
public:
	replace( char *s1, char *s2 );
	int	open_File ( char *f_name );
	void	replace_File ( void );
};

#endif
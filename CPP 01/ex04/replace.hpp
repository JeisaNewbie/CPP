/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 10:20:17 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/18 18:59:42 by ahkiler          ###   ########.fr       */
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
public:
	replace( char *s1, char *s2 ) : s1 (s1), s2 (s2) {};
	int	open_File ( char *f_name );
	void	replace_str ( std::string &str );
	void	replace_File ( void );
};

#endif
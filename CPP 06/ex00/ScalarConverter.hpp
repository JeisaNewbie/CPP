/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 17:20:53 by ahkiler           #+#    #+#             */
/*   Updated: 2023/06/01 20:32:04 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
 #define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class ScalarConverter
{
private:
	static char to_char;
	static int to_int;
	static float to_float;
	static double to_double;
	void convert_to_char( const std::string& copy );
	void convert_to_int( const std::string& copy );
	void convert_to_float( const std::string& copy );
	void convert_to_double( const std::string& copy );
public:
	ScalarConverter( void );
	ScalarConverter( const ScalarConverter& copy );
	ScalarConverter& operator=( const ScalarConverter& copy );
	void convert( const char *origin );
	~ScalarConverter( void );
	class NonDisplayable: public std::exception
	{
		public:
			virtual const char* what( void ) const throw() {return ("Non displayable");};
	};
	class Impossible: public std::exception
	{
		public:
			virtual const char* what( void ) const throw() {return ("impossible");};
	};
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 17:33:06 by ahkiler           #+#    #+#             */
/*   Updated: 2023/06/02 11:54:52 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void )
{
	// std::cout<<"ScalarConverter Default Constructor called"<<std::endl;
}

ScalarConverter::ScalarConverter( const ScalarConverter& copy )
{
	// std::cout<<"ScalarConverter Default Copy Constructor called"<<std::endl;
}

ScalarConverter& ScalarConverter::operator=( const ScalarConverter& copy )
{
	return (*this);
}

void ScalarConverter::convert_to_char( const std::string& copy )
{
	char *end;

	try
	{
		if (!copy.compare ("nan") || !copy.compare("-inf") || !copy.compare("+inf") || !copy.compare("inf"))
			throw Impossible();
		long check_char = std::strtol(copy.c_str(), &end, 10);
		if (check_char > 127 || strlen(end) > 1)
			throw Impossible();
		if (strlen(end) == 1)
		{
			if (end[0] != 'f')
				throw Impossible();
		}
		if (check_char < 33 || check_char == 127)
			throw NonDisplayable();
		char *tmp_char = const_cast<char *>(&this->to_char);
		*tmp_char = static_cast<char>(check_char);
		std::cout<<"char: '"<<to_char<<"'"<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr <<"char: "<< e.what() << '\n';
	}
}

void ScalarConverter::convert_to_int( const std::string& copy )
{
	char *end;

	try
	{
		if (!copy.compare ("nan") || !copy.compare("-inf") || !copy.compare("+inf") || !copy.compare("inf"))
			throw Impossible();
		long check_int = std::strtol(copy.c_str(), &end, 10);
		if (!(-2147483648 <= check_int && check_int <= 2147483647) || strlen(end) > 1)
			throw Impossible();
		if (strlen(end) == 1)
		{
			if (end[0] != 'f')
				throw Impossible();
		}
		int *tmp_int = const_cast<int *>(&this->to_int);
		*tmp_int = static_cast<int>(check_int);
		std::cout<<"int: "<<to_int<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr <<"int: "<< e.what() << '\n';
	}
}
void check_zero( const std::string& copy )
{
	std::string::size_type n = copy.find('.', 0);
	if (n == std::string::npos)
		std::cout<<".0";
	else
	{
		std::string tmp = copy.substr(n);
		for (int i = 1; i < tmp.length(); i++)
		{
			if (tmp.at(i) != '0')
				return ;
		}
		std::cout<<".0";
	}
}

void ScalarConverter::convert_to_float( const std::string& copy )
{
	char *end;

	try
	{
		float *tmp_float = const_cast<float *>(&this->to_float);
		*tmp_float = std::strtof(copy.c_str(), &end);
		if (strlen(end) == 1)
		{
			if (end[0] != 'f')
				throw Impossible();
		}
		else if (strlen(end) > 1)
			throw Impossible();
		std::cout<<"float: "<<to_float;
		check_zero (copy);
		std::cout<<"f"<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr <<"float: "<< e.what() << '\n';
	}
}

void ScalarConverter::convert_to_double( const std::string& copy )
{
	char *end;

	try
	{
		double *tmp_double = const_cast<double *>(&this->to_double);
		*tmp_double = std::strtod(copy.c_str(), &end);
		if (strlen(end) == 1)
		{
			if (end[0] != 'f')
				throw Impossible();
		}
		else if (strlen(end) > 1)
			throw Impossible();
		std::cout<<"double: "<<to_double;
		check_zero (copy);
		std::cout<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr <<"double: "<< e.what() << '\n';
	}
}

void ScalarConverter::convert( const char *origin )
{
	std::string copy(origin);
	this->convert_to_char( copy );
	this->convert_to_int( copy );
	this->convert_to_float( copy );
	this->convert_to_double( copy );
}

ScalarConverter::~ScalarConverter( void )
{
	// std::cout<<"ScalarConverter Default Destructor called"<<std::endl;
}
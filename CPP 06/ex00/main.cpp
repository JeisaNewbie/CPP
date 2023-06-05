/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:30:55 by ahkiler           #+#    #+#             */
/*   Updated: 2023/06/01 20:32:47 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int ScalarConverter::to_int = 0;
char ScalarConverter::to_char = 0;
float ScalarConverter::to_float = 0.0f;
double ScalarConverter::to_double = 0.0;

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	ScalarConverter conv;
	conv.convert(argv[1]);
}
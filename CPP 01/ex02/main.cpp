/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:36:01 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/17 19:42:15 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main (int argc, char **argv)
{
	std::string	BRAIN ("HI THIS IS BRAIN");
	std::string	*stringPTR = &BRAIN;
	std::string	&stringREF = BRAIN;

	std::cout<<"Memory address of BRAIN: "<<&BRAIN<<std::endl;
	std::cout<<"Memory address of stringPTR: "<<stringPTR<<std::endl;
	std::cout<<"Memory address of stringREF: "<<&stringREF<<std::endl;

	std::cout<<"Value of BRAIN: "<<BRAIN<<std::endl;
	std::cout<<"Value of stringPTR: "<<*stringPTR<<std::endl;
	std::cout<<"Value of stringREF: "<<stringREF<<std::endl;
}
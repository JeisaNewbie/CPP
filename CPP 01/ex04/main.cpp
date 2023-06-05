/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:07:07 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/18 18:26:54 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main (int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout<<"Error: Argument"<<std::endl;
		return (1);
	}

	replace	FILE (argv[2], argv[3]);
	if (!FILE.open_File (argv[1]))
		return (1);
	FILE.replace_File ();
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:05:36 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/19 16:37:17 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout<<"Error: Arguments"<<std::endl;
		return (1);
	}
	Harl h;
	std::string level (argv[1]);
	h.harlFilter (level);
}
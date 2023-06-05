/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:23:17 by jhwang2           #+#    #+#             */
/*   Updated: 2023/05/16 22:05:25 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main (int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
		return (1);
	}
	for (int i = 1; i < argc; i++)
	{
		std::string tmp (argv[i]);
		std::transform (tmp.begin (), tmp.end (), tmp.begin (), ::toupper);
		std::cout<<tmp;
	}
	std::cout<<std::endl;
	return (0);
}
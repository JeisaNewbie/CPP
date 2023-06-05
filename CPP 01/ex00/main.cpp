/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:36:01 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/17 17:14:12 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (int argc, char **argv)
{
	std::string	name;

	while (1)
	{
		std::cout<<"Type name for newZombie"<<std::endl;
		std::getline (std::cin, name);
		if (!name.compare ("exit"))
			return (0);
		Zombie *tmpzombie = Zombie::newZombie (name);
		std::cout<<"This is newZombie"<<std::endl;
		tmpzombie->announce ();
		std::cout<<name<<" is dead!"<<std::endl;
		delete tmpzombie;
		std::cout<<"Type name for randomChump"<<std::endl;
		std::getline (std::cin, name);
		if (!name.compare ("exit"))
			return (0);
		Zombie::randomChump (name);
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:36:01 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/19 14:17:39 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (int argc, char **argv)
{
	std::string	name;

	std::cout<<"Type name for newZombie"<<std::endl;
	std::getline (std::cin, name);
	Zombie *tmpzombie = Zombie::newZombie (name);
	std::cout<<"This is newZombie"<<std::endl;
	tmpzombie->announce ();
	delete tmpzombie;
	std::cout<<"Type name for randomChump"<<std::endl;
	std::getline (std::cin, name);
	Zombie::randomChump (name);
}
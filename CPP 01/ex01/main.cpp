/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:36:01 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/22 17:17:50 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (int argc, char **argv)
{
	std::string	name;
	int			N;

	std::cout<<"Type name for newZombie"<<std::endl;
	std::getline (std::cin, name);
	std::cout<<"Type num_of_newZombie to make"<<std::endl;
	std::cin>>N;
	Zombie	*Z_arr = zombieHorde (N, name);
	std::cout<<Z_arr<<std::endl;
	for (int i = 0; i < N; i++)
	{
		std::cout<<"Number: "<<i + 1<<" ";
		Z_arr[i].announce ();
		std::cout<<&Z_arr[i]<<std::endl;
	}
	delete []Z_arr;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:16:50 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/17 18:54:11 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	Zombie	*Z_arr = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		Z_arr[i].name = name;
		std::cout<<"Number: "<<i + 1<<" Zombie created"<<std::endl;
	}
	return (Z_arr);
}
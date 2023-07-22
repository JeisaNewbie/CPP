/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:16:50 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/22 22:13:33 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*Z_arr = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		Z_arr[i].set_Name(name);
		std::cout<<"Number: "<<i + 1<<" Zombie created"<<std::endl;
	}
	return (Z_arr);
}
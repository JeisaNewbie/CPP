/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:13:31 by jhwang2           #+#    #+#             */
/*   Updated: 2023/07/23 18:28:57 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#define	MAX_VAL	10
int	main()
{
	Array<int>	origin(MAX_VAL);
	int			test[MAX_VAL];
	int			num = 0;

	for (int i = 0; i < MAX_VAL; i++)
	{
		num = rand();
		origin[i] = num;
		test[i] = num;
	}

	for (int i = 0; i < MAX_VAL + 1; i++)
	{
		std::cout<<"Array<int>: "<<origin[i]<<std::endl;
		std::cout<<"int       : "<<test[i]<<std::endl;
	}

	Array<int>	tmp(origin);
	for (int i = 0; i < MAX_VAL; i++)
	{
		std::cout<<"Array<int> origin: "<<origin[i]<<std::endl;
		std::cout<<"Array<int> tmp   : "<<tmp[i]<<std::endl;
	}

	origin[-1] = -1;
	std::cout<<"Array<int> origin: "<<origin[-1]<<std::endl;
}
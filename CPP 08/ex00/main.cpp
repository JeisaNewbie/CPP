/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:02:41 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/23 21:22:39 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;
	std::list<int> list;
	std::deque<int>	dec;

	for (int i = 1; i <= 5; i++)
	{
		vec.push_back (i);
		list.push_back (i);
		dec.push_back (i);
	}

	std::cout<<*(easyfind<std::vector<int> > (vec, 3))<<std::endl;
	std::cout<<*easyfind (list, 3)<<std::endl;
	std::cout<<*(easyfind<std::vector<int> > (vec, 5))<<std::endl;
	std::cout<<*(easyfind(dec, 4))<<std::endl;
	std::cout<<*easyfind (list, 6)<<std::endl;
}
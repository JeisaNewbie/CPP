/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:04:15 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/23 21:19:55 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
 #define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>

class NoValue: public std::exception
{
	virtual const char* what( void ) const throw() {return ("No Value");};
};

template <typename T>
typename T::iterator easyfind (T &container, int value)
{
	try
	{
		typename T::iterator it = std::find (container.begin(), container.end(), value);
		if (it == container.end())
			throw NoValue();
		return (it);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		exit (1);
	}
}

#endif
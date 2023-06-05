/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:59:09 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/23 17:39:01 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout<<"Brain Constructor called"<<std::endl;
	ideas = new std::string[100];
}

Brain::Brain( Brain& copy )
{
	*this = copy;
}

Brain& Brain::operator=( Brain& copy )
{
	if (this != &copy)
	{
		delete this->ideas;
		this->ideas =new  std::string[100];
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout<<"Brain Destructor called"<<std::endl;
	delete []ideas;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:59:09 by ahkiler           #+#    #+#             */
/*   Updated: 2023/08/18 16:47:28 by jhwang2          ###   ########.fr       */
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

Brain::~Brain()
{
	std::cout<<"Brain Destructor called"<<std::endl;
	delete []ideas;
}

Brain& Brain::operator=( Brain& copy )
{
	if (this != &copy)
	{
		delete []this->ideas;
		this->ideas = new std::string[100];
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	}
	return (*this);
}

void Brain::get_ideas(int i)
{
	if (!(0 <= i && i < 100))
		std::cout<<"Error: Out of Range"<<std::endl;
	std::cout<<this->ideas[i]<<std::endl;
}

void Brain::set_ideas(std::string &str, int i)
{
	if (!(0 <= i && i < 100))
		std::cout<<"Error: Out of Range"<<std::endl;
	this->ideas[i] = str;
}
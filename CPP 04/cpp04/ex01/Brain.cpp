/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:59:09 by ahkiler           #+#    #+#             */
/*   Updated: 2023/08/18 13:28:55 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout<<"Brain Constructor called"<<std::endl;
	ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = random_str();
		std::cout<<ideas[i]<<std::endl;
	}
}

Brain::Brain( Brain& copy )
{
	*this = copy;
}

Brain::~Brain()
{
	// std::cout<<"Brain Destructor called"<<std::endl;
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

std::string Brain::random_str()
{
	std::string alpha = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	std::string idea;
	
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 5; i++)
		idea.push_back(alpha[rand() % 61]);
	return idea;
}

void Brain::get_ideas()
{
	for (int i = 0; i < 100; i++)
		std::cout<<this->ideas[i]<<std::endl;
}